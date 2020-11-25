#include <stdio.h>

int main()
{
    printf("Do you want to continue?[y/n]: ");

    char input;
    scanf("%c" , &input);

    input == 'y' ? printf("welcome\n") : printf("goodbye\n");
    
    return 0;
}