#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdint.h>



int main(int argc, char* argv[])
{ 
	using namespace std;
	int arc[] = { 1,2,3,4};
	int cra[] = { 1,2,3,4 };

	int countArc = sizeof(arc) / sizeof(int);
	int countCra = sizeof(cra) / sizeof(int);

	int a[10][5];

	cout << sizeof(a)/sizeof(int);

	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)


	if (countArc != countCra)
		printf("Arrays are not equal");

	_getch();

	cout << sizeof(arc)/sizeof(int);
	
	printf("\nHello World\n");
	int arr[] = {1,2};
	if (argc < 1)
	{
		printf("No arguments");
	}
	else
	{
		for (int i = 0; i < argc; i++)
		{
			printf("\nArg number %d is %s", i, argv[i]);
			//cout << endl << argv[i];
		}
	}

	setlocale(LC_ALL, "Russian");
	int f;
	// 1 - 9�12; 2 - 10�15;
	float  cena;
	float sum;
	float n;
	float discount;
	float total;
	printf("\n����������\n");
	printf("������\n");
	printf("1 - 9�12\n");
	printf("2 - 10�15\n");
	printf("\n Your choice -> ");
	scanf_s("%i", &f);
	//����� �������
	printf("����������, �� -> ");
	scanf_s("%f", &n);
	switch (f)
	{
	case 1: cena = 2.50; break;
	case 2: cena = 3.20; break;
	default: cena = 0; break;
	}
	//���� ����� ����������, �� ��������� ����
	if (cena != 0)
	{
		sum = n * cena;
		printf("\n����: %3.2f ���", cena);
		printf("\n����������: %3.2f ��", n);
		printf("\n�����: %3.2f ���", sum);
	}
	if (n > 10)
	{
		discount = sum * 0.05;
		printf("\n������: %3.2f ���", discount);
		total = sum - discount;
		printf("\n� ������: %3.2f ���", total);
	}
	else // ���� ����� �� ����������, ����� ���������
		printf("\n������� ������ ������ ����������!");

	printf("\n��� ���������� ������� <Enter>\n");
	_getch();

	//// find div of number 
	//using namespace std;
	//long num = 0;
	//long div = 2;
	//cout << "input num ";
	//cin >> num;
	//while (num != 1)
	//{
	//	if (num % div == 0)
	//	{
	//		cout << " " << div;
	//		num = num / div;
	//	}
	//	else
	//		div++;
	//}
	//cout << endl << "end program";
	////
	_getch();
	return 0;
}