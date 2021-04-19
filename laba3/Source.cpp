#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <windows.h>


void myExit();
int myDiv(int* a, int b);
void Arr3();
int mySumm(int* varSumm);
int factorial(int n);
void countOut(int count);

int myDivSimple(int a, int b)
{
  int c = a - b;
  return c;
}

int main()
{
  setlocale(LC_ALL, "Rus");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  //char s;
  int s;
  do {
    printf("To stop press .\n ->");
    //scanf("%c ", &s);
    s = _getch();
    printf("%c", (char)s);
    printf("\nThe symbol is %c, symbol's code is %d\n", s, s);
  } while ((char)s != '.');

  char name[20];
  scanf("%s", &name);
  printf("\n%s", name);
  std::cout << std::endl << name;
  myExit();
  int summ = 0;
  char str[5];
  gets_s(str);
  puts(str);
  int var1 = 0;
  int var2 = 5;

  int var = 0;
  while (1)
  {
    gets_s(str);
    printf("strlen = %d \n", strlen(str));
    var = _getch();
    if (var == 101)
      break;
  }

  //mySumm(summ);
  /*printf("Summ from myFunc:%d\n", mySumm(&summ));
  printf("Summ :%d\n", summ);*/
  //countOut(3);
  //_getch();
  //return 0;

  int n = 0;
  int fact = 1;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  printf("Factorial :%d\n", fact);
  printf("FactFoo :%d\n", factorial(n));

  _getch();

  return 0;
  
  //int arr1[2][3] = {1,2,3,4,5,6};
  int arr1[2][3] = { 
    {1,2,3},
    {4,5,6}
  };
  for (int i = 0; i < 2; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
      printf("%d ", arr1[i][j]);
  }
      

  int arr[5] = {1,2,3,4,5};
  for (int i = 0; i < 5; i++)
    printf("\narr[%d]=%d", i, arr[i]);

  printf("\nHello World\n");

  for (int i = 0; i < 5; i++)
    scanf("%d", &arr[i]);

  return 0;
  scanf("%d %d", &var1, &var2);

  printf("var1=%d\tvar2=%d\n", var1, var2);

  int div = myDivSimple(var1, var2);
  printf("div = %d\n", div);
  printf("div = %d\n", myDivSimple(var2, var1));

  if (var1 > var2)
  {
    for (int i = 0; i < var1; i++)
      printf("\nHello World");
  }    
  else if (var1 == var2) 
  {
    int i = 0;
    do
    {
      printf("\nvar1 == var2");
      i++;
    }    
    while (i < -1);
  }
  else
    printf("\nvar1 < var2");

  return 0;
}

void myExit()
{
  printf("\nPress any key\n");
  _getch();
  exit(0);
}

int myDiv(int* a, int b)
{
  int c = *a - b;
  *a = *a + 10;
  b = b + 10;
  return c;
}

int mySumm(int* varSumm)
{
  int a = 0, b = 0, c = 0;
  a = a + *varSumm;
  printf("Input variables:\n");
  scanf("%d%d%d", &a, &b, &c);
  *varSumm = a + b - c;
  printf("Summ=%d\n", *varSumm);
  return *varSumm;
}

int factorial(int n)
{
  printf("test%d\n", n);
  if (n == 1)
    return 1;
  else
  {
    printf("end%d\n", n);
    return n * factorial(n - 1);
  }
}

void countOut(int count)
{
  printf("test%d\n", count);
  if (count > 1)
    countOut(count - 1);

  printf("end%d\n", count);
}

void Arr3()
{
  using namespace std;

  const unsigned char DIM1 = 3;
  const unsigned char DIM2 = 5;
  const unsigned char DIM3 = 2;

  int ary[DIM1][DIM2][DIM3];
  for (int i = 0; i < DIM1; i++) {
    for (int j = 0; j < DIM2; j++) {
      for (int k = 0; k < DIM3; k++) {
        ary[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
        cout << setw(4) << ary[i][j][k];
      }
      cout << endl;
    }
    cout << endl;
  }
}