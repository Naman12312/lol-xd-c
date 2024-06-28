#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y){
	int* arr = (int*)malloc(2*sizeof(int));
	if(x==y){
		return x;
	}
	arr[0] = x>y?x:y;
	arr[1] = x<y?x:y;
	do{
		int temp = arr[1];
		arr[1] = (int)arr[0]%arr[1];
		arr[0] = temp;
	}while(arr[1]!=0);

	return arr[0];

}


int main(){
	int x,y;
	printf("Enter first number\n");
	scanf("%d", &x);

	printf("Enter second number\n");
	scanf("%d", &y);
	int gcdOfxAndy = gcd(x, y);
	printf("gcd(%d,%d) = %d\n",x,y, gcdOfxAndy);
}

