#include <stdio.h>

int a;

void main13_1() // 13_1
{	
	int b;
	{
		int b = 3;
		a = b;
		printf("%d %d\n", a, b);
	}
	printf("%d %d\n", a, b);
}