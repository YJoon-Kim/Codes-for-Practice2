#include "stdio.h"

int nofact(int n)
{
	if (n <= 0) return 1;
	return (n * nofact(n - 1));
}

int conditionCheck_8_2(int n, int i)
{
	if (i <= n) printf("i <= n ... i=%d는 n=%d보다 작거나 같음. 참말임. 리턴\n", i, n);
	else printf("i=%d는 n=%d i 와 n 값이다름 계속진행 \n", i, n);
	return 1; // 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임. 
}

int funcCall(int n)

{
	printf(" %d * (%d-1)! 추후에 계산될 계산결과 리턴값은 %d\n", n, n, nofact(n));
	return 1; // 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임. 
}

int funcCallAfter(int n)
{
	printf(" %d * (%d-1)! 계산결과 리턴된 값= %d * %d \n", n, n, n, nofact(n - 1));
	return 1; // 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임. 
}

int myfact(int n)
{
	printf("n=%d ! 계산하자고 함 \n", n);
	if (conditionCheck_8_2(0, n) && n <= 0) return 1;
	return (funcCall(n) * n * myfact(n - 1) * funcCallAfter(n));
}

void main8_2() // 8_2
{
	int i, n = 3, fact = 1; /* 초기화 않으면 망함. 쓰레기 값 들어있음. */
	/* , 로 여러 문장을 1문장같이 처리*/
	printf("3! == %d\n", myfact(3));
}