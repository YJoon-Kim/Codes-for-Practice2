#include <stdio.h>

int p_2(char ch, int n)
{
	printf("%c%d", ch, n); return 1;
}

int myfact_3(int n)
{
	if (p_2('A', n) && n <= 0) return 1;
	return (p_2('B', n) * n * myfact_3(n - 1) * p_2('R', n));
}

void main9_4() // 9_4
{
	printf("\n%d\n", myfact_3(3));
}

// 여기서 왜 오류..? --> 문자 1개 : ' '사용 / 문자열 : " " 사용해야 오류 안남..!