#include <stdio.h>
#include <string.h>

int main(){
	printf("Enter name of person one: \n");
	char str1[100];
	char str2[100];
	char str3[300];
	char temp[150];
	gets(str1);
	
	printf("Enter name of person two: \n");
	gets(str2);
	
	strcpy(temp, strcat(str1, " is a friend of "));
	strcpy(str3, strcat(temp, str2)); 
		


	puts(str3);

}
