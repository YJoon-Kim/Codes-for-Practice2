#include <stdio.h>
// ���ο� ���

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
	} // arr1 ����

	int max = 0;
	for (int k = 0; k < N; k++)
	{
		if (max < arr1[k])
		{
			max = arr1[k];
		}
	} // �ִ밪 �̾Ƴ���

	// printf("%d ", max);

	double a = 0;
	for (int h = 0;h<N;h++)
	{
		a += ((arr1[h] / (double)max) * 100); 
		// ���� ���� ������ �ٲ�����.
		// double�� �ٲ��ֱ�
		// printf("%lf ", a);
	}
	
	double b = a / N;
	printf("%lf", b);

	/*
	for (int j = 0; j < N; j++)
	{
		printf("%d ", arr1[j]);
	} // Ȯ�ο�
	*/
	return 0;
}