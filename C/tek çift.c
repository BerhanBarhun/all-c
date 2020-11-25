#include <stdio.h>

int main()
{
    int a;

    printf("lütfen tek mi çift mi olduğunu öğrenmek istediğiniz sayıyı giriniz:");
    scanf("%d" ,&a);

    a = a%2;

    if(a=0)
    printf("çift\n");

    else
    {
        printf("tek\n");
    }

    return 0;
}