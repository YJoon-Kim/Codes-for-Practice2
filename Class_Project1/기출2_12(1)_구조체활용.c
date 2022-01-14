struct complex {
	double real, imag;
};

typedef struct complex Complex; // Complex �� ������ �� ���ο� ����ü type�� �����ϼ���.
typedef Complex* Complexp; // �̰��� Complex�� pointer type ����

Complex cmultG2_12(Complex a, Complex b)
{
	Complex result;
	result.real = a.real * b.real - a.imag * b.imag;
	result.imag = a.real * b.imag + a.imag * b.real;
	return result;
}
void mult2G2_12(Complex a, Complex b, Complexp result)
{
	result->real = a.real * b.real - a.imag * b.imag;
	(*result).imag = a.real * b.imag + a.imag * b.real;
}
int mainG2_12()// a b real imag 1.0 ������ ���Ҽ� ����ü �� �� ��� �� �� ���� ������ �ʱ�ȭ ��Ŵ
{
	Complex a={1.,1.}, b={1.,1.}, cmulted, pmulted;//a b real imag 1.0 �� ���� ���� �ʱ�ȭ
	cmulted = cmultG2_12(a, b);
	printf("%lf %lf\n", cmulted.real, cmulted.imag);
	mult2G2_12(a, b, &pmulted);
	printf("%lf %lf\n", pmulted.real, pmulted.imag);
	return 0;
}