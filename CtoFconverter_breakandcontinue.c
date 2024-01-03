#include <stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0; i<10; i++){

    int mode;
    float value;
    printf("Select program mode: Celcius to Farenheit = 0, Farenheit to Celcius = 1\n");
    scanf("%d", &mode);
    if(mode==0){
        printf("Enter the temperature in degrees Celcius\n");
        scanf("%f", &value);
        if(value==-40){
            printf("The temperature -40deg C is equal to -40deg F\n"); //this is done to avoid time wastage while doing calculations because the temperature in -40deg F is equal to the temperature -40deg C 
            continue;
        }
        float valueInF = (value*180/100)+32;
        printf("The temperature %fdegC is equal to %fdegF \n", value, valueInF);
    }
    else if(mode==1){
        printf("Enter the temperature in degrees Farenheit\n");
        scanf("%f", &value);
        if(value==-40){
            printf("The temperature -40deg C is equal to -40deg F\n");//this is done to avoid time wastage while doing calculations because the temperature in -40deg F is equal to the temperature -40deg C 
            continue;
        }
        float valueInC = ((value-32)*100)/180;
        printf("The temperature %fdeg F is equal to %fdeg C \n", value, valueInC);

    }
    else{
        break;
    }
    }

    return 0;
}
