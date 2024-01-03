#include <stdio.h>
#define pi 3.141592653589793 //way#1 to declare and initialize a constant
int main(int argc, char const *argv[])
{
    const double phi = 1.61803398875; //way#2 to declare and initialize a constant
    /*
    Some Important Escape Sequences:
        \n 
        \t 
        \"
        \'
        \\
        \a
        \b 
    
    */


   /*
   Some important format specifiers:
    %d => int
    %f => float
    %lf => double
    %Lf => long double
    %c => char
    %s => string
   */


    printf("my backslash: \\ a new line char: \n a tab:\t a single quote: \' a double quote: \" and an alarm beep: \n");
    // extending or limiting the no of decimal places:
    // printf("%0.15f", pi);
    printf("%0.3f", pi);
    return 0;
}
