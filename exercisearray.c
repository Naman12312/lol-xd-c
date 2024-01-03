#include <stdio.h>
int main(int argc, char const *argv[])
{
    // char arr [10] ;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value for index %d: \n", i);
    //     scanf(" %c", &arr[i]);
    // }


    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value on index %d is %c\n", i, arr[i]);
    // }
    

    int a;
    a = 98;
    int* ptr = NULL;
    ptr = &a;
    printf("%d\n", *ptr);
    *ptr = 76;
    printf("%d\n", *ptr);    
    printf("%d\n", a)   ; // changes the original variable 'a'.
    return 0;
}
