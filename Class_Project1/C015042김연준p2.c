#include <stdio.h>

double sincos(double x, int n)
{
	double mysincos = 1., tmp = 1.0;
	int i; // �õ� Ƚ�� ����.
	for (i = 1; i <= n; ++i)
	{
		tmp = (x / (double)i) * tmp; // ��� ����.
		if ((i % 4) == 1 || (i % 4) == 2) // - - + + �����̹Ƿ� 4�׾� ������ 4�� ������ �� �������� 1,2�� ���� -1�� ����.
		{
			mysincos = mysincos + -1 * tmp;
		}
		else // - - + + �����̹Ƿ� 4�׾� ������ 4�� ������ �� �������� 3,4�� ���� �״�� ����.
			mysincos = mysincos + tmp;
	}
	return mysincos;
}

void mainS_2()
{
	printf("C015042 �迬��\n");
	printf("%.20f\n", sincos(0.1, 20)); // ȣ���� ���ʰ� �����ؾ���
}