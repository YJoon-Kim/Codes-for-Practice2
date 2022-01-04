#include "stdio.h"

int count()
{
    static int counter; // initialize 0 OK
    return ++counter;
}

int localcount()
{
    int counter; // initialize ������� �ʱ�ȭ. local���� VS ������/���� �ȵɰ���. ���� ������
    return ++counter; // ������++�� ������
}

void main7_8() // 7_8
{
    int i;
    for (i = 1; i <= 5; ++i)
        printf("called static count=%d local count=%d\n",
            count(), localcount() );
}