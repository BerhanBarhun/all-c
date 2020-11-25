#include <stdio.h>

int main(){
    double a, b, c, d;
    printf("***Bu program girilen 3 sayının aritmetik ortalamasını hesaplar***\n");
    
    printf("Lütfen sırayla sayıları giriniz: ");
    scanf("%lf" , &a);
    scanf("%lf" , &b);
    scanf("%lf" , &c);
    
    
    d = (a+b+c)/3;
    printf("Ortalama: %f\n" ,d);

    return 0;
}