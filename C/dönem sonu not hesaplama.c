#include <stdio.h>

int main(){
    
    int vize, final, ds;
    printf("*Bu program dönem sonu notunuzu hesaplamak için tasarlanmıştır.*\n");
    
    printf("Lütfen vize notunuzu giriniz: ");
    scanf("%d" ,&vize);
    
    printf("Lütfen final notununzu giriniz: ");
    scanf("%d" ,&final);

    ds = ((vize * 40)/100) + ((final * 60)/100);

    if(final >= 40 && ds >= 40)
    printf("Tebrikler %d ortalama ile dersi başarıyla geçtiniz!\n" , ds);
    
    else
    printf("Maalesef %d ortalama ile dersten kaldınız! :(\n" , ds);

    return 0;
} 
