#include <stdio.h>

int mceiling(double x)
{
	if ((int)x == x) return (int)x;
	else return (int)x - 1;
}

void mainG1_12()
{
	double n;
	printf("���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &n);
	printf("�� ������ ceiling�� %d�̴�.\n", mceiling(n));
}

// (int)n �� ���ζ߰� �ƴұ�..? �ʹ�.