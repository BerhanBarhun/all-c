#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int max = 1;
    srand(time(NULL));
    
    int random = rand() % (max + 1);
    int guess;
    
    printf("Yazı mı Tura mı LO?\n");
    scanf("%d", &guess);
    
    if(random==1)
    {
        printf("-Yazı geldi.-\n");
    }
    else 
    {
        printf("-Tura geldi.-\n");
    }
}
