#include <stdio.h>

char last(char str[])
{
	int i;
	if (str == 0 || str[0] == 0) return 0; // �� ��Ʈ�� Ȥ�� ���� 0�� ��Ʈ�� �Է� 
	for (i = 0; str[i]; ++i); // �� ���ö� ���� ���� 
	return str[i - 1]; // �ٷ� �� ���� ���� 
}

void main8_6() // 8_6
{
	printf("%c", last("hong") );
}