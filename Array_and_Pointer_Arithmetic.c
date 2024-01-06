#include <stdio.h>

int main(){
	printf("Array and Pointer Arithmetic\n");
	// Pointer Arithmetic
	int a = 3;
	int* ptr = &a;
	printf("address of a is %x\n", ptr);
	// ptr + 1 == ptr + (1*sizeof(type))/*int in this case*/ // in case of an array, shifts by one index

	// ptr + 2 == ptr + (2*sizeof(type))/*int in this case*/ // in case of an array, shifts by one index
	//here's an example:
	
	printf("%x\n", ptr);
	printf("%x\n", ptr+1);
	
	printf("%x\n", ptr+2);
	

	// ptr++ adds 1*sizeof(type) /* int in this case*/  to the address, this cannot be used with arrays, as the address of a particular element is constant.
	// example:
	
	printf("%x\n", ptr);
	printf("value of *ptr is same as value of a here value of *ptr is %d and value of a is %d\n", *ptr, a);
	ptr++;
	printf("ptr++ %x\n", ptr);
	printf("value of *ptr has changed: %d\n", *ptr); //shows garbage value as the address is changed now, and ptr no longer points to a. ++, -- operators and overwriting addresses of elements of an array is not allowed, throws an error, because if it was, we would no longer be able to access array's elements. for e.g- arr = &arr[0], and if we do arr = arr + 1 or arr++, the address of arr[0] will change to address of arr[1], and arr[1] will be empty.
	
	printf("value of a is %d\n", a);






	// Relation between Pointers and Arrays
	// the variable arr is a pointer to the first element of arr, i.e arr[0].
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	/*arr++;
	arr = arr + 1;*/ // this and line 38 are not allowed.
	// however, another pointer to arr[0] will be able to do this. like this:
	int* ptrarr = arr;
	printf("ptrarr: %p\narr:%p\n", ptrarr, arr);
	ptrarr++; // the numerical value of address increases by 1*sizeof(int)
	ptrarr = ptrarr + 1; //  the numerical value of address increases by 1*sizeof(int) again, in total increases by 2*sizeof(int)

	printf("ptrarr: %p\narr:%p\n", ptrarr, arr);
	printf("Address of arr[0] is %d\n", &arr[0]);
	
	printf("Address of arr[0] is %d\n", arr); 
	printf("Address of arr[1] is %d\n", &arr[1]);
	
	printf("Address of arr[1] is %d\n", arr + 1);


	printf("Value of arr[0] is %d\n", *(arr));
	
	printf("Value of arr[0] is %d\n", *(&arr[0]));

	printf("Value of arr[0] is %d\n", arr[0]);

	printf("Value of arr[1] is %d\n", *(arr + 1));
	printf("Value of arr[1] is %d\n", *(&arr[1]));

	printf("Value of arr[1] is %d\n", arr[1]);
	
}
