#include <stdio.h>
#include <math.h> // �� �ȿ� double sqrt(double);
// ���� �Ѵ� ���������� �Ⱦ��� ū�ϳ�. VS������ �Ǳ� �ϴµ� �������� ���� �˾Ƽ� ���� ����.

// double sqrt(double);
//sqrt() : square root
// ccc.c - lm     ---> linux -lm sin cos �� ���� ����� ��

double main2_3() // ����������...
{
	double a, b, c, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);

	x1 = (-b + sqrt(b * b - 4. * a * c)) / (2. * a);
	x2 = (-b - sqrt(b * b - 4. * a * c)) / (2. * a);

	printf("%f x^2 + %f x + %f = 0 �� ���� x1=%f x2=%f�̴�.\n", a, b, c, x1, x2);
}