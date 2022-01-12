#include <stdio.h> 
#include <stdlib.h>

int p_14(char* ap, char a, char* bp, char b)
{
	printf("%d=%c, %d=%c\n", (int)ap, a, (int)bp, b); return 1;
}

void strcpy_pt2(char* a, char* b)
{
	for (; p_14(a, *a, b, *b) && (*a = *b); a++, b++);
}

void mainG1_14()
{
	// char a[] = "ABCDE"; // a 의 주소값은 정수로 100 이라 가정
	// 주소와 스택까지 있음 // 그래서 수정가능
	char* a = "ABCDE";
	a = (char*)malloc(20); // 근데 이러면 안에 값이 사라지고 빈공간만 남는거 아니냐...?
	char* b = "hong"; // b 에 저장된 주소는 정수로 200 이라 가정 // 주소만 있음
	strcpy_pt2(a, b);
	free(a);
}

/*

<15(2)번 답>
char a[] 대신 char *a를 사용하게 되면 왜 상수 문자열을 변경하냐고 해서 *a = *b 에서 문제가 발생하셔.

<16(3)번 답>
a = (char*)malloc(20);
 --> 근데 이러면 안에 값이 사라지고 빈공간만 남는거 아니냐...?

*/