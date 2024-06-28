#include <stdio.h>



int main(){
	FILE* ptr = NULL;
	ptr = fopen("GoldarmGang.txt", "w");
	/*
	char c = fgetc(ptr); // reads first character
	printf("%c", c);
	c = fgetc(ptr); // reads second character
	printf("%c", c);
	c = fgetc(ptr); // reads third character and so on.
	printf("%c", c);
	c = fgetc(ptr);
	printf("%c", c);
	c = fgetc(ptr);
	printf("%c", c);
	c = fgetc(ptr);
	printf("%c", c);

*/
	/*
	char str[4];
	fgets(str, 4, ptr);
	printf("%s", str);
	*/



//	fputc('G', ptr);
	fputs("GoldarmGang is grayscale nowadays....", ptr);









	return 0;
}
