#include <stdio.h>
// 과제 안 내신 분..?

int main_5597()
{
	int arr1[35] = { 0, };
	for (int i = 0;i<28;i++)
	{
		int num;
		scanf("%d",&num);
		arr1[num - 1] = num;
	}

	for (int j=0;j<30;j++)
	{
		if (arr1[j] == 0)
		{
			printf("%d\n", j+1);
		}
	}

	return 0;
}