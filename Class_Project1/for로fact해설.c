#include <stdio.h> 

int conditionCheck2(int i, int n)
{
	if (i <= n) printf("i <= n ... i=%d�� n=%d���� �۰ų�����. ������. \n", i, n);
	else printf("i <= n ... i=%d�� n=%d���� ũ�Ƿ� �������� \n", i, n);
	return 1; // �׻� 1 �����༭ ���ǹ� ���� �ǵ��� �������. �޼��� ��������. 
}

void main5_7() // 5_7
{
	int i, n = 5, fact = 1; /* �ʱ�ȭ ������ ����. ������ �� �������. */
	/* , �� ���� ������ 1���尰�� ó��*/
	for ( /* �ʱ�ȭ��*/ i = 1, printf("i �ʱ�ȭ�İ� i=%d\n", i);
		/*���ǹ�*/ conditionCheck2(i, n) && i <= n;
		/*����-����*/ ++i, printf("i�����İ� i=%d\n", i))
	{
		printf("for���� �������� fact = %d i=%d �������� %dX%d=%d->fact�����ε�.\n ", fact, i, fact, i, fact * i);
		fact = fact * i;
		printf("for���� ������ fact = %d\n\n", fact);
	}
	printf("%d! == %d\n", n, fact);
}