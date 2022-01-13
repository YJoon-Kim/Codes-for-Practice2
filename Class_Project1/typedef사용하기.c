#include <stdio.h>

// 구조체 버전 두 가지
// (1) 통째로 복사
// (2) 포인터로 주소 복사 - 집 주소 알려줘서 집 막바로 수리

struct complex {
	double real, img; // 복소수 실수부 허수부 초기화
};

typedef int INT; // INT란 새로운 타입을 내가 정의한 거임. int와 호환됨.
typedef struct complex Complex; // Complex란 새로운 타입을 내가 정의한 것임.
typedef struct complex* ComplexP; // ComplexP란 새로운 타입을 내가 정의한 것임 - 구조체에 대한 포인터 타입.
typedef Complex* ComplexP2; // ComplexP2란 새로운 타입을 내가 정의한 것임. - 구조체에 대한 포인터 타입.

struct complex CAddCopy(Complex a, Complex b) // == Complex CADD() // a b 는 main에서 구조체 /"""통째로"""/ 복사함. // 함수 형태...!!!!
{
	Complex result; // struct complex result와 동일하게 작동.
	result.real = a.real + b.real;
	result.img = a.img + b.img;
	return result; // z = f(x,y) / z->result / f()->CAdd / x->struct complex a / y->struct complex b
}

struct complex CAddPointer(Complex a, Complex b, ComplexP result) // 주소를 가르쳐 // ComplexP == struct complex* result와 마찬가지.
{
	result->real = a.real + b.real;
	(*result).img = a.img + b.img;
	return; // w =f(x,y,z) / w =void(안씀,무효) / f()->CAdd / x->struct complex a / y->struct complex b / z->main에서주소
}

void main14_1() // 14_1
{
	Complex a = { 1.,1. }, b = { 2.,2. }, result; // result에는 아직 쓰레기 있음.
	// result = CAddCopy(a, b); // 통째로 복사 버전.
	CAddPointer(a, b, &result); // 포인터로 주소 복사 버전.
	printf("결과 %.2f %.2f\n", result.real, result.img);
}

// 이거 1번 문제로 무조건 나온다. 두 가지의 구조체 버전. 꼭 철저히 공부하도록...