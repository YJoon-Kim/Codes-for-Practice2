#include <stdio.h>
#include <stdlib.h> //abs()
// �ٱ��� ������

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[110] = { 0, };

	for (int y = 0; y < N; y++)
	{
		arr[y] = y + 1;
	} // arr ����

	int i, j;
	for (int p = 0; p < M; p++)
	{
		scanf("%d %d", &i, &j);
		
	} // �ٱ��� ������

	for (int r = 0; r < N; r++)
	{
		printf("%d ", arr[r]);
	} // ����� ���
	return 0;
}