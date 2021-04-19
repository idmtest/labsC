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
		printf("&%p myArr[%d]=%d\n", (a+i), i, *(a + i));

	}
}

void printArr1(int a[5], int count)
{
	for (int i = 0; i < count; i++)
	{
		//printf("&%d myArr[%d]=%d\n", (a + i), i, *(a + i));
		printf("a[%d]=%d\n", i, a[i]);
	}
}

int main()
{
	int var = 20;
	int* pvar = &var; // pointer
	int** ppvar = &pvar; // pointer to pointer

	int* p1 = (int*)malloc(4 * sizeof(int)); // mem for
	free(p1);
	p1[0] = 10;
	p1[1] = 15;
	p1[100] = 100;


	printf("var=%d\n", sizeof(pvar));

	printf("var=%d\n", var);
	printf("&var = %d\n", &var);
	printf("pvar = %d\n", pvar);
	printf("*pvar = %d\n", *pvar);
	printf("&pvar = %d\n", &pvar);
	printf("ppvar = %d\n", ppvar);
	printf("*ppvar = %d\n", *ppvar);
	printf("**ppvar = %d\n", **ppvar);
	printf("&ppvar = %d\n\n", &ppvar);

	printf("var=%d\n", var);
	var = 30;
	printf("var=%d\n", var);
	*pvar = 40;
	printf("var=%d\n", var);
	**ppvar = 50;
	printf("var=%d\n\n", var);

	int mass[5] = {1,2,3,4,5};
	int var2 = *mass;
	int var1 = *(mass + 1);
	int* p = mass;
	
	p++;
	printf("p=%p\t*p++=%d\n",p, *p);
	p=p+2;
	printf("p+2=%p\t*p=%d\n",p, *p);

	int test = 20;
	int* const pnew = &test;
	//pnew++; //error
	*pnew = 50; //ok

	const int* pnew1 = &test;
	pnew1++; //ok
	//*pnew1 = 60; //error

	const int* const pnew2 = &test;
	//pnew2++; //ok
	//*pnew2 = 60; //error

	for (int i = 0; i < 5; i++)
		*(mass + i) = *(mass + i) + 5;

	printArr(mass, 5);
	printArr1(mass, 5);

	void* pvar1 = NULL;
	pvar1 = pvar;

	myEndProg();
	
	
	int count = 0;
	scanf("%d", &count);

	int* myArrBig = (int*)malloc(count * sizeof(int));
	_getch();
	free(myArrBig);
	
	myEndProg();
	
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