#include <stdio.h>

void main3_1() // 3_1 // ����
{
	int i; char c; float f; double d;
	scanf("%d %c %f %lf", &i, &c, &f, &d); // ��� �ش��ϴ��� �� Ȯ��
	printf("out %d %c %f %f\n", i, c, f, d);
	f = 0.1; // ���� f�� 0.1 ����
	printf("out 0.1 != %30.20f\n", f); // �� 30ĭ �Ҽ��� 20ĭ.. �� �������� 0.1 ���� �Ұ�
}