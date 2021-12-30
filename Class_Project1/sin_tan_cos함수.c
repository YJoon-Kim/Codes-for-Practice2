#include <stdio.h>
#include <math.h> // 안넣으면 망함 // 뭐 어떻게 하라고..
#define M_PI 3.141592 // M_PI란 것 코드중에 있으면 무조건 3.141592로 대체

// 45 도 값 계산해보기 radian임
// linux 에서는 cc c.c - lm / - lm 없으면 안됨. 수학m 도서관 link 연결...!
// PI 대신 M_PI 사용

float main4_4()
{
	float degree = 45.0, radian = degree * M_PI / 180.0;
	printf("cos=%.4f, sin=%.4f, tan=%.4f\n", cos(radian), sin(radian), tan(radian));
}