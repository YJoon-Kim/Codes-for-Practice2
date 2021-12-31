#include <stdio.h>

int p(char ch, int i) { printf("%c%d\n", ch, i); return 1; }

void main5_10() // 5_10 // for문 매커니즘
{
	int i, n = 3, fact = 1;
	for (i = 0, p('A', i); p('B', i) && i <= n; /* i++, */ p('D', i), i++) 
	{
		p('C', i); fact = fact * i;
	}
	p('E', i);
}