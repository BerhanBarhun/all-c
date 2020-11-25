#include <stdio.h>

int main()
{
 printf("Sayıyı giriniz: ");
 int a;
 scanf("%d" ,&a);


 if(a<0)
 {
     a = a*-1;
 }
 printf("mutlak değeri: %d\n",a);
return 0;
}
