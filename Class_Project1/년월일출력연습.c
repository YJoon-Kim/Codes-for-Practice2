#include <stdio.h>

char main2_5() // 211228 // 2_5
{
	char c1, c2, c3, c4, c5, c6;
	int year, month, date;
	scanf("%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6); // & �ּ� �˷��ֱ�
	year = (c1 - '0') * 10 + (c2 - '0'); // 'b'-'a'=1 ascii�� 'a' 'b' �ڵ����� 1
	// ascii code 0 1 2 3 4 5 6 7 8 9(char)�� ����(int)�� �ٲٷ��� - '0' ����
	// �̷��� �ϴ� ������ '0'�ϰ� c1�� �ƽ�Ű�ڵ� ���̸� ��Ÿ���ֱ� �����̴�. �� ���̴� c1�� ���� ���ڸ�ŭ�̴�.
	// (c1 - '0')�� %d�� ������ ������ int��, %c�� ������ �� ������ ascii code�� ���´�.

	// char-char=int / char-int=char

	month = (c3 - '0') * 10 + (c4 - '0');
	date = (c5 - '0') * 10 + (c6 - '0');

	printf("c6 - '0' = %d\n", c6 - '0');
	printf("%d�� %d�� %d��\n", year, month, date);
}