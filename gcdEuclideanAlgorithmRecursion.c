#include <stdio.h>

int gcd(int x, int y){
	if(y==0){
		return x;
	}
	else if(x==0){
		return y;
	}

	return gcd(x<y?x:y, (x>y?x:y)%(x<y?x:y)); // this is same as this:  gcd(x<y?x:y, (x>y?x:y)-(x<y?x:y));  
}


int main(){
	int x,y;
	printf("Enter first number:\n");
	scanf("%d", &x);
	printf("Enter second number:\n");
	scanf("%d", &y);
	printf("%d\n", gcd(x, y));


	return 0;
}
