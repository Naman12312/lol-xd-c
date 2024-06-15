#include <stdio.h>

int factorial(int n){
	int a = 1;
	for(int i =1; i<n+1; i++){
		a*=i;	
	}

	return a;

}

int main(){

	printf("%d", factorial(10))	;



	return 0;
}
