#include <stdio.h>

int main4_5()
{
	int age; char sex;
	scanf("%d %c", &age, &sex);
	// ���� ����
	
	// �⺻��
	if (sex == 'm' || age > 19)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}

	// !���
	if (!(sex == 'm' || age > 19))
	{
		printf("������\n");
	}
	else
	{
		printf("����\n");
	}

	// !���� ��
	if (!(sex == 'm') && !(age > 19))
	{
		printf("������\n");
	}
	else
	{
		printf("����\n");
	}

	// !���� ��2
	if ((sex == 'f') && (age <= 19))
	{
		printf("������\n");
	}
	else
	{
		printf("����\n");
	}

	// !(a||b) == !a && !b
	// !(a&&b) == !a || !b
}