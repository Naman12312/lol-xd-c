#include <stdio.h>
int factorial(int n){
	if (n==0 || n==1) {
		return 1;
	}
	return 	factorial((n-1))*n;
 


}
int main(){
	while (1) {
	int i;
	scanf("%d", &i);
	printf("%d\n", factorial(i));	
	}
	
}
