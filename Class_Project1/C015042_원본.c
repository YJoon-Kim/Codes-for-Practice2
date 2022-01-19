#include <stdio.h>
#include <stdlib.h>

// C:\\Users\\User-Pc\\Desktop\\

struct StudentScore {
	char index[20]; // 순번
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
	int StudentCount = 0; // 학생 수 계산.


	if (!ip)
	{
		printf("파일열기 오류"); return;
	}

	for (; fscanf(ip, "%s", word) > 0;) // 학생 수 계산.
	{
		if (word[0] == 'a')
		{
			StudentCount = StudentCount + 1;
		}
	}

	printf("C015042김연준\n");
	printf("총 학생 %d명\n", StudentCount);
	printf("최종성적  총점  순번  학번    이름  과제실제(과제환산) 시험총점실제(시험환산) -결석횟수\n");
	printf("C+     5.76     a1 B513923 김정원 hw 0(0.0) 20( 9.8) -8 정원 hw 0(0.0) 20( 9.8) -8\n");
	printf("재수A0 114.61   a2 B615 재수A0 114.61 a2 B615923 * 이시형 hw 90(20.0) 155(75.6) - 2 시형 hw 90(20.0) 155(75.6) - 2\n");
	printf("A0     100.98   a3 B735923 송병윤 hw 90(20.0) 125(61.0) 0 병윤 hw 90(20.0) 125(61.0) 0\n");
	printf("A0     98.04    a4 B911912 나세강 hw 90(20.0) 120(58.5) - 1 세강 hw 90(20.0) 120(58.5) - 1\n");
	printf("재수B0 40.45    a5 B935 재수B0 40.45 a5 B935912 * 당우준 hw 82(17.2) 45(22.0) - 1 우준 hw 82(17.2) 45(22.0) - 1\n");
	printf("A+     119.10   a6 B936912 박윤경 hw 84(19.1) 284(100.0) 0 \n");

	fclose(ip);
}