#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// �ּ� : C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\__linux.words.txt
// ��� 47�� �ܾ� �̻������� 6���� �̻� �ƴѰ� �� �ĳ��� ����

int cleanWord(char s[]);

void main10_2() // 10_2
{
	FILE* ip, *op;
	char word[100];
	ip = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\__linux.words.txt", "r");
	op = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\CLEANwords.txt", "w");
	for (; fscanf(ip, "%s", word) > 0;) // -1 �������� / 0�̸� 0������
	{
		if (cleanWord(word)) // 0�̸� ����, 1�̸� �ҷ���.
		{
			fprintf(op, "%s\n", word);
		}
	}
	fclose(ip); fclose(op);
}

int cleanWord(char s[1]) // ������������ arrayó�� ���̴ϱ�
{
	int i;
	for (i = 0; s[i]; ++i)
	{
		if (s[i] < 'a' || s[i]>'z') // a~z �ƴѰ��� ���� �ҷ�
		{
			return 0; // �������� ��� // �빮�� ���� �� ����
		}
	}
	if (i > 5) return 1; // �γ����� ������ �ôµ� ���� �ȉ���. �׷��� ���� �ҹ����̸鼭 ���̰� 6�� �̻���.
	else return 0; // ���� �ҹ��� �̱��ϳ� ���̰� 6 �̸���.
}