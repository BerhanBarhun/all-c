#include <stdio.h>

int main ()
{
    double c, f;
    char t;
    
    printf("C°=>F° or C°=>F°[C/F]:");
    scanf("%c" ,&t);
    
    if(t == 'c' || t == 'C')
    {
        printf("Please enter the C° value: ");
        scanf("%lf" ,&c);
        f = (c*1.8)+32;
        printf("%f celcius equals to %f fahrenheit.\n", c, f);
    }
    else if(t == 'f' || t == 'F')
    {
        printf("Please enter the F° value: ");
        scanf("%lf" ,&f);
        c = (f-32)*0.5556; 
        printf("%f fahrenheit equals to %f celcius.\n", f, c);
    }
    else
    {
        printf("Incorrect input please try again.\n");
    }
    return 0;
}