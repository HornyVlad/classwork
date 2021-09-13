#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int** z;
	int max1 = rand() % 7 + 1;
	printf("Количество строк: %d\n", max1);
	z = (int**)malloc(max1 * sizeof(int));
	int max2 = rand() % 7 + 1;
	printf("Количество столбцов: %d\n", max2);

	for (int i = 0; i < max2; i++)
	{
		z[i] = (int*)malloc(max2 * sizeof(int));
	}
	printf("Заполните массив: ");
	for (int n = 0; n < max1; n++)
	{
		for (int m = 0; m < max2; m++)
		{
			z[m][n] = rand() % 20;
		}
	}
	printf("Массив: \n");
	for (int n = 0; n < max1; n++)
	{
		for (int m = 0; m < max2; m++)
		{
			printf("%d ", z[m][n]);
		}
		printf("\n");
	}
}