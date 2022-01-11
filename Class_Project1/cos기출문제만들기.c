#include <stdio.h>

double value_of_cos(double x)
{
	double mycos = 1, tmp = 1.0;
	int i, sign = -1;

	for (i = 1; i <= 100; ++i) // i는 100까지이지만 실제로 항의 개수는 (100/2)개
	{
		tmp = (x / (double)i) * tmp;
		if (!(i % 2)) // i % 2 == 0보다 이게 속도 훨신 빠름!!! // 이 수업은 속도가 매우 중요해보임!!!
		{
			mycos = mycos + sign * tmp;
			sign = -sign;
		}
	}
}

void main18_1_3() // 18_1_3
{
	printf("%lf",value_of_cos(0.1));
}