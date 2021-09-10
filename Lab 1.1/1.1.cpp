#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "");
	int a[10] = {0,1,2,3,4,5,6,7,8,9}, b;
	b = abs(a[0] - a[9]);
	printf("–азница между максимальным и минимальным = %d", b);
}