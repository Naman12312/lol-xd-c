#include <stdio.h>



int main(){
	FILE* ptr = NULL;
	char str[34];
	ptr = fopen("GoldarmGang.txt", "r"); // open file in read mode.
	fscanf(ptr, "%s", str); // reads the file until a blankspace(or a new line character) is encountered, and writes it to the given string (here, str).
	printf("%s", str);

	/*
	char str2[64] = "The GoldarmGang is GrayScale Nowadays....";
	ptr = fopen("GoldarmGang.txt", "w"); // open file in write mode.
	fprintf(ptr, "%s", str2); // write to the file.
	*/
	char str3[64] = "\nThe GoldarmGang is GrayScale Nowadays....";
	ptr = fopen("GoldarmGang.txt", "a"); // open file in append mode.
	fprintf(ptr, "%s", str3); // write to the file.	
	fclose(ptr);	
	
	
	
	return 0;
}
