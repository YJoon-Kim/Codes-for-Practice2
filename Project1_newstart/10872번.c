#include <stdio.h>
// ÆÑÅä¸®¾ó

int a = 1;

int fact_10872(int N)
{
	if (N == 0)
	{
		return 1;
	}
	else
	{
		return N * fact(N - 1);
	}
}

int main_10872()
{
	int N;
	scanf("%d", &N);
	printf("%d", fact(N));
	return 0;
}