#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
(1) �� ���� ���� �Ӽ� �ٲٱ�
(2) ���� ���� �ؿ� JJJ���� �����, �ȿ� input.txt ���� ����
(3) �ּ� ������ ����.
(4) �Ʒ� main()�ڵ�. ���ǻ���. ��ο� ��ǥ�� ������ �� �߰��� ����.
*/

// ���� ��� : C:\Users\User-Pc\source\repos\Codes-for-Practice2\JJJ

void main9_5() // 9_5
{
	FILE* ip, *op; // ��� ���Ͽ� ���� ��������. FILE �ý��ۿ��� ���Ͽ� type. ������ �ܿ���. stdio.h�ȿ� ���ǵ�
	ip = fopen("C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\input.txt","r"); // "r" : �б� / "w" : ���� // �� ���ڰ� �ƴ� ���� �ֱ� ������ "r" ���ڿ���
	op = fopen("C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\output.txt", "w"); // "r" : �б� / "w" : ����
	double tmp, max = -1000000.0; // max�� ���� ã�� �ִ� ��. �ʱⰪ���� �� �ּҰ� ����.

	if (ip == 0 || !op)
	{ // ip ==0 --> !ip
		fprintf(stderr,"�����Է¿���. ��� Ȯ���غ���"); // ���� ���ϸ� ���α׷� ������ ������ �� ������.(�ܼ� ���� �ƴ� ��Ȳ)
		printf("�����Է¿���. ��� Ȯ���غ���"); return;
	}

	for (;;)
	{
		if (fscanf(ip, "%lf", &tmp) <= 0) break; // --> -1 : ����,0 : 1�� ������ --> for ����
		if (max < tmp) max = tmp;
	}

	printf("max=%f\n", max);
	fprintf(op, "2022 1/6 max=%f\n", max);
}