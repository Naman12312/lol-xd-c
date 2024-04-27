#include <stdio.h>
#include <string.h>
union Programmer
{
	int age;
	char primary_programming_lang[30];
	char field[30];

	char name[30];
};


int main(){
	// union is very similar to a structure, but you cannot access all elements at the same time with it, instead of allocating total size of members, it allocates memory equal to the size of the largest member, only one of the members	can be used at a time, others will get corrupted (the last member initalized is stored, rest are corrupted as shown here:)
	union Programmer naman;
	naman.age = 14;
	strcpy(naman.primary_programming_lang, "Python");
	strcpy(naman.field, "idk");
	strcpy(naman.name, "Naman Sharma");

	printf("Age is: %d\n", naman.age); //prints garbage value as naman.age is corrupted, only naman.name is available.
		
	printf("Field is: %s\n", naman.field); //prints garbage value as naman.field is corrupted, only naman.name is available.
	printf("Primary Programming Language is: %s\n", naman.primary_programming_lang); //prints garbage value as naman.primary_programming_lang is corrupted, only naman.name is available.
	printf("Name is: %s\n", naman.name); // prints the actual name as naman.name is not corrupted as it is the last member to be initalized.
	







	return 0;
}
