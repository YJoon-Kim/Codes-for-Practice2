#include <stdio.h>
#include <math.h>

void main6_4() // 6_4
{
	double myexp = 1.0/* n=0 �϶� */, x = 30, tmp = 1.0; // e^0 = 1 // ���� ������ : inf
	int i;

	// factorial ���� ȣ���ؼ� ����ϸ� ���� �ݺ��� �Ǿ ��� �ð� �����ϰ� ������(���� �ݺ� ���� X)(���� ������ ��)
	// ���߿� factorial�� ���� ����� ������ ����.

	for (i = 1; i <= 1000; ++i)
	{
		tmp = x / (double)i * tmp; // �и� �κ��� factorial / ���� �κ��� x^n �����
		myexp = myexp + tmp; // �޼� ������ �ϳ� ���⼭
	}
	printf("�� ��� : %.30f\n�� ���� : %.30f\n��� ���� : %.30f", myexp, exp(x), fabs(myexp - exp(x)) );

	// fabs() = ���밪 ��� �Լ� |x|
	// �̷��� �ܸӸ� ������ �� ���蹮�� �� ���� ����.
}