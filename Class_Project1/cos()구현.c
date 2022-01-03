#include <stdio.h>
#include <math.h>

// ## cos() 구현

void main6_5() // 6_5
{
	double mycos = 1, x = 10, tmp = 1.0;
	int i, sign = -1;

	for (i = 1; i <= 100; ++i) // i는 100까지이지만 실제로 항의 개수는 (100/2)개
	{
		tmp = (x / (double)i) * tmp;
		if (!(i % 2)) // i % 2 == 0보다 이게 속도 훨신 빠름!!! // 이 수업은 속도가 매우 중요해보임!!!
		{
			mycos = mycos + sign*tmp;
			sign = -sign;
		}
	}
	printf("내 결과 : %.30f\n컴 정답 : %.30f\n결과 차이 : %.30f", mycos, cos(x), fabs(mycos - cos(x)) );
}