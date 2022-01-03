#include <stdio.h>

/*
함수를 정의하는 이유
 - 모듈화에 의한 프로그램의 질 향상 가능
 - 유지 보수 및 확장의 용이성
 - 문제 해결의 용이성 : "Divide and Conquer!"
*/

// int 아닌 것이 main()뒤에 오면 심장마비. 딴 정의 안했으면 int로 묵시.

double myfabs(double); // 또는 이렇게 표시 해줘야함.

void main6_7() // 6_7
{
	printf("%.10f\n", myfabs(-1.234567));
}

double myfabs(double x)
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