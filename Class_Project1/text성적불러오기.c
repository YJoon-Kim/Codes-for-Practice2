#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ��Ʈ�� ���� �ּ� : C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\

void main10_1() // 10_1
{
	FILE* ip, * op; // <stdio.h> standard input ouput
	char name[3][10]; int kor[3], eng[3], math[3], sum[3], i;
	double avg[3];

	ip = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\ScoreIN.txt", "rb"); // r �б� w ���� b �̹����� ascii ����
	op = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\ScoreOUT.txt", "w");

	if (!ip || !op)
	{
		printf("�����б����"); return; // 0�� ����. void �̿�������
	}

	for (i=0; fscanf(ip, "%s %d %d %d", name[i], &kor[i], &eng[i], &math[i]) > 0; i++) // fscanf�� ascii ���Ͽ� // name[i]�� ��������. �Ƹ� 2���� �迭�̴ϱ�..?
	{
		sum[i] = kor[i] + eng[i] + math[i];
		avg[i] = sum[i] / 3.; // ����/����=����

		if (name[i][0] == '*') // �����
		{
			sum[i] = sum[i] - 30;
		}
		fprintf(op, "%s %d %d %d %d %.2f\n", name[i], kor[i], eng[i], math[i], sum[i], avg[i]);
	}
	fclose(ip); fclose(op); // ���α׷� ����� �ݾ��ֱ� ��.
}

/*
binary���ϰ� ascii ���Ͽ��� ���̰� ŭ. binary������ txt�� �ű��
�� ����.
*/