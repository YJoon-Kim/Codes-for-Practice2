#include <stdio.h>

int main4_2() // 4_2
{
	int i1, i2;

	i1 = 3 > 5; // ������ --> 0
	i2 = 5 > 3; // ����.. --> �Ŀ����� 1��
	printf("i1 = %d, i2 = %d\n", i1, i2);

	if (i1) printf("3 > 5; ������\n");
	else printf("3 > 5; ��������\n");

	if(i2) printf("5 > 3; ������\n\n");
	else printf("5 > 3; ��������\n\n");


	// ������ ����
	int neg1 = 2, neg0 = 0;

	if (0 && 1)
		printf("0 && 1 is ����� ������\n"); // &&�� and
	else
		printf("0 && 1 is ����� ������\n");

	if (0 || 1)
		printf("0 && 1 is ����� ������\n"); // ||�� or
	else
		printf("0 && 1 is ����� ������\n");

	printf("!neg1=%d !neg0=%d\n", !neg1, !neg0); // !�� �Ųٷ�

	return 3; // ���� ���ϸ� �����Ⱑ ���ϵ�.
}