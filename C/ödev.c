#include <stdio.h>

int main()
{
    double a,b;
    char x;

    printf("Hesap makinesi(+,-,x,/): ");
    scanf("%lf" ,&a);
    scanf("%c" ,&x);
    scanf("%lf" ,&b);

    switch(x)
    {
        case '+':
        printf("%f\n" ,a+b);
        break;
        
        case '-':
        printf("%f\n" ,a-b);
        break;
        
        case '/':
        printf("%f\n" ,a/b);
        break;
        
        case 'x':
        printf("%f\n" ,a*b);
        break;

        default:
        printf("Yanlış işlem yaptınız lütfen tekrar deneyin!");
        break;
    }
return 0;
}

