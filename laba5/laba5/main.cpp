#include <locale.h>
#include "test.h"
#include <iostream>
#include <stdlib.h> 
#include <crtdbg.h>

void printInsideObj(void* pobj)
{
	Figures kind = *((Figures*)pobj);
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

int main()
{
	Rect my;
	my.x = 15;
	my.y = 20;

	printf("%d\n", sizeof(Rect));
	printf("%d\n", sizeof(Cyrcle));

	void* ppAddObj[] = {NULL, NULL, NULL};
	
	ppAddObj[0] = CreateRect();
	ppAddObj[1] = CreateCyrcle();  
	printInsideObj(ppAddObj[0]);
	printInsideObj(ppAddObj[1]);

	//int var = ((Rect*)(ppAddObj[0]))->x;
	//int var1 = ((Rect*)(ppAddObj[1]))->rad; // wrong data

	//Figures kind = *((Figures*)ppAddObj[0]);
	//Figures kind1 = *((Figures*)ppAddObj[1]);

	int a = 11;
	int b = 5;

	myTest foo = NULL;
	
	foo = Sum;
	printf("%d\n",Sum(a,b));
	foo = Div;
	printf("%d\n", Div(a, b));

	myEndProg();

	free(ppAddObj[0]);
	free(ppAddObj[1]);

	_CrtDumpMemoryLeaks();
	_getch();
	return(0);

}