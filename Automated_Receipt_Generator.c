#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./sliceString.c"
#include "./compareString.c"
#include "./indexOf.c"
char* getTextContent(FILE* ptr){
	char ch;
	    fseek(ptr, 0L, SEEK_END); 
  
    // calculating the size of the file 
	    int res = ftell(ptr);
	rewind(ptr);
	char* str = (char*)malloc(res+1);
	int i = 0;
	do{
		ch = fgetc(ptr);
		str[i] = ch;
		i++;
	}while(ch!=EOF);
	str[i] = '\0';
	return str;
}

int main(){	
	FILE* ptr = NULL;
	ptr = fopen("letter.txt", "r");
	char * str = getTextContent(ptr);

  	char name[] = "Harry";
	char item[] = "Fan";
	char outlet[] = "Ram Laxmi Fan Outlet";
	str = (char*)realloc(str, (int)(strlen(str)*sizeof(char)) + (int)(sizeof(name))-1 + (int)(sizeof(item))-1 + (int)(sizeof(outlet))-1);
	int i = indexOf(str, '{');
		
	int j = indexOf(str, '}')+1;
	int firstOnei = i;
	if((int)strlen(name)<((j-i)+1)){
		do{
			
			str[i+(int)strlen(name)] = str[j+1];
			i++;
			j++;
		}while(str[j]!='\0');
		int k = 0;
		int l = firstOnei; 
		do{
			str[l] = name[k];
			k++;
			l++;
		}while(name[k]!='\0');
	}

	printf("%s", str);
end:

	return 0;
}
