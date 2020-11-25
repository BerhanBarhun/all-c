#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{ //seçim
  int selection;
  printf("--Aralıktaki çift sayıları öğrenmek için '1'\n--1-100 arası 50 için '2':");
  scanf("%d", &selection);

  //iki sayı arasındaki çift sayılar
  if (selection == 1)
  { //kullanıcı girişi
    int nm1, nm2;
    printf("Arasındaki çift sayıları öğrenmek istediğiniz sayıları önce küçük olacak şekilde giriniz: ");
    scanf("%d", &nm1);
    scanf("%d", &nm2);

    //loop
    for (nm2 <= 0; nm2--;)
    {
      if (nm2 % 2 == 0)
      {
        printf("\033[0;31m"); //renk
        printf("%d\n", nm2);
      }
    }
  }
  //1-100
  if (selection == 2)
  {
    printf("\033[0;33m"); //renk
    int max = 100, i, repeat = 0;
    srand(time(NULL));

    while (i != 50)
    {
      i = rand() % (max + 1);
      printf("%d ", i);
      repeat++;
    }
    printf("\033[0;36m"); //renk
    printf("\n50 sayısını %d. tekrarda buldu.\n", repeat);
  }

  return (0);
}
