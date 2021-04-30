#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>



typedef long double my;

typedef enum  _Figures
{
	none = 0,
	rect,
	triag,
	cyrcle
} Figures;

typedef struct _rectanngle {
	Figures kind;
	int x;
	int y;
} Rect;

typedef struct _triangle {
	Figures kind;
	int x;
	int y;
	int z;
} Triangle;

typedef struct _cyrcle {
	Figures kind;
	int rad;
} Cyrcle;

typedef struct _myStruct {
	Figures kind;
	int a;
	int s;
	int b[30];
	float f;
} myStr, *myP;

typedef int (*myTest)(int, int);

int myEndProg();
Rect* CreateRect();
Cyrcle* CreateCyrcle();
int Sum(int a, int b);
int Div(int a, int b);
void printInsideObj(void* pobj[]);