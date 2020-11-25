#include <stdio.h>
int main ()
{
    float kg ,cm , bmi ;
    
    printf("Enter your weight in kg: ");
    scanf("%f" ,&kg);
    
    printf("Enter your height in cm: ");
    scanf("%f" ,&cm);
    
    cm = cm / 100;
    bmi = kg / (cm*cm);
    
    printf("Your BMI is %f, ", bmi);
    
    if(bmi<18.5)
    {
        printf("you are in the underweight category.\n");
    }
    else if(bmi>18.49 && bmi<25)
    {
        printf("you are in the healty category.\n");
    }
    else if (bmi>24.9 && bmi<30)
    {
        printf("you are in the obese category.\n");
    }
    return 0;
}
