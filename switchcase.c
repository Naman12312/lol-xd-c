#include <stdio.h>
int main(int argc, char const *argv[])
{
    int math,algo;
    printf("Do you like mathematics? 0:no 1:yes\n");
    scanf("%d", &math);
    printf("Do you like data and computer science? 0:no 1:yes\n");
    scanf("%d", &algo);
    switch(math){
        case 1:
            switch (algo) //nested switch
            {
            case 1:
                printf("I bet you're interested in learning about DSA.");
                break; //if this doesn't exist and the value of algo is 1, then printf("I bet you're interested in learning about DSA."); and printf("You like mathematics, but don't like data and computer science."); break will execute (checks a condition, if it's true, executes the code, and executes the remaining code without checking if break doesn't exist.)
            case 0:
                printf("You like mathematics, but don't like data and computer science.");
                break;
            default:
            printf("Please enter a valid number.");

            }
        break;
        case 0:
            switch(algo){
                case 1:
                printf("You like data and computer science, but don't like mathematics.");
                break;
                case 0:
                printf("You don't like both mathematics and computer science.");
                break;
                default:
                printf("Please enter a valid number");
            }
        break;


        default:
        printf("Please enter a valid number");
    }
    return 0;
}
