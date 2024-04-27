#include <stdio.h>



int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int len = sizeof(arr)/sizeof(arr[0]);

	int arr2[len];
	printf("Array before reversal: \n");
	printf("[");
	for (int i=0; i<len; i++) {	
		printf("%d ", arr[i]);

	}
	printf("]\n");
	
	for (int i = len; i>0; i--) {
		arr2[len-i] = arr[i-1];
	
	}

	printf("Array after reversal: \n");
	printf("[");
	for (int i=0; i<len; i++) {	
		printf("%d ", arr2[i]);

	}
	printf("]\n");





	return 0;
}
