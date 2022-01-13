#include <stdio.h>

// ����ü ���� �� ����
// (1) ��°�� ����
// (2) �����ͷ� �ּ� ���� - �� �ּ� �˷��༭ �� ���ٷ� ����

struct complex {
	double real, img; // ���Ҽ� �Ǽ��� ����� �ʱ�ȭ
};

typedef int INT; // INT�� ���ο� Ÿ���� ���� ������ ����. int�� ȣȯ��.
typedef struct complex Complex; // Complex�� ���ο� Ÿ���� ���� ������ ����.
typedef struct complex* ComplexP; // ComplexP�� ���ο� Ÿ���� ���� ������ ���� - ����ü�� ���� ������ Ÿ��.
typedef Complex* ComplexP2; // ComplexP2�� ���ο� Ÿ���� ���� ������ ����. - ����ü�� ���� ������ Ÿ��.

struct complex CAddCopy(Complex a, Complex b) // == Complex CADD() // a b �� main���� ����ü /"""��°��"""/ ������. // �Լ� ����...!!!!
{
	Complex result; // struct complex result�� �����ϰ� �۵�.
	result.real = a.real + b.real;
	result.img = a.img + b.img;
	return result; // z = f(x,y) / z->result / f()->CAdd / x->struct complex a / y->struct complex b
}

struct complex CAddPointer(Complex a, Complex b, ComplexP result) // �ּҸ� ������ // ComplexP == struct complex* result�� ��������.
{
	result->real = a.real + b.real;
	(*result).img = a.img + b.img;
	return; // w =f(x,y,z) / w =void(�Ⱦ�,��ȿ) / f()->CAdd / x->struct complex a / y->struct complex b / z->main�����ּ�
}

void main14_1() // 14_1
{
	Complex a = { 1.,1. }, b = { 2.,2. }, result; // result���� ���� ������ ����.
	// result = CAddCopy(a, b); // ��°�� ���� ����.
	CAddPointer(a, b, &result); // �����ͷ� �ּ� ���� ����.
	printf("��� %.2f %.2f\n", result.real, result.img);
}

// �̰� 1�� ������ ������ ���´�. �� ������ ����ü ����. �� ö���� �����ϵ���...