#include <stdio.h>

// stdio.h std standard 표준 io input output 입출력

int main1_3()
{
	int i; // 정수
	char c; // 글자 1글자
	float f; // 실수 간단
	double d; // 2배 정교 실수
	scanf("%d %c %f %lf", &i, &c, &f, &d);
	// 주소 알려줘야 택배 배달됨 & 주소 알아내는 연산자
	printf("%d %c %f %f\n", i, c, f, d);
}