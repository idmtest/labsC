#include "test.h"

int myEndProg()
{
	int a = 10;
	return 10;
}

Rect* CreateRect()
{
	int a=100, b=50;

	//printf("Input side a=");
	//scanf("%d",&a);
	//printf("Input side b=");
	//scanf("%d", &b);

	//if (a < 0 || b < 0)
	//	return NULL;
	Rect* p = NULL;
	p = (Rect*)malloc(sizeof(Rect));
	if (p == NULL)
		return NULL;

	p->kind = rect;
	p->x = a;
	p->y = b;

	return p;
}

Cyrcle* CreateCyrcle()
{
	int rad = 10;

	Cyrcle* p = (Cyrcle*)malloc(sizeof(Cyrcle));
	if (p == NULL)
		return NULL;

	p->kind = cyrcle;
	p->rad = 10;

	return p;
}

int Sum(int a, int b)
{
	return a + b;
}

int Div(int a, int b)
{
	return a - b;
}

void printInsideObj(void* pobj[])
{

	Figures kind = *((Figures*)pobj[0]);
	pobj++;

	if (kind == rect)
	{
		printf("x=%d \t y=%d\n", ((Rect*)(pobj))->x, ((Rect*)(pobj))->y);
	}
	else if (kind == cyrcle)
	{
		printf("rad=%d \n", ((Cyrcle*)(pobj))->rad);
	}
	else
		printf("\nNone\n");
}