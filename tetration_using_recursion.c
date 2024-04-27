#include <math.h>
#include <stdio.h>
#include <math.h>
long tetration(int base, int tetra){

	if(tetra==1){
		return base;
	}
	long tetrau= pow(tetration(base,tetra-1), base);
	return tetrau;
}


int main(){

	int a=3;

	long tetra_a = tetration(a,a);

	printf("3 tetration of 3 is %ld", tetra_a);


	return 0;
}
