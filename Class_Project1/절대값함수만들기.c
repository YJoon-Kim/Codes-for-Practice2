#include <stdio.h>

/*
�Լ��� �����ϴ� ����
 - ���ȭ�� ���� ���α׷��� �� ��� ����
 - ���� ���� �� Ȯ���� ���̼�
 - ���� �ذ��� ���̼� : "Divide and Conquer!"
*/

// int �ƴ� ���� main()�ڿ� ���� ���帶��. �� ���� �������� int�� ����.

double myfabs(double); // �Ǵ� �̷��� ǥ�� �������.

void main6_7() // 6_7
{
	printf("%.10f\n", myfabs(-1.234567));
}

double myfabs(double x)
{
	double result;

	if (x < 0)
	{
		result = -x;
	}

	else
	{
		result = +x;
	}

	return result; // ���� �̰� ������ ������ �����µ� �̰� �� �ǳ�? ���� / VS�� ���͸��� �۵���.
}