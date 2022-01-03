#include <stdio.h>
#include <math.h>

double myfabs(double);
double myexp(double x, int n);

// main 위에다가 함수 선언 중요! int 아니면 무조건 해야함!

void main6_8() // 6_8
{
	printf("%.10f / myexp = %f\n", myfabs(-1.234567), myexp(0.1, 20));
}

double myfabs_2(double x)
{
	double result;

	if (x < 0)
	{
		result = -x;
	}

	else
	{
		result = +x;
	}

	return result; // 원래 이거 없으면 쓰래기 나오는데 이건 왜 되냐? ㅋㅋ / VS가 엉터리로 작동됨.
}

double myexp(double x, int n) // 6_4
{
	double myexpresult = 1.0/* n=0 일때 */, tmp = 1.0; // e^0 = 1 // 수렴 반지름 : inf
	int i;

	// factorial 따로 호출해서 계산하면 이중 반복이 되어서 계산 시간 무지하게 느려짐(이중 반복 절대 X)(감점 오지게 함)
	// 도중에 factorial을 같이 계산해 나가는 버전.

	for (i = 1; i <= n; ++i)
	{
		tmp = x / (double)i * tmp; // 분모 부분은 factorial / 분자 부분은 x^n 계산중
		myexpresult = myexpresult + tmp; // 급수 역할을 하네 여기서
	}
	printf("내 결과 : %.30f\n컴 정답 : %.30f\n결과 차이 : %.30f\n", myexpresult, exp(x), fabs(myexpresult - exp(x)));

	return myexpresult; // return 안하면 쓰레기 나옴.
}