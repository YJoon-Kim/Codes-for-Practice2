#include <stdio.h>

void main6_2() // 6_2
{
	int i = 3, sum = 0;

	for (i = 3 /*A*/ ; i > 0 /*B*/ ; --i /*D*/) // i>0 ��ſ� �׳� i �ᵵ �ſ� ���� --> i�� 0�̸� ��¥�� ������
	{
		sum = sum + i; /*C*/
	}
	printf("SUM = %d\n", sum); /*E*/
}

// ���� ���� !! �ſ� �߿�! ������ ����!

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

B i>0  -->  ������(False) --> for�� ����
E SUM = 6
*/