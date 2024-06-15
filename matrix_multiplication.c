#include <stdio.h>
#include <stdlib.h>
#include "./dotProductFunction.c"
#include "./transposeOfMatrix.c"
int main(){
	int arr1[2][3] = {{1,2,3},
		          {4,5,6}};
	int arr2[3][2] = {{1,2}, 
		          {3,4}, 
			  {5,6}};
	int rows1 = sizeof(arr1)/sizeof(arr1[0]);
	int cols1 = sizeof(arr1[0])/sizeof(int);
	int rows2 = sizeof(arr2)/sizeof(arr2[0]);
	int cols2 = sizeof(arr2[0])/sizeof(int);
	int** arr0 = (int**)malloc(2*sizeof(int*));
	for (int i = 0; i<2; i++) {
		arr0[i] = (int*)malloc(3*sizeof(int));
	
	}
	int** arr00 = (int**)malloc(3*sizeof(int*));
	for (int i = 0; i<3; i++) {
		arr00[i] = (int*)malloc(2*sizeof(int));
	
	}
	

	if(sizeof(arr1)/sizeof(arr1[0]) != sizeof(arr2[0])/sizeof(int)){
		printf("These 2 matrices cannot be multiplied together.");
		goto end;
	
	}
	for (int i = 0; i<2; i++) {
		for (int j = 0; j<3; j++) {
			arr0[i][j] = arr1[i][j];
		
		}
	
	}
	for (int i = 0; i<3; i++) {
		for (int j = 0; j<2; j++) {
			arr00[i][j] = arr2[i][j];
		
		}
	
	}
	int** arr00T = T(arr00, 3,2);
	int** matMulArr = (int**)malloc(2*sizeof(int*));
	for (int i = 0; i<2; i++) {
		matMulArr[i] = (int*)malloc(2*sizeof(int));

	
	}
	printf("Memory has been allocated for matMulArray\n");
	for (int i = 0; i<2; i++) {
		for (int j = 0; j<2; j++) {
			matMulArr[i][j] = dotProduct(arr0[i], arr00T[j], 3);
		
		}
	
	}


	printf("[");

	for (int i = 0; i<2; i++) {
		printf("[");
		for (int j = 0; j<2; j++) {
			printf((j!=1)?"%d ":"%d", matMulArr[i][j]);
		
		}
		printf("]");
		if(i!=1){
			
		printf("\n");
		printf(" ");
		}
	
	}
	printf("]");







end:
	return 0;

	
}
