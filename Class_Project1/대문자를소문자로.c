#include <stdio.h>

char mytolower(); // y = mytoupper(x)

void main6_10() // 6_10
{
	printf("변경 후 : %c\n", mytolower());
}

char mytolower()
{
	char x;
	scanf("%c", &x);
	printf("변경 전 : %c\n", x);

	if ('A' <= x && x <= 'Z')
		return x - 'A' + 'a'; // return 안하면 쓰래기 나옴.
}