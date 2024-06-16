#include <stdio.h> // put all the contents of stdio.h here
#define PI 3.14159
#define SQUARE(x) x*x // A macro. It is just like a function but it is faster and its function call is replaced by the return value before the compilation phase. (during the preprocessing phase the function call is replaced by the return value).


int main(){
	int r = 4;
	double var = PI; // PI will be replaced with 3.14159 during the preprocessing phase (before the compilation phase).
	printf("The value of PI is:%lf\n", var);
	printf("The area of the circle is: %f\n", PI*SQUARE(r)); // PI and SQUARE(r) will be replaced with 3.14159 and 16 respectively during the preprocessing phase. (before the compilation phase).
	
	




	return 0;
}
