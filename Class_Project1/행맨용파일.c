#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// �ּ� : C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\__linux.words.txt --> ��Ʈ��
// �ּ� : C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\__linux.words.txt --> ����ũž
// ��� 47�� �ܾ� �̻������� 6���� �̻� �ƴѰ� �� �ĳ��� ����

int cleanWord(char s[]);

/*

int goodWord(char* word)
{
	int i;
	for ( i=0 ; word[i] ; ++i)
	{
		if (word[i] < 'a' || word[i] > 'z') return 0;
	}
	if ( i<6 ) return 0; // ���̰� �ȵǴ� �͵��� ������ ����
	return -1; // �ƹ��ų� ��� X
}

*/

void main10_2() // 10_2
{
	FILE* ip, *op;
	char word[100];
	ip = fopen("C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\__linux.words.txt", "r");
	op = fopen("C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\CLEANwords.txt", "w");

	if (!ip || !op)
	{
		printf("���Ͽ��� ����"); return;
	}

	for (; fscanf(ip, "%s", word) > 0;) // -1 �������� / 0�̸� 0������
	{
		if (cleanWord(word)) // 0�̸� ����, 1�̸� �ҷ���.
		{
			fprintf(op, "%s\n", word);
		}
	}

	/*
	
	for (;;)
	{
		code = fscanf(ip, "%s", word);
		if( code < 1) break;
		if( goodWord(word) != 0 ) // if( goodWord(word) )
			fprintf(op, "%s\n", word);
	}

	*/

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