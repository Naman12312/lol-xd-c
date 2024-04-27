#include <stdio.h>
void func1(int array[]){
	array[0]=0;
}
void func2(int* ptr){
	//ptr[1]=1;
	//or
	*(ptr+1) = 1;
}
int main(){
	
	int arr[] = {1,2,3};
	printf("Array before running func1:");
	for (int i=0; i<3; i++) {
		printf("%d\n", arr[i]);
	}
	func1(arr);

	printf("Array after running func1:");
	for (int i=0; i<3; i++) {
		printf("%d\n", arr[i]);
	}

	
	printf("Array before running func2:");
	for (int i=0; i<3; i++) {
	printf("%d\n", arr[i]);
	}

	func2(arr);

	printf("Array after running func2:");
	for (int i=0; i<3; i++) {
	printf("%d\n", arr[i]);
	}	



	return 0;
}
