#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int* arr;
	int n;
	printf("Enter the number of elements in the array you want to create\n");
	scanf("%d", &n);
	arr = (int *)malloc(n*sizeof(int));
	for(int i =0; i<n; i++){
		printf("Enter the value at the index %d in the array\n", i);
		scanf("%d", &arr[i]);
	}
	printf("The array looks like this now:\n[ ");
	for (int i = 0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	
	
	printf("]\n");
	printf("Enter the new length of the array:\n");
	int n1;
	scanf("%d", &n1);

	// same thing as above using calloc()
	/*
	int* arr;
	int n;
	printf("Enter the number of elements in the array you want to create\n");
	scanf("%d", &n);
	arr = (int *)calloc(n,sizeof(int));
	for(int i =0; i<n; i++){
		printf("Enter the value at the index %d in the array\n", i);
		scanf("%d", &arr[i]);
	}
	printf("The array looks like this now:\n[ ");
	for (int i = 0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");	 




*/

	arr = (int*)realloc(arr, n1*sizeof(int));
	for(int i =0; i<n1; i++){
		printf("Enter the value at the index %d in the array\n", i);
		scanf("%d", &arr[i]);
	}
	printf("The array looks like this now:\n[ ");
	for (int i = 0; i<n1; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
	free(arr);
	printf("Freed the memory used up by arr, now we are gonna create a new array arr2\n");
	int n2;
	printf("Enter the number of elements in the arr2:\n");
	scanf("%d", &n2);
	int* arr2;
	arr2 = (int *)calloc(n2, sizeof(int));
	for(int i =0; i<n2; i++){
		printf("Enter the value at the index %d in the array\n", i);
		scanf("%d", &arr[i]);
	}
	printf("The array looks like this now:\n[ ");
	for (int i = 0; i<n2; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
	free(arr2);
	return 0;

}
