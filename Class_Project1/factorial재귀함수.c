#include "stdio.h"

int nofact(int n)
{
	if (n <= 0) return 1;
	return (n * nofact(n - 1));
}

int conditionCheck_8_2(int n, int i)
{
	if (i <= n) printf("i <= n ... i=%d�� n=%d���� �۰ų� ����. ������. ����\n", i, n);
	else printf("i=%d�� n=%d i �� n ���̴ٸ� ������� \n", i, n);
	return 1; // �׻� 1 �����༭ ���ǹ� ���� �ǵ��� �������. �޼��� ��������. 
}

int funcCall(int n)

{
	printf(" %d * (%d-1)! ���Ŀ� ���� ����� ���ϰ��� %d\n", n, n, nofact(n));
	return 1; // �׻� 1 �����༭ ���ǹ� ���� �ǵ��� �������. �޼��� ��������. 
}

int funcCallAfter(int n)
{
	printf(" %d * (%d-1)! ����� ���ϵ� ��= %d * %d \n", n, n, n, nofact(n - 1));
	return 1; // �׻� 1 �����༭ ���ǹ� ���� �ǵ��� �������. �޼��� ��������. 
}

int myfact(int n)
{
	printf("n=%d ! ������ڰ� �� \n", n);
	if (conditionCheck(0, n) && n <= 0) return 1;
	return (funcCall(n) * n * myfact(n - 1) * funcCallAfter(n));
}

void main8_2() // 8_2
{
	int i, n = 3, fact = 1; /* �ʱ�ȭ ������ ����. ������ �� �������. */
	/* , �� ���� ������ 1���尰�� ó��*/
	printf("3! == %d\n", myfact(3));
}