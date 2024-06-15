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
	/*
	printf("rows1: %d\n",rows1);
	printf("cols1: %d\n",cols1);
	printf("rows2: %d\n",rows2);
	printf("cols2: %d\n",cols2);
	*/
	int** arr0 = (int**)malloc(rows1*sizeof(int*));
	for (int i = 0; i<2; i++) {
		arr0[i] = (int*)malloc(cols1*sizeof(int));
	
	}
	int** arr00 = (int**)malloc(rows2*sizeof(int*));
	for (int i = 0; i<3; i++) {
		arr00[i] = (int*)malloc(cols2*sizeof(int));
	
	}
	

	if(sizeof(arr1)/sizeof(arr1[0]) != sizeof(arr2[0])/sizeof(int)){
		printf("These 2 matrices cannot be multiplied together.");
		goto end;
	
	}
	for (int i = 0; i<rows1; i++) {
		for (int j = 0; j<cols1; j++) {
			arr0[i][j] = arr1[i][j];
		
		}
	
	}
	for (int i = 0; i<rows2; i++) {
		for (int j = 0; j<cols2; j++) {
			arr00[i][j] = arr2[i][j];
		
		}
	
	}
	int** arr00T = T(arr00, rows2,cols2);
	printf("[");

	for (int i = 0; i<rows1; i++) {
		printf("[");
		for (int j = 0; j<cols1; j++) {
			printf("%d ", arr00T[i][j]);
		
		}
		printf("]");
		}
	
	}
	printf("]");
	int** matMulArr = (int**)malloc(rows1*sizeof(int*));
	for (int i = 0; i<2; i++) {
		matMulArr[i] = (int*)malloc(cols2*sizeof(int));

	
	}
	printf("Memory has been allocated for matMulArray\n");
	for (int i = 0; i<rows1; i++) {
		for (int j = 0; j<cols2; j++) {
			matMulArr[i][j] = dotProduct(arr0[i], arr00T[j], rows1);
		
		}
	
	}
	/*

	printf("[");

	for (int i = 0; i<rows1; i++) {
		printf("[");
		for (int j = 0; j<cols2; j++) {
			printf((j!=1)?"%d ":"%d", matMulArr[i][j]);
		
		}
		printf("]");
		if(i!=1){
			
		printf("\n");
		printf(" ");
		}
	
	}
	printf("]");



*/



end:
	return 0;

	
}
