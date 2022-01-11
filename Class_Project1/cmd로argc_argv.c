#include <stdio.h>

void main12_6(int argc, char *argv[]) // 12_6 // cmd 창에서 돌리는 것이지 '디버깅 하지않고 시작'으로 돌리면
// 제대로 안돌아감.
// int char 이게 중요한 거임. 위에 매개변수 이름은 그냥 약속.
// int char 자료형하고 순서는 바꾸면 안돼!!!!!
{
	int i;
	printf("cmd명령문자열 갯수 argc = %d\n", argc);
	// argv[0][0] = 'X'; // 이러면 앞에 글자 바뀜. // 상수 문자열 아님
	for (i = 0; i < argc; ++i)
		printf("명령문자열 %d = %s\n", i, argv[i]); // 이 문자열은 "'상수문자열 아니고"" 수정 가능함.
}

/*
C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug>Class_Project1 A1 A2 A3
cmd명령문자열 갯수 argc = 4
명령문자열 0 = Class_Project1
명령문자열 1 = A1
명령문자열 2 = A2
명령문자열 3 = A3

C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug>
*/

// (1) 맨 처음에 실행 파일 위치 알기 위해서 디버깅 하지 않고 시작 돌려보셔
// 실행파일 위치 : C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug\Class_Project1.exe
// (2) 메모장을 하나 여셔.(한글이 경로에 있는 사람 잘 안 돌아갈 수 있으셔)
// (3) 메모장에 저장할 내용 --> cd C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug
// cmd
// (4) 메모장 저장할 때 EXE.bat로 모든 파일 모드로 저장.
// (5) EXE.bat를 마우스 더블클릭 실행시키셔 (dir치면 실행파일이 보여야함.)
// (6) 코딩후... 실행시키지 말고 다시 빌드만 하셔.
// (7) cmd 창에서 실행시키셔.
// Class_Project1.exe ARGV1 ARGV2

// 리눅스 사용자 분께서는 전부 신경 끄시고 그냥 코딩부터 하시면 되셔.