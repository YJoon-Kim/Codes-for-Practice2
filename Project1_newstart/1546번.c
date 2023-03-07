#include <stdio.h>
// 새로운 평균

int main_1546()
{
	int N;
	int arr1[1000] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int x;
		scanf("%d", &x);
		arr1[i] = x;
	} // arr1 생성

	int max = 0;
	for (int k = 0; k < N; k++)
	{
		if (max < arr1[k])
		{
			max = arr1[k];
		}
	} // 최대값 뽑아내기

	// printf("%d ", max);

	double a = 0;
	for (int h = 0;h<N;h++)
	{
		a += ((arr1[h] / (double)max) * 100); 
		// 정수 들어가면 정수로 바뀌어버림.
		// double로 바꿔주기
		// printf("%lf ", a);
	}
	
	double b = a / N;
	printf("%lf", b);

	/*
	for (int j = 0; j < N; j++)
	{
		printf("%d ", arr1[j]);
	} // 확인용
	*/
	return 0;
}