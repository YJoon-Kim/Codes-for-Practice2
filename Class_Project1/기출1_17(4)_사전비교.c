#include <stdio.h>

int strcmpG1_17(char* s, char* t) // “int변수” [] 0 혹은 사용하면 점
{
	for (; *s && *t && *s == *t; s++, t++); // null . 차이나거나 나오기 전까지 돌려
	return *s - *t;
}

void mainG1_17()
{
	char* s = "ABCD";
	char *t = "ABCD";

	/*
	도대체 왜
	char s = "ABCD"
	char t = "ABCd" 하고

	printf("%d\n", strcmpG1_17(&s, &t));
	이렇게 하면 왜 제대로 안나오지?

	--> type이 char인데 문자열을 넣었자나 ㅄ아.

	*/

	printf("%d\n", strcmpG1_17(s, t));
}