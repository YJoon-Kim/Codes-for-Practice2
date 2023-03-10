#include <stdio.h>
// ¹®ÀÚ¿­

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		char arr1[1000];
		scanf("%s", arr1);
		for (int j = 0;;j++)
		{
			printf("%d", arr1[j]);
		}

	}
	return 0;
}