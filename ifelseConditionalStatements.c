#include <stdio.h>
int main(int argc, char const *argv[])
{
    // An example program to see if you are allowed to drive or not.
    //
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if((age>18) && (age<=70)){
        printf("You can drive.\n");
    }
    else if(age==18){
        printf("You have to pass a driving test before you can drive.\n");
    }
    else if(age>70 && age<110){
        printf("You're too old to drive.\n");
    }
    else if(age>=110 || age<=0){
        printf("Invalid age for a human.\n");
    }
    else{
        printf("you are not allowed to drive as you're too young\n");
    }
    return 0;
}
