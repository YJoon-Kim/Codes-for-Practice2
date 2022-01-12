#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 할당된 헤더 파일.

void mystrcpyPointer_3(char s2[], char* s1)
{
	for (; *s1 = *s2; s1++, s2++);
}

void main12_3() // 12_3
{
	char* s1 = "     "; // 상수문자열
	char s2[] = "      "; // array로 잡음
	char* s3; // 청소 안해서 쓰레기 담김. 자기가 문자열 저장할 공간.
	char ori[] = "ho";

	s3 = (char*)malloc(10); // 동적 메모리 할당...? "stdlib.h" 필수
	// 이렇게 하면 s1도 가능.

	// mystrcpyPointer_3(ori, s1); // 상수문자열 건드리면 죽임을 당함.
	mystrcpyPointer_3(ori, s3); 
	// mystrcpyPointer_3(ori, s2);  // s2는 OK
	printf("%s\n", s3);
	free(s3); // 받은 메모리 돌려주기
}

// array는 값 변경 가능. 포인터는 상수 문자열의 주소만 나타내므로 상수를 건드리면 죽으셔.