#include <stdio.h>
// ¹®ÀÚ¿­

int main_9086()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		char arr1[1000];
		scanf("%s", arr1);
		printf("%c", arr1[0]);
		int count = 0;
		for (int j = 1; arr1[j-1] != 0; j++,count++)
		{
			if (arr1[j] == 0)
			{
				printf("%c\n", arr1[j - 1]);
			}
		}
	}
	return 0;
}