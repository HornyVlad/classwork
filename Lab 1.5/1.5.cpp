#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	for (i = 0; i < 3; i++)
	{
		printf("������� ������� ��������\n");
		scanf("%s", &stud[i].famil);
	}
	for (i = 0; i < 3; i++)
	{
		printf("������� ��� �������� %s\n", stud[i].famil);
		scanf("%s", &stud[i].name);
	}
	for (i = 0; i < 3; i++)
	{
		printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name);
		scanf("%s", &stud[i].facult);
	}
	for (i = 0; i < 3; i++)
	{
		printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
	}
	/*for (i = 0; i < 3; i++)
	{
	printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,stud[i].facult, stud[i].Nomzach);
	}*/
	char name[20];
	printf("������� ��� ��������, �������� ������ ����� ");
	scanf("%s", name);
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(name, stud[i].name) == 0)
		{
			printf("\nC������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
	}
}