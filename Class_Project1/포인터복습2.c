#include <stdio.h>

int mystrcmpPointer_2(char *s1, char s2[]) // ���� �����͵���.(����)
{
	for (; *(s1) && *s2 && *s1 == *s2; ++s1,++s2);
	return *s1 - *s2;
	// s1->'h'...'g' / s2->'h'...'G' / *s1, *s2 h�� ��. ++s1 ++s2 �ּ� ��ĭ�� ����.
	// char�� 1byte �� ����.
}

int mystrcmpPlus_2(char s1[1], char s2[1000]) // ���� �����͵���.(����)
{
	int i; // s1[i] == *(s1+i)
 	for (i = 0; *(s1+i) && s2[i] && *(s1 + i) == s2[i]; ++i);
	return *(s1 + i) - s2[i];
}

int mystrcmpARR_2(char s1[1], char s2[1000]) // ���� �����͵���.(����)
{
	int i;
	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; ++i);
	return s1[i] - s2[i];
}

void main12_1() // 12_1
{
	char* s1 = "hong"; // �����͸� ����. ��� ���ڿ� "hong"�� �ּҰ� �����
	char s2[] = "honG";
	printf("%d %d %d\n", mystrcmpARR_2(s1, s2), mystrcmpPlus_2(s1, s2), mystrcmpPointer_2(s1, s2)); // s1�� ������-�ּ����� 
	// s2�� array �ּ� ���. s2++ ����� �̷��� ����. s1++�� ��
}

/*

void main()
{
	char* (*�� ������.) str; // ����(���ڿ� ������ ������)... str�� ������ 0�� �� û�ʹ뿡 ��������.
	*str = 'a'; // ��� ����...
	// str�� �Ϲ� ������->99.99% ���ּ� ���� �ƴ�. ���� �� -> ����.
	char* str = "1919"; // ���� "1919" ���ڿ��� �����Ϸ��� �ϸ� ����. ������ڿ� �ǵ帮�� �˾�!!!!!!!!!!!.
	char str[] = "1919"; // OK �ʱ�ȭ. �� "4�� + ��" �� 5�ڸ� ���� ����
	char str[] = { '1', '9','1', '9' }; // OK �ʱ�ȭ. �� 4�ڻ�
	char str[100]; //OK �ʱ�ȭ�� ������� 
}

*/