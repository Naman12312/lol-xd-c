#include <stdio.h>
int arr_length;
int min(double arr[]){
	int minimum = arr[0];
	for (int i =0; i<arr_length; i++) {
		if(arr[i]<minimum){

			minimum = arr[i];
		

		}
	}

	return minimum;

}

int indexOf(double arr[], int num){
	for(int i = 0; i<arr_length; i++){
		if(arr[i] == num){
			return i ;

		}

		

		


	}

			return -1;


}




int main(){
	double arr[] = {10, 14, 28, 11, 7, 16, 30, 50, 25, 18};

	int arr_length = (int)(sizeof(arr)/sizeof(double));
	int copy_arr[arr_length];
	int sorted_arr[arr_length];
	for(int i =0; i<arr_length; i++){
		copy_arr[i] = arr[i];


	}


	for (int i = 0; i<arr_length; i++) {
		sorted_arr[i] = min(arr);
		int index_num = indexOf(arr,min(arr));
		for (i = index_num; i < arr_length - 1; i++){
        	    arr[i] = arr[i + 1];
		}

	}
	printf("New sorted Array is :\n[");
	for(int i =0; i<arr_length; i++){
		printf("%d ",sorted_arr[i]);
	}
	


	


	
	printf("]");




}
