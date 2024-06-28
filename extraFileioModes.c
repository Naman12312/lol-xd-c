#include <stdio.h>


int main(){
	FILE* ptr = NULL;
	ptr = fopen("GoldarmGang.txt", "r+"); // r+ mode is used for both reading and writing, it starts writing from the start of the file, and replaces the old characters with the new ones, any remaining characters are left unchanged. Much like how the insert key works in keyboards.
	// example:
/*
	fputs("Hello", ptr); // replaces first five characters with h, e, l, l, o respectively. (when in r+ mode)
	fclose(ptr);
*/

	/*
	ptr = fopen("GoldarmGang.txt", "w+"); // w+ mode is used for both reading and writing, If the file exists, it erases all the content of the file and then starts writing. If it doesnt exist, it creates the file.
	// example:
	fputs("Hello", ptr);

	*/
	ptr = fopen("GoldarmGang.txt", "a+"); // a+ mode is used for both reading and writing, If the file exists, it starts writing from the end of the file, it appends any new string or character written to the file using fputc or fputs. If it doesnt exist, it creates the file.
	// example:
	fputs("Hello", ptr);



}
