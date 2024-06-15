#include <stdio.h>

int gcd(int x,int y){
	if(x==1 || y==1){
		return 1;
	}

	else if((x%y)==0){
		return x;
	}

	return gcd(x%y, x);
}

int main(){

	int x = 7;
	int y = 16;

	printf("%d", gcd(x,y));



	return 0;
}
