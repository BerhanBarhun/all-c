#include <stdio.h>

int main(){
    
    int a, b;
    printf("***This program designed to convert minutes to hours!***\n");
    
    printf("-Please enter total minutes: ");
    scanf("%d" ,&a);
    
    b = (a % 60);
    a = (a / 60);
    
    printf("-It's equal to %d hours and %d minutes.\n" ,a ,b );
    
    return 0;
}