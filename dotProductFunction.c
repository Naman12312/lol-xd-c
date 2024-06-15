#include <stdio.h>
#include <stdlib.h>
int dotProduct(int* arr0, int* arr1, int len){
	int* arr = (int*)malloc(len*sizeof(int));
	for (int i = 0; i<len; i++) {
		arr[i] = arr0[i]*arr1[i];
	
	}

	int sum = 0;
	for (int i = 0; i<len; i++) {
		sum+=arr[i];
	}

	return sum;
}


