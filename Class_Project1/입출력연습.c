#include <stdio.h>

// stdio.h std standard ǥ�� io input output �����

int main1_3()
{
	int i; // ����
	char c; // ���� 1����
	float f; // �Ǽ� ����
	double d; // 2�� ���� �Ǽ�
	scanf("%d %c %f %lf", &i, &c, &f, &d);
	// �ּ� �˷���� �ù� ��޵� & �ּ� �˾Ƴ��� ������
	printf("%d %c %f %f\n", i, c, f, d);
}