#include <stdio.h>

int main1_4()
{
	double d = 0.1; // 실수 곱배기(두배 정교하다는 뜻) 그만큼 느림
	float f = 0.1;
	printf("실수float %.20f / 실수double %.20f\n", f, d);
}