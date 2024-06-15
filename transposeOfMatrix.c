#include <stdio.h>


#include <stdlib.h>


int** T(int** arr, int rows, int cols){
	int** arrT = (int**)malloc(cols * sizeof(int*));
	for(int i = 0; i<cols; i++){
		arrT[i] = (int*)malloc(rows * sizeof(int));
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arrT[j][i] = arr[i][j];
		
		}
	
	}
	/*
	printf("Transpose calculated\n");
		printf("[ ");
	for (int i = 0; i<3; i++) {
		printf("[ ");
		for (int j = 0; j<2; j++) {
			printf("%d ", arrT[i][j]);
		
		}
		printf("]");
	
	}
	printf("]");
	*/
	return arrT;
}





