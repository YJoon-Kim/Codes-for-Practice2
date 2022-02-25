#include <stdio.h>
#include <stdlib.h>

// C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\
// Class_Project1

// 1. 동적 메모리 할당해서 그 메모리로 fscanf 해야함.
// 2. <명령prompt>로 exe 실행하여 파일 스캔해야함.
// 3. 프로그램으로 사람 인원 세는 알고리즘 구현
// 4. 최고점이 100점으로 계산
// 5. 출력에는 성적 총점 도 나와야함. 
// <과제> 90점 --> 기말 점수 20점
// <최종 점수> 65+ --> A+ / 60+ --> A0 / 55+ --> B+ / 50+ --> B0 / 45+ --> C+ / 40+ --> C0 / 35+ --> D+ / 30+ --> D0 / 나머지 F

struct StudentScore {
	char index[20]; // 순번 // 이거 진짜 2차원 배열 필요할 수도...
	char Studentnumber[20];
	char name[20];
	char ScoreP1[20], ScoreP2[20], ScoreP3[20], ScoreAssignment[20], Absentnumber[20]; // 여기도 다 int로 바꿔야 할 수도...
};

typedef struct StudentScore Score;
typedef struct StudentScore* ScoreP;

int How_many_Stu(char words[])
{
	int StudentCount = 0;
	if (words[0] == 'a')
	{
		StudentCount = StudentCount + 1; // 난 모르겠다~~~ 다음에 하자.
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
	char words[100]; // 이거 맞나...? 
	mystrlink(Baselink, Filename);
	printf("%s\n", Baselink); // Baselink 뒤에 Filename 붙었는지 확인 용도.

	ip = fopen(Baselink, "r");

	if (!ip)
	{
		printf("파일읽기오류\n"); return;
	}

	for (; fscanf(ip, "%s", words) > 0;) // -1 에러났음 / 0이면 0개읽음
	{
		printf("%d\n", How_many_Stu(words)); // 아 이거 아닌거 같은데;;
		int i;
		for (i = 0; words[i]; i++)
			printf("%s\n", words);
	}

	printf("%d\n", How_many_Stu(words)); // 학생수 확인 용도
}

void mainS_1(int argc, char *argv[])
{
	ScoreP ScanStudent; // 학생들 스캔하는 용도.
	ScanStudent = (ScoreP)malloc(200);
	// printf("%s\n", argv[1]); // argv[1] 확인 용도

	char* Filename = argv[1];
	ScanContents(ScanStudent, Filename);

	printf("C015042김연준\n");

	free(ScanStudent);
}