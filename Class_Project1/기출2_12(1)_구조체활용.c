struct complex {
	double real, imag;
};

typedef struct complex Complex; // Complex 윗 공간에 란 새로운 구조체 type을 정의하세요.
typedef Complex* Complexp; // 이곳에 Complex의 pointer type 정의

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
int mainG2_12()// a b real imag 1.0 다음의 복소수 구조체 와 의 멤버 과 는 각각 값으로 초기화 시킴
{
	Complex a={1.,1.}, b={1.,1.}, cmulted, pmulted;//a b real imag 1.0 는 각각 으로 초기화
	cmulted = cmultG2_12(a, b);
	printf("%lf %lf\n", cmulted.real, cmulted.imag);
	mult2G2_12(a, b, &pmulted);
	printf("%lf %lf\n", pmulted.real, pmulted.imag);
	return 0;
}