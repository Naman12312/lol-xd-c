#include <math.h>
#include <stdio.h>
#include <stdlib.h>
char* reverseArray(char arr[], int len){
	char* arr2 = (char*)malloc(len*sizeof(char));
	for (int i = len-1; i>=0; i--) {
		arr2[i] = arr[len-1-i];
	
	}


	return arr2;
}

int isPalindrome(int a){
	int number_of_digits;
	number_of_digits = floor(log10(a))+1;
	char* arr = (char*)malloc((number_of_digits+1)*sizeof(char));
	sprintf(arr, "%d", a);
	arr = (char*)realloc(arr, number_of_digits*sizeof(char));

	char* reversedArr = reverseArray(arr, number_of_digits);
	int isPal = 1;
	for (int i = 0; i<number_of_digits; i++) {
		if (arr[i]!=reversedArr[i]) {
			isPal = 0;
			break;
		
		}
	
	}
	return isPal;
}
int main(){
	int a;
	printf("Enter a number:\n");
	scanf("%d", &a);
	int isPalOrNot = isPalindrome(a);
	if (isPalOrNot) {
		printf("This number is a palindrome");
	}	
	else{
		printf("This number is not a palindrome");
	}
	

}
