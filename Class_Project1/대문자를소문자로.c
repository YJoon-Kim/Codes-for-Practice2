#include <stdio.h>

char mytolower(); // y = mytoupper(x)

void main6_10() // 6_10
{
	printf("���� �� : %c\n", mytolower());
}

char mytolower()
{
	char x;
	scanf("%c", &x);
	printf("���� �� : %c\n", x);

	if ('A' <= x && x <= 'Z')
		return x - 'A' + 'a'; // return ���ϸ� ������ ����.
}