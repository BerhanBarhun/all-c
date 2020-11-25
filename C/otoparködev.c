#include <stdio.h>

int main()
{
    printf("Lütfen otoparkta kaldığınız süreyi saat olarak giriniz giriniz: ");
    double a;
    scanf("%lf" ,&a);

    if(a<=1)               printf("Ücret 2₺\n");
    else if(a>1 && a<=3)   printf("Ücret 4₺\n");
    else if(a>3 && a<=6)   printf("Ücret 8₺\n");
    else if(a>6 && a<=10)  printf("Ücret 15₺\n");
    else if(a>10 && a<=16) printf("Ücret 20₺\n");
    else if(a>16 && a<=24) printf("Ücret 30₺\n");
    else
    {
        printf("Ücret 50₺\n");
    }
    
return 0;
}
