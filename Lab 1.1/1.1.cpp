#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(0, "");
	int a[10], b, i, max = 0, min = 20;
	srand(time(NULL));
	printf("Массив: ");
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 21 - 10;
		printf("%d ", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	b = max - min;
	printf("\nРазница между максимальным и минимальным = %d", b);
}