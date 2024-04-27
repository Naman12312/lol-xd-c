#include <stdio.h>
void printStr(char arr[]){
	for(int i = 0; arr[i]!='\0'; i++){
		printf("%c", arr[i]);
	}
	printf("\n");
}
int main(){
	char str[] = {'G', 'o', 'l', 'd', 'A', 'r', 'm', 'G', 'a', 'n', 'g', '\0'};
	char str2[] = "GoldArmGang";
	printf("Using printf() function:\n");
	printf("%s\n", str);
	printf("%s\n", str2);
	printf("Using user-defined printStr() function:\n");
	printStr(str);
	printStr(str2);






	return 0;
}
