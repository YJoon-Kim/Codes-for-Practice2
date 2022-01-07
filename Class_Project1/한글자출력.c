#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//### 파일에서 단어 하나 읽어서 출력하기 기출

void countWord(char word[1], char wordCount[1])
{
	int i;
	for (i = 0; word[i]; ++i) // word[] 널 나올떄까지 처음부터 확인
	{
		wordCount[word[i] - 'a'] ++; // word[i]에 'a' 들었으면, 'a'-'a'=0  --> wordCount[0]++. z면 wordCount[27]++
	}
}

void main10_3() // 10_3
{
	FILE* ip, * op; char wordCount[28] = { 0 }; /*초기화 전부 0으로 됨. 이것을 글자 갯수 세는 용도로 사용할 예정*/
	// 대문자 사용하면 wordCount 벗어나서 죽어버림.
	char word[100], i;

	ip = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\1word.txt", "r");
	op = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\1word_result.txt", "w");

	if (!ip || !op)
	{
		printf("파일읽기오류\n"); return;
	}

	fscanf(ip, "%s", word);
	countWord(word, wordCount);

	for (i = 0; i < 28; ++i) // 알파벳 28글자. wordCount array에 갯수가 들어있음. 0은 0개 나타남. 제낌
	{ // 대문자가 나오면 오류나서 죽음.
		if (wordCount[i] > 0) printf("%c 글자는 %d번 나타남\n", i + 'a', wordCount[i]);
			fprintf(op, "%c 글자는 %d번 나타남\n", i + 'a', wordCount[i]);
	}
	fclose(ip); fclose(op);
}