#include <stdio.h>

void madd(int a[][2], int b[][2], int result[][2])
{
    int i, j;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void main() // 8_8
{

    int aa[][2] = { 1, 2, 3, 4 };
    int bb[2][2] = { {5,6}, {7,8} };
    int res[2][2];

    madd(aa, bb, res);
    printf("%d %d\n", res[0][0], res[0][1]);
    printf("%d %d\n", res[1][0], res[1][1]);
}

/*
#include <stdio.h>

void fun(int *a, int b[], int c[1], int d[1000000]) --->: �̰͵��� ��� ������
// ���⼭ * or [] ��������� �׻� ������.
{
    ���⼭ ���ʹ� ���� ��Ģ�� ����.
}

void main()
{
    int array1[10]; ---> ������ ����� �� �迭��.
    int array2[] = { 1, 2 }; ---> array[2]�� ���� / { ������ �迭
    int a[]; ---> ����
    int* pt ---> ������(�ּҰ� ����ִ� ����)
}
*/