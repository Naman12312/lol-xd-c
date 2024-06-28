#include <stdio.h>
#include <stdlib.h>
#include "./prime_factorization.c"
int gcd(int x,int y){

	if(x==y){
		return x;
	}
	else if(prime(x)){
		return 1;
	
	}
	else if(prime(y)){
		return 1;
	}
	else{
		int* primeFactorGCD = (int*)malloc(x*sizeof(int));
		int* primeFactorx = primeFactorization(x);

		int* primeFactory = primeFactorization(y);
		
		for (int i = 0; i<(x<y?x:y); i++) {
			if(primeFactorx[i]==primeFactory[i]){
				primeFactorGCD[i] = primeFactorx[i]
			}
		
		}
		for (int i = 0; i<x; i++) {
		
		}
	}

}

int main(){

	int x = 7;
	int y = 16;

	printf("%d", gcd(x,y));



	return 0;
}
