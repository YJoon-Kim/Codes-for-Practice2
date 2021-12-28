#include <stdio.h>
#include <math.h> // 이 안에 double sqrt(double);
// 위에 둘다 리눅스에서 안쓰면 큰일남. VS에서는 되긴 하는데 빌게이츠 지가 알아서 넣은 거임.

// double sqrt(double);
//sqrt() : square root
// ccc.c - lm     ---> linux -lm sin cos 등 수학 사용할 때

double main2_3() // 쓰래기통행...
{
	double a, b, c, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);

	x1 = (-b + sqrt(b * b - 4. * a * c)) / (2. * a);
	x2 = (-b - sqrt(b * b - 4. * a * c)) / (2. * a);

	printf("%f x^2 + %f x + %f = 0 의 근은 x1=%f x2=%f이다.\n", a, b, c, x1, x2);
}