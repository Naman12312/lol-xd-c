#include <stdio.h>
void mul(int x, int n){
	
	if (n==10){
		return;
	}
	printf("%d\n", (n+1)*x);
	mul(x, (n+1));
}
int main(){
	printf("**********MULTIPLICATION TABLES**********\n");
	mul(2, 0);

	return 0;
}
