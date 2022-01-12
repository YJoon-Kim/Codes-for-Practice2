#include <stdio.h>

int mceiling(double x)
{
	if ((int)x == x) return (int)x;
	else return (int)x - 1;
}

void mainG1_12()
{
	double n;
	printf("음의 실수를 입력하시오: ");
	scanf("%lf", &n);
	printf("이 숫자의 ceiling은 %d이다.\n", mceiling(n));
}

// (int)n 이 뽀인뜨가 아닐까..? 싶다.