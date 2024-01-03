#include <stdio.h>
int fib_recur(int n){
	if(n==0 || n==1){
	return n;

	}



	return fib_recur(n-1) + fib_recur(n-2);

}

int fib_iter(int n){
	if(n==0 || n==1){
	return n;

	}
	int a = 0;
	int b = 1;
	int temp;
	for (int i = 0; i<n; i++) {
		 temp = a;
		a = b;
		b = temp + b;
	}
	return a;
}
int main(){
	printf("%d\n", fib_iter(9));	

	printf("%d\n", fib_recur(9));


}
