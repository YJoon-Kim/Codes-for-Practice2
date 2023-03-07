#include <stdio.h>
#include <stdlib.h> //abs()
// 바구니 뒤집기

int main_10811()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[110] = { 0, };

	for (int y = 0; y < N; y++)
	{
		arr[y] = y + 1;
	} // arr 생성

	int i, j, k;
	for (int p = 0; p < M; p++)
	{
		scanf("%d %d", &i, &j);
		for (;i<j;i++,j--)
		{
			k = arr[i - 1];
			arr[i - 1] = arr[j - 1];
			arr[j - 1] = k;
		}
	} // 바구니 뒤집기

	for (int r = 0; r < N; r++)
	{
		printf("%d ", arr[r]);
	} // 결과값 출력
	return 0;
}