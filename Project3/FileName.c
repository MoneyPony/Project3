#include <stdio.h>
#include <locale.h>
#define bar 158.987
#define gal 3.785411784001
void main()
{
	setlocale(LC_ALL, "Russian");
	int b,g;
	float result1, result2;
	printf("������� �������: ");
	scanf("%d", &b);
	printf("������� �������: ");
	scanf("%d", &g);
	result1 = bar * b;
	result2 = gal * g;
	printf("%d �������� � ��� %.2f ��\n", b, result1);
	printf("%d �������� � ��� %.2f ��", g, result2);
}