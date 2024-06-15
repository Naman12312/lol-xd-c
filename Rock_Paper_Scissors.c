#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>





int generateRandomNumber(int n)
{
	srand(time(NULL));
	return rand()%n;
}

int declareWinner(int user, int computer){
	if(user==0 && computer==1){
		return 0;
	}
	else if(user==0 && computer==2){
		return 1;
	}

	else if(user==1 && computer==2){
		return 0;
	}
	else if(user==1 && computer==0){
		return 1;
	}
	else if(user==2 && computer==0){
		return 0;
	}
	else if(user==2 && computer==1){
		return 1;
	}
	else{
		return -1;
	}
}

int main(){
	char* arr[] = {"Rock", "Paper", "Scissors"};
	int userScore = 0;
	int computerScore = 0;
	char* user = (char*)malloc(20*sizeof(char));
	
	printf("What is your Name?:\n");
	scanf("%s", user);
	int size;
	for(int i = 0; i<20; i++){
		if(user[i]=='\0'){
			size = i+1;
			break;

		}
	}
	char* userName = (char*)malloc(size*sizeof(char));
	strcpy(userName, user);
	free(user);
	for(int i = 0; i<3; i++){
	int computerChoice = generateRandomNumber(3);
	
	printf("Enter 0 for Rock, 1 for Paper, 2 for Scissors\n");
	printf("%s's turn:\n", userName);
	int userChoice;
	scanf("%d", &userChoice);
	if(userChoice>2 || userChoice<0){
		printf("Please enter a valid input.");
		goto end;
	}
	printf("%s: %s\n", userName, arr[userChoice]);
	
	printf("computer: %s\n", arr[computerChoice]);
	
	int result = declareWinner(userChoice, computerChoice);
	if(result==1){
		userScore+=1;
	}
	else if(result==0){
		computerScore+=1;
	}
	
	printf((result==1)?"%s gets a point!\n":(result==0)?"computer gets a point!\n":"Draw\n", userName);

	
	}

	if(userScore<computerScore){
		printf("Computer Wins, Scores are Listed Below:\n%s:%d\nComputer:%d", userName, userScore, computerScore);

	}
	else if(userScore>computerScore){
		
		printf("%s Wins, Scores are Listed Below:\n%s:%d\nComputer:%d",userName, userName, userScore, computerScore);
	}

	else{
		
		printf("The match was a tie, Scores are Listed Below:\n%s:%d\nComputer:%d", userName, userScore, computerScore);
	}

	end:
	return 0;

}
