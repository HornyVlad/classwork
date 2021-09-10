#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define i 20

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int a[i];
	int max = rand() % 6;
	printf("Размер массива: %d\n", max);
	printf("Заполните массив: ");
	for (int n = 0; n < max; n++)
	{
		scanf_s("%d", &a[n]);
	}
	printf("Массив: ");
	for (int k = 0; k < max; k++)
	{
		printf("%d ", a[k]);
	}
}