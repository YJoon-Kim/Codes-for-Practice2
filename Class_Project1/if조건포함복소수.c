#include "stdio.h"

// #include // cc c.c -lm // linux //  4_3

void main4_3()
{
	double Areal, Aimg, Breal, Bimg, Plusreal, Plusimg, Minusreal, Minusimg;
	char op;

	printf("���� (������) (�����) (+ or -) (������) (�����) ������ �Է��Ͻÿ�.\n");
	scanf("%lf %lf %c %lf %lf", &Areal, &Aimg, &op, &Breal, &Bimg);
	// �Է� 1. 1. + 2. 2. --> ��� 3. + 3.i

	if (op == '+')
	{
		Plusreal = Areal + Breal;
		Plusimg = Aimg + Bimg;
		printf("(%10.3f + %10.3fi ) + (%10.3f + %10.3fi ) = (%10.3f + %10.3fi )\n",
			Areal,
			Aimg, Breal, 
			Bimg, Plusreal, Plusimg);
	}

	if (op == '-')
	{
		Minusreal = Areal - Breal;
		Minusimg = Aimg - Bimg;
		printf("(%.3f + %.3fi ) - (%.3f + %.3fi ) = (%.3f + %.3fi )\n",
			Areal, Aimg, Breal, Bimg, Minusreal, Minusimg);
	}

	return; // void�� return 1111; �̷��� �ȵ�. ������ ������ �ȳ���.
}