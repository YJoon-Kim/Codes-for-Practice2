#include <stdio.h>

char tolower_char(char ch)
{
	if (ch < 'A' || ch>'Z')
	{
		printf("\n대문자 입력하라니까...\n");
		return ch;
	}

	else
	{
		return ch - 'A' + 'a';
	}
}

void mainG1_11()
{
	char ch;

	printf("대문자 하나를 입력하시오: ");
	scanf("%c", &ch);
	printf("\n%c\n", tolower_char(ch));
}

// 요로코롬!