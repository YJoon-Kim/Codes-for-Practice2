// for 로 1 + 2 + 3계산 - 외우자
#include "stdio.h"

void main5_4() // 5_4
{
	int i, n = 3, sum = 0;

	i = 1;
	while (i <= n)
	{
		sum = sum + i;
		++i;
	}

	printf("SUM %d == %d\n", n, sum);
}