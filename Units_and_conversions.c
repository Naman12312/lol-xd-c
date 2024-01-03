#include <stdio.h>
#include <stdlib.h>

int main(){
	while(1){
	printf("\nWhich conversion do you want to perform?:\n 0: kms to miles\n1:inches to foot\n2:cms to inches\n3:pound to kgs\n4:inches to meters\n5:ft to meters\n6:quit\n");

	int choice;
	double var;
	scanf("%d", &choice);

	switch (choice) {
		case(0):
			printf("Enter the numerical value of the quantity in kms:\n");
			scanf("%lf", &var);
			printf("%lf km in miles = %lfmiles", var, var*0.621371);
			break;

		case(1):
			printf("Enter the numerical value of the quantity in inches:\n");
			scanf("%lf", &var);
			printf("%lf\" in foot = %lfft", var, var/12);

			break;
		case(2):
			printf("Enter the numerical value of the quantity in cms:\n");
			scanf("%lf", &var);
			printf("%lfcm in inches = %lf\"", var, var/2.54);
			break;
		case(3):
			printf("Enter the numerical value of the quantity in lbs:\n");
			scanf("%lf", &var);

			printf("%lflbs in kg = %lfkg", var, var/2.205);
			
			break;
		case(4):
			printf("Enter the numerical value of the quantity in inches:\n");
			scanf("%lf", &var);
			printf("%lf\" in meters = %lfm", var, var*0.0254);
			break;
		case(5):
			printf("Enter the numerical value of the quantity in foots:\n");

			scanf("%lf", &var);

			printf("%lfft in meters = %lfm", var, var/3.281);
			break;
		case(6):
			exit(0);	
	}
	}

return 0;
}
