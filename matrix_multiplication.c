#include <stdio.h>
#include <stdlib.h>
#include "./dotProductFunction.c"
#include "./transposeOfMatrix.c"
int main(){
	//d
	int arr1[2][3] = {{1,2,3},
		          {4,5,6}};
	int arr2[3][3] = {{1,2,3}, 
		          {3,4,7}, 
			  {5,6,8}};
	int rows1;
	int cols1;
	int rows2;
	int cols2;
	printf("Enter the number of rows in first matrix: \n");
	scanf(" %d", &rows1);
	
	printf("Enter the number of columns in first matrix: \n");
	scanf(" %d", &cols1);
	printf("Enter the number of rows in second matrix: \n");
	scanf(" %d", &rows2);
	
	printf("Enter the number of columns in second matrix: \n");
	scanf(" %d", &cols2);

	/*
	printf("rows1: %d\n",rows1);
	printf("cols1: %d\n",cols1);
	printf("rows2: %d\n",rows2);
	printf("cols2: %d\n",cols2);
	*/
	int** arr0 = (int**)malloc(rows1*sizeof(int*));
	for (int i = 0; i<rows1; i++) {
		arr0[i] = (int*)malloc(cols1*sizeof(int));
	
	}
	int** arr00 = (int**)malloc(rows2*sizeof(int*));
	for (int i = 0; i<rows2; i++) {
		arr00[i] = (int*)malloc(cols2*sizeof(int));
	
	}
	

	if(cols1 != rows2){
		printf("These 2 matrices cannot be multiplied together.");
		goto end;
	
	}
	for (int i = 0; i<rows1; i++) {
		for (int j = 0; j<cols1; j++) {
			printf("Enter matrix1[%d][%d]:\n", i,j);
			scanf(" %d", &arr0[i][j]);
		
		}
	
	}
	printf("H");
	for (int i = 0; i<rows2; i++) {
		for (int j = 0; j<cols2; j++) {
			printf("Enter matrix2[%d][%d]:\n", i,j);
			scanf(" %d", &arr00[i][j]);
		
		}
	
	}
	int** arr00T = T(arr00, rows2,cols2);
	int** matMulArr = (int**)malloc(rows1*sizeof(int*));
	for (int i = 0; i<rows1; i++) {
		matMulArr[i] = (int*)malloc(cols2*sizeof(int));

	
	}
	printf("Memory has been allocated for matMulArray\n");
	for (int i = 0; i<rows1; i++) {
		for (int j = 0; j<cols2; j++) {
			matMulArr[i][j] = dotProduct(arr0[i], arr00T[j], cols1);
		
		}
	
	}


	printf("[");

	for (int i = 0; i<rows1; i++) {
		printf("[");
		for (int j = 0; j<cols2; j++) {
			printf((j!=(cols2-1))?"%d ":"%d", matMulArr[i][j]);
		
		}
		printf("]");
		if(i!=(rows1-1)){
			
		printf("\n");
		printf(" ");
		}
	
	}
	printf("]");







end:
	return 0;

	
}
