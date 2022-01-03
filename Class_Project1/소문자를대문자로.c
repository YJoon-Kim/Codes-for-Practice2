#include <stdio.h>

char mytoupper(); // y = mytoupper(x)

void main6_9() // 6_9
{
	printf("변경 후 : %c\n", mytoupper());
}

char mytoupper()
{
	char x;
	scanf("%c", &x);
	printf("변경 전 : %c\n", x);

	if ('a' <= x && x <= 'z')
		return x - 'a' + 'A'; // return 안하면 쓰래기 나옴.
}