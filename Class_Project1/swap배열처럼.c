#include "stdio.h"

void swapARR_2(int a[1], int b[1])
{
	int tmp;
	tmp = a[0];
	a[0] = b[0];
	b[0] = tmp;
}

void main11_3() // 11_3
{
	int A[1] = { 10 }; int B[1] = { 20 };
	printf("before %x =%d %x=%d\n", A, A[0], B, B[0]);
	swapARR_2(A, B);
	printf("after %x =%d %x=%d\n", A, A[0], B, B[0]);
}