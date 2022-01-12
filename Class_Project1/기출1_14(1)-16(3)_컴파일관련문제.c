#include <stdio.h> 
#include <stdlib.h>

int p_14(char* ap, char a, char* bp, char b)
{
	printf("%d=%c, %d=%c\n", (int)ap, a, (int)bp, b); return 1;
}

void strcpy_pt2(char* a, char* b)
{
	for (; p_14(a, *a, b, *b) && (*a = *b); a++, b++);
}

void mainG1_14()
{
	// char a[] = "ABCDE"; // a �� �ּҰ��� ������ 100 �̶� ����
	// �ּҿ� ���ñ��� ���� // �׷��� ��������
	char* a = "ABCDE";
	a = (char*)malloc(20); // �ٵ� �̷��� �ȿ� ���� ������� ������� ���°� �ƴϳ�...?
	char* b = "hong"; // b �� ����� �ּҴ� ������ 200 �̶� ���� // �ּҸ� ����
	strcpy_pt2(a, b);
	free(a);
}

/*

<15(2)�� ��>
char a[] ��� char *a�� ����ϰ� �Ǹ� �� ��� ���ڿ��� �����ϳİ� �ؼ� *a = *b ���� ������ �߻��ϼ�.

<16(3)�� ��>
a = (char*)malloc(20);
 --> �ٵ� �̷��� �ȿ� ���� ������� ������� ���°� �ƴϳ�...?

*/