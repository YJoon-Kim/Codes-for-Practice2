#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� �Ҵ�� ��� ����.

void mystrcpyPointer_3(char s2[], char* s1)
{
	for (; *s1 = *s2; s1++, s2++);
}

void main12_3() // 12_3
{
	char* s1 = "     "; // ������ڿ�
	char s2[] = "      "; // array�� ����
	char* s3; // û�� ���ؼ� ������ ���. �ڱⰡ ���ڿ� ������ ����.
	char ori[] = "ho";

	s3 = (char*)malloc(10); // ���� �޸� �Ҵ�...? "stdlib.h" �ʼ�
	// �̷��� �ϸ� s1�� ����.

	// mystrcpyPointer_3(ori, s1); // ������ڿ� �ǵ帮�� ������ ����.
	mystrcpyPointer_3(ori, s3); 
	// mystrcpyPointer_3(ori, s2);  // s2�� OK
	printf("%s\n", s3);
	free(s3); // ���� �޸� �����ֱ�
}

// array�� �� ���� ����. �����ʹ� ��� ���ڿ��� �ּҸ� ��Ÿ���Ƿ� ����� �ǵ帮�� ������.