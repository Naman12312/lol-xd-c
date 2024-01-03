#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,stop, i=0;
    printf("Enter the number you want multiplication table of: \n");
    scanf("%d", &num);
    printf("Enter the stopping point for your multiplication table(the number you enter will not be included): \n");
    scanf("%d", &stop);

    while(i<stop){
        printf("%d * %d = %d\n", num,i,num*i);
        i = i+1;
    }
    return 0;
}
// Difference Between do while loop and while loop: do while loop is expected to run atleast once, for e.g, if the condition is already false, then while loop will not run whereas do while loop will run once.
//e.g:

//dowhileloopvswhileloop.c
