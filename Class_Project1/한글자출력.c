#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//### ���Ͽ��� �ܾ� �ϳ� �о ����ϱ� ����

void countWord(char word[1], char wordCount[1])
{
	int i;
	for (i = 0; word[i]; ++i) // word[] �� ���Ë����� ó������ Ȯ��
	{
		wordCount[word[i] - 'a'] ++; // word[i]�� 'a' �������, 'a'-'a'=0  --> wordCount[0]++. z�� wordCount[27]++
	}
}

void main10_3() // 10_3
{
	FILE* ip, * op; char wordCount[28] = { 0 }; /*�ʱ�ȭ ���� 0���� ��. �̰��� ���� ���� ���� �뵵�� ����� ����*/
	// �빮�� ����ϸ� wordCount ����� �׾����.
	char word[100], i;

	ip = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\1word.txt", "r");
	op = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\1word_result.txt", "w");

	if (!ip || !op)
	{
		printf("�����б����\n"); return;
	}

	fscanf(ip, "%s", word);
	countWord(word, wordCount);

	for (i = 0; i < 28; ++i) // ���ĺ� 28����. wordCount array�� ������ �������. 0�� 0�� ��Ÿ��. ����
	{ // �빮�ڰ� ������ �������� ����.
		if (wordCount[i] > 0) printf("%c ���ڴ� %d�� ��Ÿ��\n", i + 'a', wordCount[i]);
			fprintf(op, "%c ���ڴ� %d�� ��Ÿ��\n", i + 'a', wordCount[i]);
	}
	fclose(ip); fclose(op);
}