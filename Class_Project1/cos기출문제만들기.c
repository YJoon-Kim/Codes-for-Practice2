#include <stdio.h>

double value_of_cos(double x)
{
	double mycos = 1, tmp = 1.0;
	int i, sign = -1;

	for (i = 1; i <= 100; ++i) // i�� 100���������� ������ ���� ������ (100/2)��
	{
		tmp = (x / (double)i) * tmp;
		if (!(i % 2)) // i % 2 == 0���� �̰� �ӵ� �ν� ����!!! // �� ������ �ӵ��� �ſ� �߿��غ���!!!
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