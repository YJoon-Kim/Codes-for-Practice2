#include <stdio.h>
#include <stdlib.h> // �̰� ���ҷ��� 
// void* malloc(int);�� �ؾ���.

// ���� �޸� �Ҵ�!!!!

void main12_5() // 12_5
{
	char* str; // ���ڿ� ������ ���� """����!!!!!""" --> �� ������ ����.
	str = (char *)malloc(20); // 20 byte ���� �޸� �Ҵ�. VS "stdlib.h" �� ������ ����.
	scanf("%s", str);

	printf("�Է� : %s\n", str);
	free(str); // ���� �޸�(����) �����ֱ�
}