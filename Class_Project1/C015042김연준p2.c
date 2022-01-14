#include <stdio.h>

double sincos(double x, int n)
{
	double mysincos = 1., tmp = 1.0;
	int i; // 시도 횟수 위함.
	for (i = 1; i <= n; ++i)
	{
		tmp = (x / (double)i) * tmp; // 계속 곱함.
		if ((i % 4) == 1 || (i % 4) == 2) // - - + + 형태이므로 4항씩 나눠서 4로 나눴을 때 나머지가 1,2인 항은 -1을 곱함.
		{
			mysincos = mysincos + -1 * tmp;
		}
		else // - - + + 형태이므로 4항씩 나눠서 4로 나눴을 때 나머지가 3,4인 항은 그대로 더함.
			mysincos = mysincos + tmp;
	}
	return mysincos;
}

void mainS_2()
{
	printf("C015042 김연준\n");
	printf("%.20f\n", sincos(0.1, 20)); // 호출이 왼쪽과 동일해야함
}