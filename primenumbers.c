#include <stdio.h>

int prime(int num){
	if(num==0 || num==1){
		return 0;
	}
	for (int i = 2; i*i<=num; i++) {
		
		if(num%i==0){
			return 0;
		}

	}

	return 1;
}
