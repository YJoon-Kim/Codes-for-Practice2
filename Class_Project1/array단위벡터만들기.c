#include <stdio.h>
#include <math.h>

void normalize(double v[2], double nv[2])
{
	double size;
	size = sqrt(v[0] * v[0] + v[1] * v[1]);
	nv[0] = v[0] / size;
	nv[1] = v[1] / size;
}

void main7_10() // 7_10
{
	double v1[2] = { 3.,4. }, result[2];
	normalize(v1, result);
	printf("%.2f %.2f\n", result[0], result[1]);
}