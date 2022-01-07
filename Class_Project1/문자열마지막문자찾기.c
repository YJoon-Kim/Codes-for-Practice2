#include <stdio.h>

char last(char str[])
{
	int i;
	if (str == 0 || str[0] == 0) return 0; // 널 스트링 혹은 길이 0인 스트링 입력 
	for (i = 0; str[i]; ++i); // 널 나올때 까지 가서 
	return str[i - 1]; // 바로 앞 글자 리턴 
}

void main8_6() // 8_6
{
	printf("%c", last("hong") );
}