#include <stdio.h>

int strcmpG1_17(char* s, char* t) // ��int������ [] 0 Ȥ�� ����ϸ� ��
{
	for (; *s && *t && *s == *t; s++, t++); // null . ���̳��ų� ������ ������ ����
	return *s - *t;
}

void mainG1_17()
{
	char* s = "ABCD";
	char *t = "ABCD";

	/*
	����ü ��
	char s = "ABCD"
	char t = "ABCd" �ϰ�

	printf("%d\n", strcmpG1_17(&s, &t));
	�̷��� �ϸ� �� ����� �ȳ�����?

	--> type�� char�ε� ���ڿ��� �־��ڳ� ����.

	*/

	printf("%d\n", strcmpG1_17(s, t));
}