#include <stdio.h>

char tolower_char(char ch)
{
	if (ch < 'A' || ch>'Z')
	{
		printf("\n�빮�� �Է��϶�ϱ�...\n");
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

	printf("�빮�� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%c", &ch);
	printf("\n%c\n", tolower_char(ch));
}

// ����ڷ�!