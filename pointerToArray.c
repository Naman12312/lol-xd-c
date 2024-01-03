#include <stdio.h>
#include <stdarg.h>

int average(const char *fmt)
{
    int a[sizeof(fmt)/sizeof(fmt[0])] = fmt;
    int b;
    for(int i =0; i<sizeof(fmt)/sizeof(fmt[0]);i++){
        b+=a[i];
    } 

    return (b/(sizeof(fmt)/sizeof(fmt[0])));
}
int main(int argc, char const *argv[])
{
    int a[5] = {1,23432,3,4,5};
    // printf("%d", *a);
    int* b = a;
    // printf("%d", *b);
    // printf("%d",b[1]);
    b[1] = 454354;
    // printf("%d", a[1]); // if you change b[1] then a[1] gets changed.


    for(int i=0; i<5;i++){
        printf("%d\n", b[i], "\n");
    }
    for(int i=0; i<5;i++){
        printf("%d\n", a[i]);
    }


    int c[5] = {1,2,3,4,5};
    int av = average(1,2,3,4,5);
    printf("%d", av);
    return 0;
}
