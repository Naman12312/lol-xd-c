#include <stdio.h>
int main(int argc, char const *argv[])
{
    // I'm not allowed to use loops here, as it isn't taught yet in the course
    // int num;
    // printf("Enter the number you want multiplication table of: ");
    // scanf("%d", &num);
    // printf("%d * 1 = %d\n", num, num*1);
    // printf("%d * 2 = %d\n", num, num*2);
    // printf("%d * 3 = %d\n", num, num*3);
    // printf("%d * 4 = %d\n", num, num*4);
    // printf("%d * 5 = %d\n", num, num*5);
    // printf("%d * 6 = %d\n", num, num*6);
    // printf("%d * 7 = %d\n", num, num*7);
    // printf("%d * 8 = %d\n", num, num*8);
    // printf("%d * 9 = %d\n", num, num*9);
    // printf("%d * 10 = %d\n", num, num*10);



    //but here's a better version of this program if somebody is interested:
    int num;
    int end_point;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &num);
    printf("Enter the number till which you want the multiplication table to be printed: ");
    scanf("%d", &end_point);
    for(int i = 1; i<=end_point; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}
