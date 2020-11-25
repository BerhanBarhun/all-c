#include <stdio.h>
#include <math.h>

int main()
{

double a, b, c, d;
printf("*Bu program hipotenüsün uzunluğunu hesaplar*\n");

//first number
printf("Lütfen yüksekliği giriniz: ");
scanf("%lf" , &a);

//second number
printf("Lütfen taban uzunluğunu giriniz: ");
scanf("%lf" , &b);

//hypotenuse calc
c = ( a * a ) + ( b * b );
d = sqrt(c);

printf("Hipotenüsün uzunluğu: %f\n" , d);

return 0;
}