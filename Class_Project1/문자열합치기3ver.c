#include <stdio.h>

void mystrcatPointer_3(char* a, char b[])
{
	for (; *(a); a++);
	for (; *(a) = *b; a++, b++);
	// �ε� ���簡 �Ǿ����Ƿ� �۾� �Ϸ�.
}

void mystrcatPlus_3(char* a, char b[])
{
	int i, j; // i�� a ���󰡰�, j�� b ���� ����.
	for (i = 0; *(a+i); i++);
	for (j = 0; *(a+i) = b[j]; i++, j++);
	// �ε� ���簡 �Ǿ����Ƿ� �۾� �Ϸ�.
}

void mystrcatARR_3(char* a, char b[])
{
	int i, j; // i�� a ���󰡰�, j�� b ���� ����.
	for (i = 0; a[i]; i++);
	for (j = 0; a[i] = b[j]; i++, j++);
	// �ε� ���簡 �Ǿ����Ƿ� �۾� �Ϸ�.
}
void main12_4() // 12_4
{
	char* b = "University";
	char a[100] = "hongik"; // �߰��� ���ڿ� ���ų��� ���� �־�� ��.

	mystrcatARR_3(a, b); // a�� ����� ���� �־�� ��.
	printf("%s \n", a);

	mystrcatPlus_3(a, b); // a�� ����� ���� �־�� ��.
	printf("%s \n", a);

	mystrcatPointer_3(a, b); // a�� ����� ���� �־�� ��.
	printf("%s \n", a);
}