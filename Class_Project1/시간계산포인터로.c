#include <stdio.h>

struct time {
	int hour, min, sec;
};

typedef struct time Time;
typedef struct time* TimeP;

int Time2Sec_P(Time t) // 시간 구조체를 통째로 복사받아 전부 Sec로 정수를 리턴
{
	return t.hour * 3600 + t.min * 60 + t.sec; // 1시간 3600초 1분 60초
}

Time Sec2Time_P(int sec)
{
	Time result;
	result.sec = sec % 60; // 60으로 나눈 나머지
	result.hour = sec / 3600;
	result.min = (sec - result.sec - result.hour * 3600) / 60; // 못바꾼 것들 중 60으로 나눈 몫
	return result; // 구조체를 통째로 리턴.
}

void addTimePointer(struct time a, Time b, TimeP result) // 포인터를 안하면 계산 결과가 넘어갈 수 없으셔. 그냥 변수로 해버리면 그냥 이 함수에서 끝나셔.
{
	int sec;
	// 시간을 초로 바꿔 초를 더한 후 다시 시간으로 변환
	sec = Time2Sec_P(a) + Time2Sec_P(b);
	*result = Sec2Time_P(sec);
}

void main14_4() // 14_4
{
	Time a = { 1,25,49 }, b = { 2,48,45 }, result; // result는 아직 쓰레기
	addTimePointer(a, b, &result);
	printf("결과 : %d시 %d분 %d초\n", result.hour, result.min, result.sec);
}