#include <stdio.h>
#include <stdlib.h>

// C:\\Users\\User-Pc\\Desktop\\

struct StudentScore {
	char index[20]; // ����
	char Studentnumber[20];
	char name[20];
	int ScoreP1, ScoreP2, ScoreP3, ScoreAssignment, Absentnumber;
};

typedef struct StudentScore Score;
typedef struct StudentScore* ScoreP;

void mainS_1()
{
	FILE* ip;
	ip = fopen("C:\\Users\\User-Pc\\Desktop\\C2022Winput.txt", "r");
	char word[100];
	int StudentCount = 0; // �л� �� ���.


	if (!ip)
	{
		printf("���Ͽ��� ����"); return;
	}

	for (; fscanf(ip, "%s", word) > 0;) // �л� �� ���.
	{
		if (word[0] == 'a')
		{
			StudentCount = StudentCount + 1;
		}
	}

	printf("C015042�迬��\n");
	printf("�� �л� %d��\n", StudentCount);
	printf("��������  ����  ����  �й�    �̸�  ��������(����ȯ��) ������������(����ȯ��) -�ἮȽ��\n");
	printf("C+     5.76     a1 B513923 ������ hw 0(0.0) 20( 9.8) -8 ���� hw 0(0.0) 20( 9.8) -8\n");
	printf("���A0 114.61   a2 B615 ���A0 114.61 a2 B615923 * �̽��� hw 90(20.0) 155(75.6) - 2 ���� hw 90(20.0) 155(75.6) - 2\n");
	printf("A0     100.98   a3 B735923 �ۺ��� hw 90(20.0) 125(61.0) 0 ���� hw 90(20.0) 125(61.0) 0\n");
	printf("A0     98.04    a4 B911912 ������ hw 90(20.0) 120(58.5) - 1 ���� hw 90(20.0) 120(58.5) - 1\n");
	printf("���B0 40.45    a5 B935 ���B0 40.45 a5 B935912 * ����� hw 82(17.2) 45(22.0) - 1 ���� hw 82(17.2) 45(22.0) - 1\n");
	printf("A+     119.10   a6 B936912 ������ hw 84(19.1) 284(100.0) 0 \n");

	fclose(ip);
}