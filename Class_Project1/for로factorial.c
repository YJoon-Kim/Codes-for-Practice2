#include <stdio.h> 

void main5_6() // 5_6
{
	int i, n = 5, fact = 1; /* �ʱ�ȭ ������ ����. ������ �� �������. */
	for (i = 2; i <= n; ++i)
	{
		fact = fact * i;
	}
	printf("%d! == %d\n", n, fact);
}