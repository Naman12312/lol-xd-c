#include <stdio.h>

typedef struct Programmer
{
	int age;
	char primary_programming_lang[30];
	char field[30];

	char name[30];
} prg;


int main(){
	typedef unsigned long ul; // give alias to a data type
 
	ul num = 12313;	
	prg naman; // same as struct Programmer naman;

	int *a, b; // a is a int pointer, b is an int
	int c = 69;
	a = &c;
	//b = &c; // throws error as b is an int
	//to fix this give alias to int*
	typedef int* intPtr; //giving alias to int*
 
	intPtr d,e;


	d = &c;
	e = &c; // works as both are pointers now cuz of the alias given to int*


	
	
	return 0;
}
