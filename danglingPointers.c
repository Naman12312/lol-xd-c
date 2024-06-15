#include <stdio.h>
#include <stdlib.h>

int* f(){
	int a = 69; // a is a local variable, it will get deleted once the function returns.
	return &a; // returning the address of a.
}
int main(){
	// Reasons why a pointer becomes a dangling pointer
	// Reason 1: Deallocation of an allocated memory block.
	int* ptr = (int*)malloc(4*sizeof(int));
	ptr[0] = 0;
	ptr[1] = 1;
	ptr[2] = 2;
	ptr[3] = 3;
	free(ptr); // ptr is now a dangling pointer. It points to the first element of a memory block that has been freed.
	ptr = NULL; // good practice: always make sure that no dangling pointer remains a dangling pointer, to do this make sure to make a dangling pointer a NULL pointer. Here, ptr is now a NULL pointer, it's not a dangling pointer anymore.
	
	// Reason 2: When a function returns the address of a local variable.
	int* dangPtr = f(); // dangPtr is a dangling pointer as the function returned the address of a local variable 'a' and that variable has been deleted now.
	dangPtr = NULL; // now dangPtr is a NULL pointer.
	

	// Reason 3: When a variable goes out of scope.
	int* danglingPtr3;
	{
		int i = 69; // this is i, it will go out of scope after line 29.
		danglingPtr3 = &i; // danglingPtr3 will not go out of scope as it is declared outside of this block.
	}

	// danglingPtr3 is now a dangling pointer as 'i' went out of scope, and got deleted.
	danglingPtr3 = NULL; // danglingPtr3 is now a NULL pointer.


}
