#include <stdio.h>
#include <stdlib.h>

// C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\
// Class_Project1

// 1. ���� �޸� �Ҵ��ؼ� �� �޸𸮷� fscanf �ؾ���.
// 2. <���prompt>�� exe �����Ͽ� ���� ��ĵ�ؾ���.
// 3. ���α׷����� ��� �ο� ���� �˰��� ����
// 4. �ְ����� 100������ ���
// 5. ��¿��� ���� ���� �� ���;���. 
// <����> 90�� --> �⸻ ���� 20��
// <���� ����> 65+ --> A+ / 60+ --> A0 / 55+ --> B+ / 50+ --> B0 / 45+ --> C+ / 40+ --> C0 / 35+ --> D+ / 30+ --> D0 / ������ F

struct StudentScore {
	char index[20]; // ���� // �̰� ��¥ 2���� �迭 �ʿ��� ����...
	char Studentnumber[20];
	char name[20];
	char ScoreP1[20], ScoreP2[20], ScoreP3[20], ScoreAssignment[20], Absentnumber[20]; // ���⵵ �� int�� �ٲ�� �� ����...
};

typedef struct StudentScore Score;
typedef struct StudentScore* ScoreP;

int How_many_Stu(char words[])
{
	int StudentCount = 0;
	if (words[0] == 'a')
	{
		StudentCount = StudentCount + 1; // �� �𸣰ڴ�~~~ ������ ����.
	}
	return StudentCount;
}

void mystrlink(char Baselink[], char Filename[])
{
	int i, j;
	for (i = 0; Baselink[i]; i++); 
	for (j = 0; Baselink[i] = Filename[j]; j++, i++);
}

void ScanContents(ScoreP ScanStudent, char Filename[])
{
	FILE* ip;
	char Baselink[200] = "C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\";
	char words[100]; // �̰� �³�...? 
	mystrlink(Baselink, Filename);
	printf("%s\n", Baselink); // Baselink �ڿ� Filename �پ����� Ȯ�� �뵵.

	ip = fopen(Baselink, "r");

	if (!ip)
	{
		printf("�����б����\n"); return;
	}

	for (; fscanf(ip, "%s", words) > 0;) // -1 �������� / 0�̸� 0������
	{
		printf("%d\n", How_many_Stu(words)); // �� �̰� �ƴѰ� ������;;
		int i;
		for (i = 0; words[i]; i++)
			printf("%s\n", words);
	}

	printf("%d\n", How_many_Stu(words)); // �л��� Ȯ�� �뵵
}

void mainS_1(int argc, char *argv[])
{
	ScoreP ScanStudent; // �л��� ��ĵ�ϴ� �뵵.
	ScanStudent = (ScoreP)malloc(200);
	// printf("%s\n", argv[1]); // argv[1] Ȯ�� �뵵

	char* Filename = argv[1];
	ScanContents(ScanStudent, Filename);

	printf("C015042�迬��\n");

	free(ScanStudent);
}