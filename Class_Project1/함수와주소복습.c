#include <stdio.h>

double myfabs_1(double x) // 7_1 // x에 값을 '''''복사''''' 해줌. // call by value
// 여기 x는 이 동네 지역 변수이지 main과 상관 없음.
{// local 동네 시작(마포구)
	{// local 동네 시작(상수동)
		double x; // 상수동에서만 효력 발휘
	}// local 동네 끝(상수동)
	printf("myfabs %x / 값 : %f\n", &x, x); // 이 동네 변수(local 변수)
	if (x < 0.) return -x; // x가 음수이면 -x 리턴
	return x; // double 리턴 안하면 쓰레기가 리턴됨.
}// local 동네 끝.

// 동네 끝나는 순간에 보물 있던지 말던지 시스템에서 옮겨버림. 효력이 바로 사라짐 {} 끝나면. 이것이 지역 변수.

int main7_1() // default int
{// main 동네 시작
	double x = 0.1; // 예는 강남사는 x / myfabs()의 x와 동명이인. 주소 다름 매우 중요!!!!!
	printf("main() %x / 값 : %f\n", &x,x);
	myfabs_1(x); // 강남 사는 x를 복사함. 그런데 안에 쓰레기 들었을 듯.
	return 1; // int를 리턴 안하면 쓰레기 리턴됨.
}// main 동네 끝. 이것 지나고 나면 방 빼버림.