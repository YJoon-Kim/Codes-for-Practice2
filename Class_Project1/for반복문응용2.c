#include "stdio.h"

int conditionCheck(int i, int n)
{
    if (i <= n) printf("i <= n ... i=%d�� n=%d���� �۰ų�����. ������. \n", i, n);
    else printf("i <= n ... i=%d�� n=%d���� ũ�Ƿ� �������� \n", i, n);
    return 1; // �׻� 1 �����༭ ���ǹ� ���� �ǵ��� �������. �޼��� ��������.
}

void main5_5() // 5_5
{
    int i, n = 3, sum = 0;  /* �ʱ�ȭ ������ ����. ������ �� �������. */ // ���� �� �ʱ�ȭ ���� ���� ���� ����
    /* , �� ���� ������ 1���尰�� ó��*/
    for (  /* �ʱ�ȭ��*/ i = 1, printf("i �ʱ�ȭ�İ� i=%d\n", i);
        /*���ǹ�*/ conditionCheck(i, n) && i <= n;
        /*����-����*/ ++i, printf("i�����İ� i=%d\n", i))
    {
        printf("for���� �������� sum = %d i=%d  �������� %d+%d=%d->sum�����ε�.\n", sum, i, sum, i, sum + i);
        sum = sum + i;
        printf("for���� ������ sum = %d\n\n", sum);
    }
    printf("SUM %d == %d\n", n, sum);
}