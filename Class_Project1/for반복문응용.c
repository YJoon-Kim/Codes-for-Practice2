// for 로 1 + 2 + 3계산 - 외우자
#include "stdio.h"

void main5_3() // 5_3
{
	int i, n = 3, sum = 0;

	i = 1;
	for (i = 1; i <= n; ++i)
	{
		sum = sum + i;
	}

	printf("SUM %d == %d\n", n, sum);
}