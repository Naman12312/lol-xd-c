#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    
    int num, stop;
    printf("Enter the number you want multiplication table of\n");
    scanf("%d", &num);
    printf("Enter the number up to which you want the multiplication table of %d\n", num);
    scanf("%d", &stop);

    for(int i=0; i<=stop; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}
