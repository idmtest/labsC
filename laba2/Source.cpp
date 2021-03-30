#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  printf("Hello World\n");

  int arr[] = { 1,2,3,4,5,6 };
  int N = 10;
  arr[0] = 2;

  int arr2[3][4];
  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 4; j++) {
      arr2[i][j] = i + j;
      printf("%d", arr2[i][j]);
    }
  }  
  _getch();
  return 0;
  int a = 0, b = 0, c = 0;
  scanf("%d%d%d", &a, &b, &c);

  if (a > 0 && c != 5)
    printf("a>0\n");
  else if (a < 0 && b < 0)
    printf("a<0 and b<0\n");
  else if (a == 3 || c == 3)
  {
    for (int i = 0; i < 3; i++)
    {
      printf("a=3 or c=0");
      printf("\n");
    }
  }
  else
  {
    int i = 6;
    do
    {
      printf("i dont know");
      i++;
    } while (i < 5);   
  }

  _getch();
  return 0;
}