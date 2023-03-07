#include <stdio.h>
// ³ª¸ÓÁö

int main_3052()
{
	int arr1[10] = { 0, };
	int s;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &s);
		arr1[i] = s % 42;
	}

	int arr2[42] = { 0, };
	for (int j = 0; j<42; j++)
	{
		for (int k =0;k<10;k++)
			if (arr1[k]==j)
			{
				arr2[j] = 1;
			}
	}
	
	int count = 0;
	for (int h = 0; h < 42; h++)
	{
		if (arr2[h]==1)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}