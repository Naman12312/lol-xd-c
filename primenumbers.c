#include <stdio.h>

int prime(long num){
	if(num==0 || num==1){
		return 0;
	}
	for (long i = 2L; i*i<=num; i++) {
		
		if(num%i==0){
			printf("%ld is divisible by %ld\n", num, i);
			return 0;
		}

	}

	return 1;
}
int main(){
	long num;
	printf("Enter the number to be checked for primality\n");
	scanf("%ld", &num);
	int num_primality = prime(num)	;
	
	printf(num_primality?"%ld is a prime number":"%ld is not a prime number", num, num);
}
