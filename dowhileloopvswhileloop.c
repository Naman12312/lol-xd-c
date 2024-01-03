#include <stdio.h>
int main(int argc, char const *argv[])
{
    //do while loop:
    int i = 0; //condition is already false
    do {
        printf("Hello, World!");
    } while(i<0);//condition is already false // output: Hello, World! because the condition is checked after the loop has executed once.


    while (i<0)
    {
        printf("Hello,World!"); // no output, the loop doesn't run as the condition is checked before the loop runs 
    }
    
    return 0;
}
