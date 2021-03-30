#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
void myEndProg()
{
	_getch();
	exit(0);
}

void myFoo(int a)
{
	a = a + 2;
}

void printArr(int const * a, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("myArr[%d]=%d\n", i, *(a + i));
	
	}
}

int mySum(int c, int d)
{
	c = c + d;
	d = d + 15;
	return c;
}

int myFooPtr(int* c, int* d)
{
	*c = *c + *d;
	*d = *d + 15;
	return *c;
}

int myf(int a, int* b)
{
	int pr = a * *b;
	*b = a + *b;
	return(pr);
}

int main()
{
	
	int a, b, pr, sum = 0;
	scanf_s("%d %d", &a, &b);
	pr = myf(a, &b);
	printf("%d\n %d\n", pr, b);
	_getch();
	return(0);
	
	int count = 0;
	scanf("%d", &count);

	int* myArrBig = (int*)malloc(count * sizeof(int));
	_getch();
	free(myArrBig);



	
	myEndProg();
	
	int myArr[] = { 1,2,3,4,5 };
	int myArr1[] = { 1,2,3,4,5,6,7,8,9,10 };

	printArr(myArr, 5);

	myEndProg();

	int a1 = 10;
	int b1 = 20;
	int res = 0;

	res = mySum(a1, b1);
	printf("a1=%d\n", a1);
	printf("b1=%d\n", b1);
	printf("res=%d\n", res);

	res = myFooPtr(&a1, &b1);
	printf("a1=%d\n", a1);
	printf("b1=%d\n", b1);
	printf("res=%d\n", res);

	myEndProg();
	int var = 10;
	int* pvar = &var;
	int** ppvar = &pvar;

	//printf("var=%d\n", var);
	//printf("&var = %d\n", &var);
	//printf("pvar = %d\n", pvar);
	//printf("*pvar = %d\n", *pvar);
	//printf("&pvar = %d\n", &pvar);
	//printf("ppvar = %d\n", ppvar);
	//printf("*ppvar = %d\n", *ppvar);
	//printf("**ppvar = %d\n", **ppvar);
	//printf("&ppvar = %d\n", &ppvar);

	
	var = 20;
	printf("var=%d\n", var);
	*pvar = 30;
	printf("var=%d\n", var);
	**ppvar = 40;
	printf("var=%d\n", var);

	myEndProg();

	return 0;
}