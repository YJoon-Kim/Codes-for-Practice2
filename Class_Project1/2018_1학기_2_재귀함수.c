#include <stdio.h>

// 1. ´ä : W

int sum_of_squares(int n)
{
	int i, sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + i * i;
	return sum;
}

int sum_of_squares2(int n)
{
	int i = n;
	if (n <= 1) return 1;
	return i * i + sum_of_squares2(n - 1);
}

void main18_1_2() // 18_1_2
{
	printf("%d\n",sum_of_squares(10));
	printf("%d\n", sum_of_squares2(10));
}