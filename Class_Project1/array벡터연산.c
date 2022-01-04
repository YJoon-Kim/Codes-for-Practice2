#include <stdio.h>

void vadd(int a[3], int b[3], int c[30]) // 사실 포인터라고 / 주소든 변수들임. 이걸들을 그냥 array(배열)같이 사용하셔
{ // 사실 변수는 a b c 3개인데 이것들이 주소를 복사 받아왔음.
	printf("더하기 전 쓰레기일듯 %d 주소 %x\n", c[0], c); // &c[0] ==> c
	c[0] = a[0] + b[0];
	printf("더한 후 제대로된 값일듯 %d 주소 %x\n", c[0], c); // &c[0] ==> c
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2]; // c는 result 주소를 가지고 있어서... main() 방문해서 집수리 해줬음. 쓰레기 사라짐.
}

void main7_9() // 7_9
{
	// (1,2,3) + (2,3,4) = (1+2,2+3,3+4) // vector 계산
	int v1[3] = { 1,2,3 }, v2[] = { 2,3,4 }, result[3]; // result에는 초기화값 쓰레기 들어있음.
	printf("main() 쓰레기값일듯 %d 주소 %x\n", result[0], &result[0]);
	vadd(v1, v2, result); // 사실 주소를 복사해 주는 것임. v1 v2 result 들은 메모리 공간 주소들임.

	printf("%d %d %d\n", result[0], result[1], result[2]);
}