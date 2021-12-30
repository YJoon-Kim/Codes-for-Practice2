#include <stdio.h>

int main4_2() // 4_2
{
	int i1, i2;

	i1 = 3 > 5; // 거짓말 --> 0
	i2 = 5 > 3; // 참말.. --> 컴에서는 1로
	printf("i1 = %d, i2 = %d\n", i1, i2);

	if (i1) printf("3 > 5; 참말임\n");
	else printf("3 > 5; 거짓말임\n");

	if(i2) printf("5 > 3; 참말임\n\n");
	else printf("5 > 3; 거짓말임\n\n");


	// 연산자 복습
	int neg1 = 2, neg0 = 0;

	if (0 && 1)
		printf("0 && 1 is 계산결과 참말임\n"); // &&는 and
	else
		printf("0 && 1 is 계산결과 거짓임\n");

	if (0 || 1)
		printf("0 && 1 is 계산결과 참말임\n"); // ||는 or
	else
		printf("0 && 1 is 계산결과 거짓임\n");

	printf("!neg1=%d !neg0=%d\n", !neg1, !neg0); // !는 거꾸로

	return 3; // 리턴 안하면 쓰레기가 리턴됨.
}