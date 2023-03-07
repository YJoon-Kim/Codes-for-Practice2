#include <stdio.h>

int main_Testtt()
{
	int num;
	int i=0;
	int j;
	int jun;
	scanf("%d", &num);
	int a = num;
	int array[];
	for (i = 0; i < num; i++)
	{
		scanf("%d", &jun);
		array[i] = jun;
	}
	for (j = 0; j < num; j++)
	{
		printf("%d ", array[j]);
	}
	return 0;
}