#include <stdio.h> 

void main5_6() // 5_6
{
	int i, n = 5, fact = 1; /* 초기화 않으면 망함. 쓰레기 값 들어있음. */
	for (i = 2; i <= n; ++i)
	{
		fact = fact * i;
	}
	printf("%d! == %d\n", n, fact);
}