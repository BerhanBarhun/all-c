#include <stdio.h>
int main()
{
  printf("\033[1;35m");
  printf("1.Çarpma\n2.Yıldız\n3.Bölme\nLütfen seçiminizi yapınız: ");
  printf("\033[0m");
  int selection;
  scanf("%d", &selection);
  if (selection == 1)
  {
    printf("\033[1;36m");
    printf("Lütfen çarpanları giriniz: ");
    printf("\033[0m");
    int i = 0, num1, num2, num3 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    while (i != num2)
    {
      num3 += num1;
      i++;
    }
    printf("\033[01;31m");
    printf("= %d\n", num3);
  }
  if (selection == 2)
  {
    int i, j;
    printf("\033[01;33m");
    for (i = 1; i <= 5; i++)
    {
      for (j = 1; j <= 5; j++)
      {
        if (j == i || (j == 6 - i))
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }

      printf("\n");
    }
  }
  if (selection == 3)
  {
    printf("\033[1;36m");
    printf("Lütfen bölen ve bölüneni giriniz: ");
    printf("\033[0m");
    int i, j, l, s;
    scanf("%d", &i);
    scanf("%d", &j);
    if (i > j)
    {
      l = i;
      s = j;
    }
    else
    {
      l = j;
      s = i;
    }
    int count = 0;
    while (l >= s)
    {
      l = l - s;
      count++;
    }
    printf("\033[01;31m");
    printf("= %d\n", count);
  }
  return 0;
}
