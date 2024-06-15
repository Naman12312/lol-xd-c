#include <stdio.h>



int main(){
	int a = 69;
	int* ptr = NULL;
	ptr = &a; // commenting or removing this line makes ptr a NULL pointer that cannot be dereferenced.
	if(ptr!=NULL){
			printf("The value at address ptr(i.e, %p) is : %d", ptr, *ptr);

	}

	else{
		printf("ptr cannot be dereferenced as it is a NULL pointer.");

	}
}
