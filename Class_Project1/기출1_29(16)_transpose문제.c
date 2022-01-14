#include <stdio.h>

void transposeG1_29(int aa[][5], int bb[][2])
{
	int i;
	for (i = 0; i < 2; ++i)
	{
		bb[0][i] = aa[i][0];
		bb[1][i] = aa[i][1];
		bb[2][i] = aa[i][2];
		bb[3][i] = aa[i][3];
		bb[4][i] = aa[i][4];
	}
}

void mainG1_29()
{
	int a[2][5] = { 1,3,5,7,9,2,4,6,8,10 };
	int t[5][2];
	int i, j;
	transposeG1_29(a, t);

	for (j = 0; j < 2; j++)
		printf("%d %d %d %d %d\n", a[j][0], a[j][1], a[j][2], a[j][3], a[j][4]);
	printf("=========\n");
	for (i = 0; i < 5; i++)
		printf("%d %d\n", t[i][0], t[i][1]);
}

// 내가 행렬에 오개념이 있었네 ;;; 2x5행렬은 2행 5열 행렬임.