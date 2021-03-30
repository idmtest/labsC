#include <locale.h>
#include "test.h"
#include <iostream>
using namespace std;

using namespace std;

int main()
{

	void* ppAddObj[] = {NULL, NULL, NULL};
	
	ppAddObj[0] = CreateRect();
	ppAddObj[1] = CreateCyrcle();

	Figures kind = *((Figures*)ppAddObj[0]);
	Figures kind1 = *((Figures*)ppAddObj[1]);

	
	printf("%d",10);

	myEndProg();
	_getch();
	return(0);

}
