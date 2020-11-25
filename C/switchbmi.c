#include <stdio.h>
int main ()
{
    double money, cost;
    
    printf("enter money: $");
    scanf("%lf" ,&money);
    
    printf("enter cost: $");
    scanf("%lf" ,&cost);

    if(money >= cost)
    {
        printf("You can afford it!\n");
    }else
    {
        printf("You don't have enough money. You need $%lf more.\n", cost - money);
    }

    return 0;
}   