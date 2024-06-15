#include <math.h>
#include <stdio.h>
int sum = 3; // A global variable that belongs to external storage class
int f(){
	//static int sum; // A static variable that belongs to the static storage class.
	//sum++;
	extern int sum; // essentially telling the compiler to use the global variable sum.
	//int sum; // this will print garbage value, wont use the global variable by default.
	return sum;
}

int h(){
	int sum = 69; // an automatic variable that belongs to the auto storage class (a local variable stored in the stack).
	return sum;
}

int main(){
	// Storage Classes In C:
	const double pi = 3.14158; // An automatic constant that belongs to the auto storage class;
	printf("%d\n", f());
	printf("%d\n", f());
	printf("%d\n", f());
	printf("%d\n", f());
	printf("%d\n", f());
	register int x = 69; // A variable that belongs to the register storage class, this is stored in the cpu register, it is used for variables that are being used frequently.
}
