#include <stdio.h>

/*
����Լ� recursive �Լ� n!���
����Լ� �ڱ��ڽ��� ���� + �������� ȣ���ϴ� �Լ�
recursive ����Լ� �ۼ����
1) ū ������ ���� ������ �ɰ��� ������ �ۼ���.
	n!= n * (n - 1)!
2) �ʱ������� ����
	0!= 1
3)�Լ��� ������.
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