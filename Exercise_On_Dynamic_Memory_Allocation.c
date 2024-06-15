#include <stdio.h>
#include <stdlib.h>


int main(){
	
// Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
    

	int neId1;
	printf("Enter the number of characters in the eId of Employee 1:\n");
	scanf("%d", &neId1);
	char* arr = (char*) malloc(neId1*sizeof(char));
	for (int i = 0; i<neId1; i++) {
		printf("Enter character %d in the eId of employee 1: ", i);
		scanf(" %c", &arr[i]);
	
	}
	int neId2;
	printf("Enter the number of characters in the eId of Employee 2:\n");
	scanf("%d", &neId2);
	neId2+=neId1;
	arr = (char*)realloc(arr, neId2*sizeof(char));
	for (int i = (neId1); i<neId2; i++) {
		printf("Enter character %d in the eId of employee 2: ", i-neId1);
		scanf(" %c", &arr[i]);
	
	}
	int neId3;
	printf("Enter the number of characters in the eId of Employee 3:");
	scanf("%d", &neId3);
	neId3+=neId2;
	arr = (char*)realloc(arr, neId3*sizeof(char));
	for (int i = (neId2); i<neId3; i++) {
		printf("Enter character %d in the eId of employee 3: ", i-neId2);
		scanf(" %c", &arr[i]);
	
	}


	// printing the eId's
	printf("eId of Employee1:\n");
	for (int i=0; i<neId1; i++) {
		printf("%c", arr[i]);
	
	}
	printf("\n");
	printf("eId of Employee2:\n");
	for(int i = neId1; i<neId2; i++){
		printf("%c", arr[i]);
	}
	printf("\n");

	printf("eId of Employee3:\n");
	for(int i = neId2; i<neId3; i++){
		printf("%c", arr[i]);
	}
	printf("\n");


	free(arr);
	return 0;

}
