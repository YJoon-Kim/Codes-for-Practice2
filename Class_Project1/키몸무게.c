#include <stdio.h>

double main4_6() // 4_6
{
	// ���� ��� ���� �򰥸��� ������ () ���!

	char sex; int height, weight;
	scanf("%c %d %d", &sex, &height, &weight);
	// ���� Ű ������

	// �⺻��
	if (sex == 'f' || (height >= 165 && weight <= 60))
	{
		printf("slim�����Ͻ�\n");
	}
	else
		printf("fat���Ͻ�\n");

	// �켱���� Ȯ��1
	if (sex == 'f' || (height >= 165) && (weight <= 60))
	{
		printf("slim�����Ͻ�\n");
	}
	else
		printf("fat���Ͻ�\n");

	// �켱���� Ȯ��2
	// !(a || b && c) --> !a && !b || !c
	if (!(sex == 'f' || (height >= 165) && (weight <= 60)))
	{
		printf("fat���Ͻ�\n");
	}
	else
		printf("slim�����Ͻ�\n");

	// �켱���� Ȯ��3
	if (!(sex == 'f') && !(height >= 165) || !(weight <= 60))
	{
	printf("fat���Ͻ�\n");
	}
	else
		printf("slim�����Ͻ�\n");
}