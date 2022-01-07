#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
(1) 내 문서 쓰기 속성 바꾸기
(2) 문서 폴더 밑에 JJJ폴더 만들고, 안에 input.txt 파일 저장
(3) 주소 복사해 놓기.
(4) 아래 main()코딩. 주의사항. 경로에 돈표시 나오면 돈 추가로 넣자.
*/

// 파일 경로 : C:\Users\User-Pc\source\repos\Codes-for-Practice2\JJJ

void main9_5() // 9_5
{
	FILE* ip, *op; // 사실 파일에 대한 포인터임. FILE 시스템에서 파일용 type. 무조건 외우자. stdio.h안에 정의됨
	ip = fopen("C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\input.txt","r"); // "r" : 읽기 / "w" : 쓰기 // 한 글자가 아닐 수도 있기 때문에 "r" 문자열로
	op = fopen("C:\\Users\\User-Pc\\source\\repos\\Codes-for-Practice2\\JJJ\\output.txt", "w"); // "r" : 읽기 / "w" : 쓰기
	double tmp, max = -1000000.0; // max는 현재 찾은 최대 값. 초기값으로 컴 최소값 저장.

	if (ip == 0 || !op)
	{ // ip ==0 --> !ip
		fprintf(stderr,"파일입력오류. 경로 확인해보셔"); // 리턴 안하면 프로그램 빠지직 폭발할 수 있으셔.(단순 종료 아닌 상황)
		printf("파일입력오류. 경로 확인해보셔"); return;
	}

	for (;;)
	{
		if (fscanf(ip, "%lf", &tmp) <= 0) break; // --> -1 : 에러,0 : 1개 못읽음 --> for 깨자
		if (max < tmp) max = tmp;
	}

	printf("max=%f\n", max);
	fprintf(op, "2022 1/6 max=%f\n", max);
}