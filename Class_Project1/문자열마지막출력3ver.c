#include <stdio.h>

char lastPointer_2(char* s) // array 선언이 불가능한 곳임
{
	// s엔 문자열 맨 처음 주소가 들어있을 것 s = "hi"
	for (; *(s) != NULL; ++s);
	return *(s - 1);
}

char lastPlus_2(char* s) // array 선언이 불가능한 곳임
{
	int i = 0; // s[i] == *(s+i);
	for (i = 0; *(s+i) != NULL; ++i);
	return *(s + i - 1);
}

char lastARR_2(char* s) // array 선언이 불가능한 곳임
{
	int i = 0;
	for (i = 0; s[i] != NULL; ++i);
	return s[i - 1];
}

void main12_2() // 12_2
{
	char* s1 = "ho";
	char s2[] = "hO";
	char s3[] = { 'h','i','\0' };

	printf("%c\n", lastARR_2(s1));
	printf("%c\n", lastPlus_2(s2));
	printf("%c\n", lastPointer_2(s3));
}