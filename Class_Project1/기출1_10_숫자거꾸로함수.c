#include <stdio.h>

int ReverseNumber(int num)
{
	int tmp = 0;
	for (; num; num = num / 10)
	{
		tmp = tmp * 10 + num % 10;
	}
	return tmp;
}

void mainG1_10()
{
	int num = 0;

	printf("������ �ٲ� ���ڸ� �Է��Ͻÿ� -> ");
	scanf("%d", &num);
	printf("%d\n", ReverseNumber(num));
}

// ����ڷ� ����� �Ǳߴ�.