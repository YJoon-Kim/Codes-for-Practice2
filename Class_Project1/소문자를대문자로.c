#include <stdio.h>

char mytoupper(); // y = mytoupper(x)

void main6_9() // 6_9
{
	printf("���� �� : %c\n", mytoupper());
}

char mytoupper()
{
	char x;
	scanf("%c", &x);
	printf("���� �� : %c\n", x);

	if ('a' <= x && x <= 'z')
		return x - 'a' + 'A'; // return ���ϸ� ������ ����.
}