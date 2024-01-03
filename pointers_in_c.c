#include <stdio.h>

int main(){
	// Pointers
	int a = 100;
	int *ptra = &a;
	int *ptr2 = NULL; // NULL Pointer
	printf("Address of a is %p\n", &a);
	printf("Address of a is %p\n", ptra);
	printf("Address of ptra is %p\n", &ptra);
	printf("Value of a is %d\n", a);
	
	printf("Value of a is %d\n", *ptra);
	
	
	printf("\n");
	printf("\n");
	printf("\n");

	printf("Address of ptr2 is %p\n", &ptr2);
	printf("Address of NULL is %p\n", ptr2);

	printf("Value of NULL is %d\n", *ptr2);
}
