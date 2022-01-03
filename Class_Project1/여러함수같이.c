#include <stdio.h>
#include <math.h>

double myfabs(double);
double myexp(double x, int n);

// main �����ٰ� �Լ� ���� �߿�! int �ƴϸ� ������ �ؾ���!

void main6_8() // 6_8
{
	printf("%.10f / myexp = %f\n", myfabs(-1.234567), myexp(0.1, 20));
}

double myfabs_2(double x)
{
	double result;

	if (x < 0)
	{
		result = -x;
	}

	else
	{
		result = +x;
	}

	return result; // ���� �̰� ������ ������ �����µ� �̰� �� �ǳ�? ���� / VS�� ���͸��� �۵���.
}

double myexp(double x, int n) // 6_4
{
	double myexpresult = 1.0/* n=0 �϶� */, tmp = 1.0; // e^0 = 1 // ���� ������ : inf
	int i;

	// factorial ���� ȣ���ؼ� ����ϸ� ���� �ݺ��� �Ǿ ��� �ð� �����ϰ� ������(���� �ݺ� ���� X)(���� ������ ��)
	// ���߿� factorial�� ���� ����� ������ ����.

	for (i = 1; i <= n; ++i)
	{
		tmp = x / (double)i * tmp; // �и� �κ��� factorial / ���� �κ��� x^n �����
		myexpresult = myexpresult + tmp; // �޼� ������ �ϳ� ���⼭
	}
	printf("�� ��� : %.30f\n�� ���� : %.30f\n��� ���� : %.30f\n", myexpresult, exp(x), fabs(myexpresult - exp(x)));

	return myexpresult; // return ���ϸ� ������ ����.
}