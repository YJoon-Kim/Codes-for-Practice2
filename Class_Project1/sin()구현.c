#include <stdio.h>
#include <math.h>

// ##sin() ����

void main6_6() // 6_6
{
	double mysin = 0, x = 10, tmp = 1.0;
	int i, sign = 1;

	for (i = 1; i <= 100; ++i) // i�� 100���������� ������ ���� ������ (100/2)��
	{
		tmp = (x / (double)i) * tmp;
		if ((i % 2)) // i % 2 == 0���� �̰� �ӵ� �ν� ����!!! // �� ������ �ӵ��� �ſ� �߿��غ���!!!
		{
			mysin = mysin + sign * tmp;
			sign = -sign;
		}
	}
	printf("�� ��� : %.30f\n�� ���� : %.30f\n��� ���� : %.30f", mysin, sin(x), fabs(mysin - sin(x)));
}