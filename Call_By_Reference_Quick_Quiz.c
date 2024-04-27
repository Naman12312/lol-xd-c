#include <stdio.h>

void addAndSubtract(int* a_, int* b_){
	int temp;
	temp = *a_;
	*a_ = *a_+*b_;
	*b_ = temp - *b_;
	

}

int main(){
	int a,b;
	a=4, b=3;
	printf("the value of a before running the function: %d\n", a);

	printf("the value of b before running the function: %d\n", b);
	addAndSubtract(&a, &b);

	printf("the value of a after running the function: %d\n", a);
	
	printf("the value of b after running the function: %d\n", b);


	return 0;
}
