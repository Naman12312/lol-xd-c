#include <stdio.h>


int main(){
	int a = 69;
	void* ptr = &a; // a void pointer, it is a general purpose pointer that can point to any variable of any data type, before deferencing it tho, we have to typecast it to the respective data type.
	printf("The address of a is %p and the value of a is %d.\n", ptr, *((int*)ptr));
	double b = 69.69;
	ptr = &b;
	printf("The address of b is %p and the value of b is %.2lf.\n", ptr, *((double*)ptr));


	return 0;
}
