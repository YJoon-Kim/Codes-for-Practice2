#include <stdio.h> // stdio.h란 화일을 끼워넣어 

// stdio.h std standad 표준 io input output 입출력 

int main2_1() // main() 함수 종류가 int 정수를 돌려주는 함수 

{ // 함수정의 시작 int char float double void(무효, 리턴 X) system에서 쓰레기통으로 보냄
  // 생략도 가능한데 안하는게 좋아. 생략하면? default라고 따로 지정하지 않는 경우 int로 된다.

	int i; //정수 .. 졍수정의 : 변수는 변하는 수. 중간 계산 결과 저장 

	char c; //글자 1자 // "abc" 문자열-글자여럿 "" 0개글자..

	float f; // 실수 간단

	double d; //float 2배 정교 실수 // 입력할 때 정수%d  글자1자(특수포함)%c  실수float%f  실수double%lf(시험많이나옴)

	scanf("%d %c %f %lf", &i, &c, &f, &d); // 입력 스캔뜨기 lf주의.. %d 정수 %c 글자1자 %f float용 ---> long float. lf.
	// scanf는 진짜 조심하게 해야되. 특히 \n 이런거 사고 많이나. 일단 빼고 보자.
	// 주소 알려줘야 택배 배달됨 & 주소 알아내는 연산자 

	printf("%d %c %f %f\n", i, c, f, d); //\n 줄바꾸기 // 출력할 때 정수%d  글자1자(특수포함)%c  실수float%f  실수double%lf

} // 함수 정의 끝 