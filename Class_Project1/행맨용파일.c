#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 주소 : C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\__linux.words.txt
// 행맨 47만 단어 이상이지만 6글자 이상 아닌거 다 쳐내기 연습

int cleanWord(char s[]);

void main10_2() // 10_2
{
	FILE* ip, *op;
	char word[100];
	ip = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\__linux.words.txt", "r");
	op = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\CLEANwords.txt", "w");
	for (; fscanf(ip, "%s", word) > 0;) // -1 에러났음 / 0이면 0개읽음
	{
		if (cleanWord(word)) // 0이면 버려, 1이면 불러와.
		{
			fprintf(op, "%s\n", word);
		}
	}
	fclose(ip); fclose(op);
}

int cleanWord(char s[1]) // 포인터이지만 array처럼 보이니까
{
	int i;
	for (i = 0; s[i]; ++i)
	{
		if (s[i] < 'a' || s[i]>'z') // a~z 아닌것은 전부 불량
		{
			return 0; // 거짓말로 사용 // 대문자 들어간거 다 날려
		}
	}
	if (i > 5) return 1; // 널나오는 끝까지 봤는데 리턴 안됬음. 그러면 전부 소문자이면서 길이가 6자 이상임.
	else return 0; // 전부 소문자 이긴하나 길이가 6 미만임.
}