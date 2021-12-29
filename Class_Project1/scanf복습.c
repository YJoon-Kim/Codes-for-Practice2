#include <stdio.h>

void main3_1() // 3_1 // 복습
{
	int i; char c; float f; double d;
	scanf("%d %c %f %lf", &i, &c, &f, &d); // 어디에 해당하는지 꼭 확인
	printf("out %d %c %f %f\n", i, c, f, d);
	f = 0.1; // 변수 f에 0.1 넣음
	printf("out 0.1 != %30.20f\n", f); // 총 30칸 소숫점 20칸.. 컴 제약으로 0.1 저장 불가
}