#include "stdio.h"

int count()
{
    static int counter; // initialize 0 OK
    return ++counter;
}

int localcount()
{
    int counter; // initialize 쓰레기로 초기화. local변수 VS 컴파일/실행 안될것임. 무시 눌러야
    return ++counter; // 쓰레기++은 쓰레기
}

void main7_8() // 7_8
{
    int i;
    for (i = 1; i <= 5; ++i)
        printf("called static count=%d local count=%d\n",
            count(), localcount() );
}