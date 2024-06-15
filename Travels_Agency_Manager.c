#include <stdio.h>
struct Info{
	char Name[20];
	int DrivingLicenceNo;
	char Route[50];
	int Kms;
};
struct Info arr[100];






int main(){
	int n;
	printf("How many drivers are there?: ");
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++){
		printf("Enter name for driver %d: \n", i);
		fgets(arr[i].Name,20, stdin);
		getchar();
		printf("Enter Driving Lincense No. for driver %d: \n", i);
		scanf("%d", &arr[i].DrivingLicenceNo);
		getchar();

		printf("Enter Route for driver %d: \n", i);
		fgets(arr[i].Route,50, stdin);
		getchar();
		printf("Enter how many kms have been travelled by driver %d until now: \n", i);
		scanf("%d", &arr[i].Kms);
		getchar();
	}

	printf("\n\n\n\nprinting all the info now\n\n\n\n");

	for (int i =0; i<n; i++) {
		printf("Driver %d\n", i);
		printf("Name: %s\n", arr[i].Name);
		
		printf("Driving License No: %d\n", arr[i].DrivingLicenceNo);
		
		printf("Route: %s\n", arr[i].Route);
		printf("This driver has travelled %d kms until now\n", arr[i].Kms);
	
	}




	return 0;
}
