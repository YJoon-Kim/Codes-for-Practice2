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

void fun(int *a, int b[], int c[1], int d[1000000]) --->: 이것들은 모두 포인터
// 여기서 * or [] 사용했으면 항상 포인터.
{
    여기서 부터는 밑의 법칙과 동일.
}

void main()
{
    int array1[10]; ---> 다음에 선언된 것 배열임.
    int array2[] = { 1, 2 }; ---> array[2]와 동일 / { 다음은 배열
    int a[]; ---> 에러
    int* pt ---> 포인터(주소가 들어있는 변수)
}
*/