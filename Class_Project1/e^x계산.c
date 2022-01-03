#include <stdio.h>
#include <math.h>

void main6_4() // 6_4
{
	double myexp = 1.0/* n=0 일때 */, x = 30, tmp = 1.0; // e^0 = 1 // 수렴 반지름 : inf
	int i;

	// factorial 따로 호출해서 계산하면 이중 반복이 되어서 계산 시간 무지하게 느려짐(이중 반복 절대 X)(감점 오지게 함)
	// 도중에 factorial을 같이 계산해 나가는 버전.

	for (i = 1; i <= 1000; ++i)
	{
		tmp = x / (double)i * tmp; // 분모 부분은 factorial / 분자 부분은 x^n 계산중
		myexp = myexp + tmp; // 급수 역할을 하네 여기서
	}
	printf("내 결과 : %.30f\n컴 정답 : %.30f\n결과 차이 : %.30f", myexp, exp(x), fabs(myexp - exp(x)) );

	// fabs() = 절대값 계산 함수 |x|
	// 이렇게 잔머리 돌리는 거 시험문제 개 많이 나옴.
}