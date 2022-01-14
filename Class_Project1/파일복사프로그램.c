#include <stdio.h>

// (1) 빈 main 돌려서 프로젝트 실행파일 위치 알아내기
// (2) 폴더를 하나 열어. 폴더 경로상의 (1)의 위치를 복붙해 넣어
// (3) 메모장 열어서 txt 파일로 아무 내용이나 쳐. 그리고 (2) 폴더로 파일 이동.
// 파일 이름은 ori.txt
// (4) (1)의 명령문 실행 창에서 실행파일이름.exe ori.txt copy.txt 엔터쳐 -> 폴더에 copy.txt 폴더 생성
// linux는 exe 빠지면 실행 안됨.

// argv[1][1] == *(* (argv[1] +1)+1);
// char arr[3][4] != char *arr[4];
// 2차원 배열과 포인터의 포인터는 매우 다름.

int main13_3(int argc, char* argv[]) //13_3 // **argv로 해도 무방하셔
{ // argv는 2차원 배열이 아님. <--- != ---> char argv[2][4];(2차원배열)
	// char *argv : argv는 주소 저장하는 포인터 변수임.
	// char *argv[10] ;; 포인터 변수 10개. // 포인터 변수로 하면 니 맘대로 쓰세요. 날라가는 정보 없음.

	int i; FILE* ip, * op; char ch;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; ++i) printf("argv[%d] = %s\n", i, argv[i]); // i번 째 문자열

	ip = fopen(argv[1], "r");
	op = fopen(argv[2], "w");

	if (!ip || !op)
	{
		printf("파일열기 오류\n"); return;
	}

	for (; fscanf(ip, "%c", &ch) > 0;) // ori.txt 읽기
		fprintf(op, "%c", ch); // copy.txt에 복사

	fclose(ip); fclose(op); // 파일 닫기

	// argv[0][0] == *( *(argv + 0) + 0);
}