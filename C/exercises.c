#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void exercise(char n[20])
{
    int a = 1;
    int total;
    int set = -1; 

     FILE *sex;
     sex = fopen("/home/valaritas/Desktop/exercise.txt","a");
     
     printf("\n%s time\n\n" ,n);
     while(a != 0)
    {
     printf("Rep: ");
     scanf("%d",&a);
     if(a!=0) fprintf(sex, "%d Repetition.\n" ,a);
     total += a;
     set++;
     
      int timer = 3;
    if(a!=0) while(timer != 0)
     {
         printf("\n\n\n  ***Rest: %d ",timer);
         sleep(1);
         timer--;
         system("clear");
     }
     if(a!=0) printf("\a\a\a\nGet back to work!\n");
     continue;
    }
    fprintf(sex, "=>%d total %s in %d sets.\n",total,n,set);
}

int main()
{
    FILE *sex;
    sex = fopen("/home/valaritas/Desktop/exercise.txt","a");
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(sex, "\n\n***Date: %02d-%02d-%d***\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    exercise("Push up");
    exercise("Pull up");
    exercise("Crunch");

 fclose(sex);    
 return 0;
}