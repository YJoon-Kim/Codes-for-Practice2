#include <stdio.h>

void mystrchgG1_18(char ori[], char n[]) { for (; *ori = *n; ori++, n++); }

void mainG1_18()
{
	char name[20] = "ȫ�浿";
	mystrchgG1_18(name,"�迬��");
	printf("%s\n", name); // �����ͷ� ����? printf �� ��? ÷ ��.
}