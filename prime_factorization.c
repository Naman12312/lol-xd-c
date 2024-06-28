#include <stdio.h>
#include <stdlib.h>
#include "./primenumbers.c"
int* primeFactorization(int x){
	
	int* arr_x = (int*)malloc(1*sizeof(int));
	int i = 2;
	int j = 0;
	do{

	
		if(x==1){
			arr_x[j] = 1;
			break;
		}
		if(!prime(i)){
			i++;
			continue;
		}
		else{
			if(x%i==0){
				x=(int)x/i;
				arr_x[j] = i;
				j++;
				arr_x = (int*)realloc(arr_x, (j+1)*sizeof(int));
			}
			else{
				i++;
				continue;
			}
		}
	}while(1);
	return arr_x;
}
int main(){
	int* primeFactorizationof12 = primeFactorization(12);
	for (int i = 0; i<4; i++) {
		printf("%d, ", primeFactorizationof12[i]);
	
	}
}
