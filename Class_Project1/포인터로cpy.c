#include <stdio.h>

void mystrcpyHPointer(char ori[1], char* copy)
{
	// ori에 "ho"주소 들어있음. "ho"은 상수 문자열임. 이것 수정 시도하면 죽임당함.
	// name은 자기 집. 10층 빌딩. 글자 10자 수용 가능. "" 해둬서 전부 0으로 초기화 됨.
	*copy = *ori; // ori의 h 글자가 copy에 복사됨.
	copy++, ori++; // 주소 한칸씩 올림. ++하니 ori측은 0란 글자 가리킴
	*copy = *ori; // ori의 o 글자가 copy에 복사됨.
	copy++, ori++; // 주소 한칸씩 올림. ++하니 ori측은 0란 글자 가리킴
	*copy = *ori; // ori의 NULL 글자가 copy에 복사됨.

	// for 조건문에서 *copy = *ori; (1) 일단 널 복사 (2) 참거짓 판별 --> 0이라 거짓 (3) for 깨고 나옴.
	// 일단 문자열 마지막에 널이 복사된 상태이므로 더이상 할 일 없음. 돌아가자. return;
	// for (; *copyHere = *ori; ++ori, copyHere++);
}

void main11_5() // 11_5
{
	char name[10] = "";
	mystrcpyHPointer("ho", name);
	printf("%s\n", name);
}