#include <stdio.h>


int compareStr(char* str0, char* str1, int len0, int len1){
	if(len0!=len1){
		return 0;
	}
	for (int i = 0; i<len0; i++) {
		if(str0[i]!=str1[i]){
			return 0;
		}
	
	}

	return 1;
}

// TODO: fix compareStr, incase this one has been implemented wrongly, or called wrongly.
