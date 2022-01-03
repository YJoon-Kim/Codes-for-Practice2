#include <stdio.h>
#include <math.h>

// ## cos() ����

void main6_5() // 6_5
{
	double mycos = 1, x = 10, tmp = 1.0;
	int i, sign = -1;

	for (i = 1; i <= 100; ++i) // i�� 100���������� ������ ���� ������ (100/2)��
	{
		tmp = (x / (double)i) * tmp;
		if (!(i % 2)) // i % 2 == 0���� �̰� �ӵ� �ν� ����!!! // �� ������ �ӵ��� �ſ� �߿��غ���!!!
		{
			mycos = mycos + sign*tmp;
			sign = -sign;
		}
	}
	printf("�� ��� : %.30f\n�� ���� : %.30f\n��� ���� : %.30f", mycos, cos(x), fabs(mycos - cos(x)) );
}