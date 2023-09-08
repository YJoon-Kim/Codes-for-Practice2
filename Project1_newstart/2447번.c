#include <stdio.h>
// ï¿½ï¿½ï¿½ï¿½ï¿? - 10

void star(int i, int j, int num)
{
	if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
	{
		printf(" ");
	}

	else if (num / 3 == 0)
	{
		printf("*");
	}

	else 
	{
		star(i, j, num / 3);
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			star(i, j, num);
		}
		printf("\n");
	}
	return 0;
}