#include <stdio.h>



void swap(int* x, int* y){
	int temp;

	temp = *x; // temp = 64 now.
	*x = *y; // main() function's local variable a = 128 now.
	*y = temp; // main() function's local variable b = 64 now.
	// values of a and b (main() function's local variables) have been swapped.





	return;
}











int main(){
	int a = 64,b=128;
	printf("%d and %d\n", a,b);
	swap(&a,&b); // call by reference, passing addresses of a and b.
	
	printf("%d and %d\n", a,b);
	



	return 0;
}
