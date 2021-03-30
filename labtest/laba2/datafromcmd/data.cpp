#include <stdio.h>
#include <conio.h>
#include <iostream>

int main(int arc, char* arv[])
{
	using namespace std;
	if (arc <= 1)
	{
		printf("No arguments");
	}
	else
	{
		for (int i = 0; i < arc; i++)
			printf("\nN%d is %s", i, arv[i]);
			//cout << endl << arv[i];
	}
	_getch();
	return 0;
}