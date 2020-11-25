#include <stdio.h>
#include <string.h>

int main()
{

  printf("Which way you choose to go bitch?: ");
  char dir[10];
  scanf("%9s", dir);

  if (dir == 'north' || dir == 'n' || dir == 'go north')
  {
    printf("kuzeye gidiliyor\n");
  }
}