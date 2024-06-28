#include <stdio.h>

int indexOf(char* arr, char requiredChar){
	int i = 0;
	do{
		if(arr[i]==requiredChar){
			return i;
		}
		i++;
	}while(1);

}



