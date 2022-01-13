#include <stdio.h>

// 시간 더하기 계산 프로그래밍

struct time {
	int hour, min, sec;
};

typedef struct time Time;
typedef struct time* TimeP;

int Time2Sec(Time t) // 시간 구조체를 통째로 복사받아 전부 Sec로 정수를 리턴
{
	return t.hour * 3600 + t.min * 60 + t.sec; // 1시간 3600초 1분 60초
}

Time Sec2Time(int sec)
{
	Time result;
	result.sec = sec % 60; // 60으로 나눈 나머지
	result.hour = sec / 3600;
	result.min = (sec - result.sec - result.hour * 3600) / 60; // 못바꾼 것들 중 60으로 나눈 몫
	return result; // 구조체를 통째로 리턴.
}

/*
(1) 함수 통째로 리턴
(2) 포인터 주소 가져와서 리턴 안하기
*/

Time addTime(Time a, Time b)
{
	int sec;
	Time result; // 쓰레기
	// 시간을 초로 바꿔 초를 더한 후 다시 시간으로 변환..?
	sec = Time2Sec(a) + Time2Sec(b);
	result = Sec2Time(sec);

	return result;
}

void main14_2() // 14_2
{
	Time a = { 1,25,49 }, b = { 2,48,45 }, result; // result는 아직 쓰레기
	result = addTime(a, b);
	printf("결과 : %d시 %d분 %d초\n", result.hour, result.min, result.sec);
}