#include <stdio.h>
#include <stdlib.h>


char* slice(char* str, int start, int end){
	char* strSliced = (char*)malloc(((end-start)+1)*sizeof(char));
	for (int i = start, j = 0; i<end; i++, j++) {
		strSliced[j] = str[i];
	
	}

	strSliced[((end-start))] = '\0';
	return strSliced;
}


