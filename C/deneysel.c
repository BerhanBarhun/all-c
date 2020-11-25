#include <stdio.h>

int main()
{
    int a, y;
    printf("Do you want to continue?[y/n]");
    scanf("%i" ,&a);

    y = 1;

    if (a==y)
    {
        printf("sa\n");
    }
    
    return 0;
}