#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = -1, k, max;
    FILE *fptr;
    fptr = fopen("/home/valaritas/Documents/C/deneysel.txt", "a");
    
    printf("please enter the max number: "); scanf("%d" ,&max);
    
    while(i < max)
    {
        //printf("%d\n" ,i);
        i++;
        k = i;
        while(k >= 0)
        {
            fprintf(fptr, "%d " ,k);
            k--;
        }
    fprintf(fptr, "\n");
    } 
   
    
    fclose(fptr);
    return 0;
}