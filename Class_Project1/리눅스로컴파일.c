// putty 통해서 학교 리눅스 서버 접속
// mkdir hw1
// cd hw1
// nano hw01.c --> nano로 파일 열기

#include <stdio.h> // 사실 이것도 필 없긴 함 리눅스에서는

int main1_2()
{
	double d;
	scanf("%lf", &d); // scanf에서 입력값이 double 형식일 때,
	// 서식자는 무조건 %lf이어야 함.
	printf("성공 %f\n", d); // printf는 %lf든 %f든 상관 ㄴ
}

// cat hw01.c로 위 코드 확인
// cc hw01.c 로 컴파일하기
// ./a.out 로 출력하기
// 출력 완료