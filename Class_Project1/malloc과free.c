#include <stdio.h>
#include <stdlib.h> // 이거 안할려면 
// void* malloc(int);는 해야함.

// 동적 메모리 할당!!!!

void main12_5() // 12_5
{
	char* str; // 문자열 저장할 공간 """없음!!!!!""" --> 뭐 넣으면 죽음.
	str = (char *)malloc(20); // 20 byte 동적 메모리 할당. VS "stdlib.h" 안 넣으면 망함.
	scanf("%s", str);

	printf("입력 : %s\n", str);
	free(str); // 받은 메모리(공간) 돌려주기
}