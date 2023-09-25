#include <stdio.h>
#include <locale.h>
#define bar 158.987
#define gal 3.785411784001
void main()
{
	setlocale(LC_ALL, "Russian");
	int b,g;
	float result1, result2;
	printf("¬ведите баррели: ");
	scanf("%d", &b);
	printf("¬ведите галлоны: ");
	scanf("%d", &g);
	result1 = bar * b;
	result2 = gal * g;
	printf("%d баррелей Ц это %.2f кг\n", b, result1);
	printf("%d галлонов Ц это %.2f кг", g, result2);
}