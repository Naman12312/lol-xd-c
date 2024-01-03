#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,stop, i=0;
    printf("Enter the number you want multiplication table of: \n");
    scanf("%d", &num);
    printf("Enter the stopping point for your multiplication table(the number you enter will not be included): \n");
    scanf("%d", &stop);

    do{
        printf("%d * %d = %d\n", num,i,num*i);
        i = i+1;
    }while(i<stop);
    return 0;
}
