#include <stdio.h>

/*
재귀함수 recursive 함수 n!계산
재귀함수 자기자신을 직접 + 간접으로 호출하는 함수
recursive 재귀함수 작성방법
1) 큰 문제를 작은 문제로 쪼개는 수식을 작성함.
	n!= n * (n - 1)!
2) 초기조건을 따짐
	0!= 1
3)함수로 구현함.
*/

int fact(int n)
{
	if (n == 0) return 1; // 0! 
	return n * fact(n - 1);
}

int main7_6() 
{ 
	printf("%d\n", fact(3)); 
}