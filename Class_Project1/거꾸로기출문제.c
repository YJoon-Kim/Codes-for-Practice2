#include <stdio.h>

void main6_1() // 6_1
{
	printf("거꾸로 기출문제\n\n");
	
	int ret, in;
	in = 876324; ret = 0;

	while (in) // in이 0이 될 때 거짓말이 됨.
	{ // in % 10 in의 제일 마지막 자리 떼기.. % 나머지 연산자   ret * 10 기존 ret값 10배하기
		ret = in % 10 + ret * 10;
		printf("%d\n",ret); // ret이 형성되는 과정 확인
		in = in / 10; // in을 1자리 낮춰. 10으로 나눠서 맨마지막 그 다음 수에 대해 작업.(맨 마지막 수는 바로위에서 작업함)
	} printf("거꾸로 정수=%d\n\n", ret);

	for (; in; in = in / 10) // 1/10 = 0 임 정수/정수=정수임 / 1단위 없어짐 / in이 0이면 그짓말임.
		ret = in % 10 + ret * 10; // % 나머지 연산자 //  ret * 10 기존 들어있는 값 10배
	printf("거꾸로 정수=%d\n", ret);
}