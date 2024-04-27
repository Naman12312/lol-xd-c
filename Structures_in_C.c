#include <stdio.h>
#include <string.h>
struct Programmer
{
	int age;
	char primary_programming_lang[30];
	char field[30];

	char name[30];
};
int main(){
	struct Programmer naman;
	strcpy(naman.name, "Naman Sharma");

	strcpy(naman.primary_programming_lang, "python");

	strcpy(naman.field, "Idk");
	naman.age = 14;


	// Quick Quiz
	printf("Info about Programmer naman:\n");

	printf("Full Name: %s\n", naman.name);

	printf("Age: %d\n", naman.age);
	printf("Field: %s\n", naman.field);
	printf("Primary Programming Language: %s\n", naman.primary_programming_lang);
}
