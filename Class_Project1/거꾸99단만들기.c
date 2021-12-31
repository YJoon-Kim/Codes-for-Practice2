#include <stdio.h>

void main5_9() // 5_9
{
	int i, j;
	for (j = 9; j >=1; j--)
	{
		for (i = 9; i >=1; i--)
		{
			printf("%1d X %1d = %-2d\n", j, i, j * i);
		}
	}
}