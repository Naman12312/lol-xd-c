#include <stdio.h>
int main(int argc, char const *argv[])
{   //Quiz 1:
    // Note that this program doesn't give any money to anyone, this is just an exercise given to me by someone.(as a quiz)
    int result;
    printf("Did you pass Maths Exam, Science Exam, or both?\n");
    printf("1: Maths\n");
    printf("2: Science\n");
    printf("3: Both\n");
    scanf("%d", &result);
    if(result==3){
        printf("Congrats! You have won $100000!");
    }

    else if(result!=1 && result!=2 && result !=3){
        printf("Please Enter a valid number corresponding to your result.");
    }

    else{
        printf("You have won $50000.");
    }
    return 0;
}
