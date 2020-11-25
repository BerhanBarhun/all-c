#include <stdio.h>

int main()
{
    int x,a;
            for(a=1 ; a <= 15; a++)
        {
            if(a % 5 == 0 && a % 3 == 0)
            {
            printf("FizzBuzz\n");
            }
            else if(a % 5 == 0)
            {
            printf("Buzz\n");
            }
            else if(a % 3 == 0)
            {
            printf("Fizz\n");
            x++;
            }
            else
            {
            printf("%d\n" ,a);
            }   
        } 
        printf("Fizz Count: %d times\n" ,x);
}













/*int main()
{
    int a;
    for(a=1 ; a <= 10 ; a++)
    {
        int x = 0;
        
        for(a=1 ; a <= 10; a++)
        {
            if(a % 5 == 0 && a % 3 == 0)
            {
            printf("FizzBuzz\n");
            }
            else if(a % 5 == 0)
            {
            printf("Buzz\n");
            }
            else if(a % 3 == 0)
            {
            printf("Fizz\n");
            x++;
            }
            else
            {
            printf("%d\n" ,a);
            }   
        } 
        printf("Fizz Count: %d times\n" ,x);
    }
}*/