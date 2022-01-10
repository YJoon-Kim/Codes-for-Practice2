#include <stdio.h>

int p_2(char ch, int n)
{
	printf("%c%d", ch, n); return 1;
}

int myfact_3(int n)
{
	if (p_2('A', n) && n <= 0) return 1;
	return (p_2('B', n) * n * myfact_3(n-1) * p_2('R', n));
}

void main() // 9_4
{
	printf('%d\n', myfact_3(4));
}

// 여기서 왜 오류..?