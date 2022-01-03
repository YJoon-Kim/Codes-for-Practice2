#include <stdio.h>

void main6_2() // 6_2
{
	int i = 3, sum = 0;

	for (i = 3 /*A*/ ; i > 0 /*B*/ ; --i /*D*/) // i>0 대신에 그냥 i 써도 매우 ㄱㅊ --> i가 0이면 어짜피 거짓말
	{
		sum = sum + i; /*C*/
	}
	printf("SUM = %d\n", sum); /*E*/
}

// 실행 순서 !! 매우 중요! 무조건 시험!

/*
A i=3;

B i>0
C sum = sum + i (sum = 3)
D --i (i=2)

B i>0
C sum = sum + i (sum = 5)
D --i (i=1)

B i>0
C sum = sum + i (sum = 6)
D --i (i=0)

B i>0  -->  그짓말(False) --> for문 깨짐
E SUM = 6
*/