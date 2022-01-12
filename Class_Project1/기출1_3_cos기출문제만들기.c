#include <stdio.h>

double value_of_cos(double x)
{
	double mycos = 1., tmp = 1.0;
	int i, sign = -1;

	for (i = 1; i <= 10; ++i)
	{
		tmp = (x / (double)i) * tmp;
		if (!(i % 2))
		{
			mycos = mycos + sign * tmp;
			sign = -sign;
			printf("%lf\n\n", mycos);
		}
	}
	return mycos; // ¸®ÅÏ ¾ÈÇÏ¸é ¸ÁÇÏ¼Å
}

void mainG1_3() // 18_1_3
{
	printf("%lf\n",value_of_cos(0.1));
}

// ¸ÂÀ½