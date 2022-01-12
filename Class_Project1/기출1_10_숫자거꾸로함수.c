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

	printf("순서를 바꿀 숫자를 입력하시오 -> ");
	scanf("%d", &num);
	printf("%d\n", ReverseNumber(num));
}

// 요로코롬 만들면 되긋다.