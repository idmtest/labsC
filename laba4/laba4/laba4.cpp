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

int mySum(int c, int d)
{
	c = c + d;
	d = d + 15;
	return c;
}

int myFooPtr(int * c, int* d)
{
	*c = *c + *d;
	*d = *d + 15;
	return *c;
}

void printArr(int * a, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("&%d myArr[%d]=%d\n", (a+i), i, *(a + i));

	}
}

void printArr1(int a[5], int count)
{
	for (int i = 0; i < count; i++)
	{
		//printf("&%d myArr[%d]=%d\n", (a + i), i, *(a + i));
		printf("a[%d]=%d", i, a[i]);
	}
}

int main()
{
	
	int var = 20;
	int* pvar = &var;
	int** ppvar = &pvar;

	printf("var=%d\n", var);
	printf("&var = %d\n", &var);
	printf("pvar = %d\n", pvar);
	printf("*pvar = %d\n", *pvar);
	printf("&pvar = %d\n", &pvar);
	printf("ppvar = %d\n", ppvar);
	printf("*ppvar = %d\n", *ppvar);
	printf("**ppvar = %d\n", **ppvar);
	printf("&ppvar = %d\n", &ppvar);

	printf("var=%d\n", var);
	var = 30;
	printf("var=%d\n", var);
	*pvar = 40;
	printf("var=%d\n", var);
	**ppvar = 50;
	printf("var=%d\n", var);

	//myEndProg();
	
	
	/*int a = 3;
	int b = 10;

	switch (a)
	{
	case 1:		
		printf("%d", a+b);
		break;
	case 2: 
		printf("%d", a+1);
		break;
	default:
	printf("default");
	}
	*/
	//myEndProg();

	//int count = 0;
	//scanf("%d", &count);

	//int* myArrBig = (int*)malloc(count * sizeof(int));
	//_getch();
	//free(myArrBig);
	
	//myEndProg();
	int myArr[] = { 1,2,3,4,5 };
	int myArr1[] = { 1,2,3,4,5,6,7,8,9,10 };

	printArr1(myArr, 5);
	printf("---------\n");
	printArr(myArr1, 10);
	myEndProg();
	
	int a1 = 10;
	int b1 = 20;
	int res = 0;

	int a11 = 50;
	int b11 = 30;
	int res1 = 0;
	
	res = mySum(a1, b1);
	res = mySum(a11, b1);
	printf("a1=%d\n", a1);
	printf("b1=%d\n", b1);
	printf("res=%d\n", res);

	res = myFooPtr(&a1, &b1);
	printf("a1=%d\n", a1);
	printf("b1=%d\n", b1);
	printf("res=%d\n", res);

	myEndProg();
	


	return 0;
}