#include <stdio.h>



int main(){
	int a = 69;
	int* ptr = NULL;
	//*ptr = a; // does not work
	// use this instead:
	ptr = &a;
	printf("The value at address %p (i.e, the value of a) is:%d\n", ptr, *ptr);

	printf("The value at address %p (i.e, the value of a) is:%d\n", &a, a);
}
