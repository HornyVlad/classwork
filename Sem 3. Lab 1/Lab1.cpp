#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define i 6
#define j 8

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int a[i][j], sum = 0;
	printf("Массив:\n");
	for (int n = 0; n < i; n++)
	{
		for (int k = 0; k < j; k++)
		{
			a[n][k] = rand() % 10;
			printf("%d ", a[n][k]);
		}
		printf("\n");
	}
	for (int n = 0; n < i; n++)
	{
		for (int k = 0; k < j; k++)
		{
			sum = sum + a[n][k];
		}
		printf("Сумма %d строки: %d\n", n + 1, sum);
		sum = 0;
	}
}