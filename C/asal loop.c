#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int input = 11;
    int isPrime = true;
    
    for(int i = sqrt(input -1); i > 1; i--)
    {
        //printf("%d\n", i);
        if(input % i == 0)
        {
            isPrime = false;
        } 
        
    }
    if(isPrime)
            {
                printf("\tAsal\n");
            }
}


/*for(a=2; a <= max; a++)
    {
        if(a == 2|| a == 3 || a== 5 || a== 7 || a % 3 != 0 && a % 2 != 0 && a % 5 != 0 && a % 7 != 0)
        {
            asal++;
           
            printf("%d\n", a);
        
        }
    }printf("There is %d prime numbers between 1 and %d\n", asal, max);*/