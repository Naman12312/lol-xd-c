#include <stdio.h>

int main(){

	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	//printing the array 
	printf("[ ");
	for(int i =0; i < 10; i++){
	printf("%d ", arr[i]);	
		
	}
	printf("]\n\n");
	
	
	// creating an array of first 10 even natural numbers using for loop
	int arr2[10];
	
	for (int i=0,j=0; i<20; i+=2,j++) {
		if((i%2)==0){
	
		arr2[j] = i;
		
		}
	}
	
	printf("[ ");
	// printing the array
	for (int i = 0; i<10; i++) {
		printf("%d ", arr2[i]);
	}
	printf("]\n\n");


	// Creating a 2 Dimensional Array:
	int arr_2d[3][5] = {{0,1,2,3,4},
		          {5,6,7,8,9},
		        {10,11,12,13,14}};
	//printing the 2 Dimensional Array:
	printf("[ ");
	printf("\n");
	for (int i = 0; i<3; i++) {
		printf("[ ");
		for (int j = 0; j<5; j++) {
			printf("%d ", arr_2d[i][j]);
		}
		
		printf("]");
		printf("\n");
	
	}
	printf("]");
		




	return 0;



	// moral of the story: C does not have an append() method, you have to build your own logic to do some tasks like creating an array of even numbers.
}
