#include <stdio.h>

void transM(int a[][2], int t[100][2]) // 2차원 배열에 대한 포인터임 // 열을 꼭 맞추기 
{
	t[0][0] = a[0][0];
	t[1][0] = a[0][1];
	t[0][1] = a[1][0];
	t[1][1] = a[1][1];

	/*
	<for문으로>

	int i, j;
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 2; ++j)
		{
			t[i][j] = a[j][i];
		}
	}
	*/
}

void main8_9() // 8_9
{
	int aa[2][2] = { 1,2,3,4 }, transp[2][2]; // 얘네는 array임
	printf("%d %d\n", aa[0][0], aa[0][1]);
	printf("%d %d\n---\n", aa[1][0], aa[1][1]);
	transM(aa, transp);
	printf("%d %d\n", transp[0][0], transp[0][1]);
	printf("%d %d\n", transp[1][0], transp[1][1]);
}