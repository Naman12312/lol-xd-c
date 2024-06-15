#include <stdio.h>

int main(){
	int a = 69;
	int* ptr; // ptr is a wild pointer now.
	// Its best to initalize pointers as NULL pointers. like this: int* ptr = NULL;
	//*ptr = 6969; //A VERY bad practice, this will assign 6969 to a random address, and the program may crashin case the address is not valid. Avoid at all costs.
	ptr = &a; // ptr is no longer a wild pointer.
}
