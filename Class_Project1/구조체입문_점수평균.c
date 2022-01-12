#include <stdio.h>

// p->name == (*p).name 동일
// 23_2까지만 시험범위.

struct student {
	char name[10];
	int kor, eng, math, sum; // 각자 알아서 결정
	double avg;
};

// 그냥 앞에 있는 거와 똑같고, 구조체는 그냥 사람만 늘어난 것 뿐.

void AvgNoReturnFunc(struct student *x) // y = f(x) 형태 아님!!!.
{ // 얘는 복사없이 main 바로 수정 -> 구조체 크기가 속도에 영향 X
	// sturct student x local 변수임. main의 구조체 공간 주소값 복사받은 포인터
	x->sum = x->kor + x->eng + x->math; // 포인터라 멤버 찍을때 '->'로
	x->avg = x->sum / 3.0; // 정수/정수 = 정수
	// """여기는 main에 있는 그 주소 sum avg임"""
}

struct student AvgReturnFunc(struct student x) // y = f(x) 형태.
{ // 통째로 하기 때문에 구조체가 크면 느려짐.
	/* 앞에 struct student는 약간 type 같은 느낌 */
	// sturct student x local 변수임. main에서 단순히 값만 복사받음. 딴 몸.
	x.sum = x.kor + x.eng + x.math;
	x.avg = x.sum / 3.0; // 정수/정수 = 정수
	// """여기는 main에 있는 그 주소 sum avg와 완젼 다름!!!!!"""
	return x; // 복사를 해줌.
}

void main13_4() // 13_4
{
	struct student st[3] = { { "홍1", 100,100,100, 0, 0.0 }, { "홍2", 90,90,90 },
	{ "홍3", 80,80,80 } }; // 초기화... 열혈ppt23장..? // 나머지 비어있는 공간은 0으로!! 쓰레기 아님!
	
	int i;
	for (i = 0; i < 3; ++i)
	{
		printf("함수호출전 %d %.2f\n", st[i].sum, st[i].avg); // 초기화 0으로 되어있음.
		AvgNoReturnFunc(st + i); // &st[i] == st + i; // main에 저장되어있는 주소를 가르쳐 줬음. 막바로
		// st[i] = AvgReturnFunc(st[i]); // """통째로""" 복사 - """통째로""" y에 넘겨 받음 y=f(x) 형태.
		printf("%s %d %d %d %d %.2f\n\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].sum, st[i].avg);
	}
}

// 기출5 알람시계 이번에 1번 나올 확률 매우 높음!!!!