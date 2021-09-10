#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int a[10], n = 0;
	printf("„лены массива:");
	while (n < 10)
	{
		a[n] = rand() % 10;
		printf(" %d", a[n]);
		n++;
	}
}