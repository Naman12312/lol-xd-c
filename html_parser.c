#include <stdio.h>
#include "string.h"

int isAlphabet(char a, char arr[]){
	if(a>='a' && a<='z' || a>'A' && a<'Z' ){
		int indexOfFirstAlpha = (strchr(arr, a)-arr)/sizeof(char);
		return indexOfFirstAlpha;
		
	}
 	return 0;
}
char* f(char str[]){
	char* resultOfOpen = strchr(str, '<');
	
	char* resultOfClose = strchr(str, '>');
	

		int indexOfOpen = (resultOfOpen-str)/sizeof(char);
		int indexOfClose = (resultOfClose-str)/sizeof(char);
		for(int i = indexOfOpen, j=indexOfClose; str[i]!='\0'; i++, j++){
			str[i] = str[j+1];

		}
		int i =0;
		int indexOfFirstAlphabet;

		while(1){
			if(isAlphabet(str[i], str)!=0){

				indexOfFirstAlphabet=isAlphabet(str[i], str);

				break;
			}
		
		i++;

		}
		
		for(int i =0, j=indexOfFirstAlphabet; str[i]!='\0'; i++, j++){
			str[i] = str[j];
		}
		for (int i = 0; str[i]!='\0'; i++) {
			if(str[i]==' '){
				for(int j=i; str[j]!='\0';j++){
					if(str[j]=='<'){
						str[i]='\0';
						goto end;
					}
					else if(str[j]==' ' && str[j+1]!=' ' && str[j+1]!='<'){
						break;
					}

				}
			}
			

			}

			
			
			

		
		
		
		/*
		indexOfOpen = (resultOfOpen-str)/sizeof(char*);

		indexOfclose = (resultOfClose-str)/sizeof(char*);
		
		for(int i = indexOfOpen; i<=indexOfclose; i++){
			str[i] = blank;

		}
		*/
		end:

		return str;
}


int main(){
	char str[] = "<spansfgs  dgdfgf>    This is a                                                                span              </spsdfgsdf   an>";
	f(str);
	printf("%s", str);
	//printf("H"); //use this to verify whether there are spaces after the parsed string or not.
}





/*
Input:
<h1> This is a heading </h1>
Output:
This is a heading
*/
