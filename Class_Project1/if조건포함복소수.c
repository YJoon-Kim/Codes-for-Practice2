#include "stdio.h"

// #include // cc c.c -lm // linux // 3_6

void main3_6()
{
	double Areal, Aimg, Breal, Bimg, Plusreal, Plusimg, Minusreal, Minusimg;
	char op;

	printf("���� (������) (�����) (+ or -) (������) (�����) ������ �Է��Ͻÿ�.\n");
	scanf("%lf %lf %c %lf %lf", &Areal, &Aimg, &op, &Breal, &Bimg);

	if (op == '+')
	{
		Plusreal = Areal + Breal;
		Plusimg = Aimg + Bimg;
		printf("(%10.3f + %10.3fi ) + (%10.3f + %10.3fi ) = (%10.3f + %10.3fi )\n",
			Areal, Aimg, Breal, Bimg, Plusreal, Plusimg);
	}

	if (op == '-')
	{
		Minusreal = Areal - Breal;
		Minusimg = Aimg - Bimg;
		printf("(%.3f + %.3fi ) - (%.3f + %.3fi ) = (%.3f + %.3fi )\n",
			Areal, Aimg, Breal, Bimg, Minusreal, Minusimg);
	}
}