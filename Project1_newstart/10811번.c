#include <stdio.h>
#include <stdlib.h> //abs()
// 바구니 뒤집기

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[110] = { 0, };

	for (int y = 0; y < N; y++)
	{
		arr[y] = y + 1;
	} // arr 생성

	int i, j;
	for (int p = 0; p < M; p++)
	{
		scanf("%d %d", &i, &j);
		
	} // 바구니 뒤집기

	for (int r = 0; r < N; r++)
	{
		printf("%d ", arr[r]);
	} // 결과값 출력
	return 0;
}