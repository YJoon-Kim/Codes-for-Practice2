#include <stdio.h>

/*
����Լ� recursive �Լ� n!���
����Լ� �ڱ��ڽ��� ���� + �������� ȣ���ϴ� �Լ�
recursive ����Լ� �ۼ����
1) ū ������ ���� ������ �ɰ��� ������ �ۼ���.
	0+1+2+3
2) �ʱ������� ����
	sum(0) = 0
3)�Լ��� ������.
	sum(n) = n + sum(n-1)
*/

int sum(int n)
{
	if (n == 0) return 0; // 0! 
	return n + sum(n - 1);
}

int main7_7() // 7_7
{
	printf("%d\n", sum(4));
}