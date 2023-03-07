#include <stdio.h>

int mainJP()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[110] = { 0, };

	for (int y = 0; y < N; y++)
	{
		arr[y] = y + 1;
	} // arr »ý¼º

	int i, j, k;
	int p;
	for (p = 0; p < M; p++)
	{
		scanf("%d %d", &i, &j);
		k = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = k;
	}

	for (int r = 0; r < N; r++)
	{
		printf("%d ", arr[r]);
	}

	return 0;
}