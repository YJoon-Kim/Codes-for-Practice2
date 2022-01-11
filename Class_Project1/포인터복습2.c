#include <stdio.h>

int mystrcmpPointer_2(char *s1, char s2[]) // 전부 포인터들임.(변수)
{
	for (; *(s1) && *s2 && *s1 == *s2; ++s1,++s2);
	return *s1 - *s2;
	// s1->'h'...'g' / s2->'h'...'G' / *s1, *s2 h라 참. ++s1 ++s2 주소 한칸씩 전진.
	// char라 1byte 씩 전진.
}

int mystrcmpPlus_2(char s1[1], char s2[1000]) // 전부 포인터들임.(변수)
{
	int i; // s1[i] == *(s1+i)
 	for (i = 0; *(s1+i) && s2[i] && *(s1 + i) == s2[i]; ++i);
	return *(s1 + i) - s2[i];
}

int mystrcmpARR_2(char s1[1], char s2[1000]) // 전부 포인터들임.(변수)
{
	int i;
	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; ++i);
	return s1[i] - s2[i];
}

void main12_1() // 12_1
{
	char* s1 = "hong"; // 포인터를 선언. 상수 문자열 "hong"의 주소가 저장됨
	char s2[] = "honG";
	printf("%d %d %d\n", mystrcmpARR_2(s1, s2), mystrcmpPlus_2(s1, s2), mystrcmpPointer_2(s1, s2)); // s1은 포인터-주소저장 
	// s2는 array 주소 상수. s2++ 상수라 이러면 망함. s1++은 됨
}

/*

void main()
{
	char* (*은 내용임.) str; // 망함(문자열 공간이 없으셔)... str에 쓰레기 0일 때 청와대에 거주하자.
	*str = 'a'; // 사고 가능...
	// str에 일반 쓰레기->99.99% 내주소 공간 아님. 남의 것 -> 망함.
	char* str = "1919"; // 만일 "1919" 문자열을 수정하려고 하면 망함. 상수문자열 건드리면 죄악!!!!!!!!!!!.
	char str[] = "1919"; // OK 초기화. 단 "4자 + 널" 총 5자만 저장 가능
	char str[] = { '1', '9','1', '9' }; // OK 초기화. 단 4자뿐
	char str[100]; //OK 초기화는 쓰레기로 
}

*/