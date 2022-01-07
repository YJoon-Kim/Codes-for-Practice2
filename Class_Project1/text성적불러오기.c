#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 노트북 폴더 주소 : C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\

void main10_1() // 10_1
{
	FILE* ip, * op; // <stdio.h> standard input ouput
	char name[3][10]; int kor[3], eng[3], math[3], sum[3], i;
	double avg[3];

	ip = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\ScoreIN.txt", "rb"); // r 읽기 w 쓰기 b 이미지등 ascii 파일
	op = fopen("C:\\Users\\82106\\source\\repo\\Codes-for-Practice2\\JJJ\\ScoreOUT.txt", "w");

	if (!ip || !op)
	{
		printf("파일읽기오류"); return; // 0도 없음. void 이여가지구
	}

	for (i=0; fscanf(ip, "%s %d %d %d", name[i], &kor[i], &eng[i], &math[i]) > 0; i++) // fscanf는 ascii 파일용 // name[i]는 포인터임. 아마 2차원 배열이니까..?
	{
		sum[i] = kor[i] + eng[i] + math[i];
		avg[i] = sum[i] / 3.; // 정수/정수=정수

		if (name[i][0] == '*') // 재수강
		{
			sum[i] = sum[i] - 30;
		}
		fprintf(op, "%s %d %d %d %d %.2f\n", name[i], kor[i], eng[i], math[i], sum[i], avg[i]);
	}
	fclose(ip); fclose(op); // 프로그램 종료시 닫아주긴 함.
}

/*
binary파일과 ascii 파일에는 차이가 큼. binary파일을 txt로 옮기면
다 깨짐.
*/