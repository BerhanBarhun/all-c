#include <stdio.h>

int array(int n)
{
    for(int i=0 ; i<3; i++)
     {
         printf("%d " ,matGrades[x-1][i]);
     }
     printf("\n");
}

int main(void)
{
    int x;
    printf("Sınav notlarınızı öğrenmek için lütfen öğrenci numaranızı giriniz: ");
    scanf("%d" ,&x);
    
    int matGrades[][10] = {
        {35, 10, 15},//1
        {20, 25, 30},//2
        {12, 23, 43},//3
        {12, 23, 41},//4
        {12, 53, 43},//5
        {12, 43, 43},//6
        {11, 23, 43},//7
        {18, 83, 43},//8
        {19, 73, 43},//9
        {17, 53, 43} //10
    };
    
return 0;
}
