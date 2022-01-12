#include <stdio.h>

int ppp(char ch, int n)
{ 
	printf("%c%d", ch, n);
	return 1;
}

void mainG1_4() // 18_1_4
{
	int i, n = 2, fact = 1;

	for (i = 0, ppp('A', i); ppp('B', i) && i <= n; ++i, ppp('C', i))
	{
		ppp('D', i);
		fact = fact * i;
	}
	ppp('E', i);
}

// ¸ÂÀ½
// ´ä : A0B0D0C1B1D1C2B2D2C3B3E3