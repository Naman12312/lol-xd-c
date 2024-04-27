#include <stdio.h>
int main(){
	int typeof_pattern;
	printf("What pattern do you want to print? enter 0 for regular triangular star pattern and 1 for reversed triangular star pattern\n");
	scanf("%d", &typeof_pattern);
	int n;
	switch (typeof_pattern) {
		case 0:
			printf("Enter the number up to which you want to print the regular triangular star pattern:\n");
				scanf("%d", &n);
				for (int i = 1;i<=n ; i++) {
					for (int j = 1; j<=i; j++) {
						printf("*");
					}
					printf("\n");
				}
			break;
		case 1:
			printf("Enter the number up to which you want to print the reversed regular triangular star pattern:\n");	
			scanf("%d", &n);
			for (int i = n;i>=1 ;i--) {
				for (int j=i;j>=1;j--) {
					printf("*");
				}
				printf("\n");
			}
	}	

	return 0;
}
