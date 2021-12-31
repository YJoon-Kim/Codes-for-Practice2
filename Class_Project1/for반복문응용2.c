#include "stdio.h"

int conditionCheck(int i, int n)
{
    if (i <= n) printf("i <= n ... i=%d는 n=%d보다 작거나같음. 참말임. \n", i, n);
    else printf("i <= n ... i=%d는 n=%d보다 크므로 깨져나옴 \n", i, n);
    return 1; // 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임.
}

void main5_5() // 5_5
{
    int i, n = 3, sum = 0;  /* 초기화 않으면 망함. 쓰레기 값 들어있음. */ // 시험 때 초기화 유무 감점 심함 조심
    /* , 로 여러 문장을 1문장같이 처리*/
    for (  /* 초기화문*/ i = 1, printf("i 초기화후값 i=%d\n", i);
        /*조건문*/ conditionCheck(i, n) && i <= n;
        /*증가-감소*/ ++i, printf("i증가후값 i=%d\n", i))
    {
        printf("for본문 실행전값 sum = %d i=%d  실행전값 %d+%d=%d->sum값으로됨.\n", sum, i, sum, i, sum + i);
        sum = sum + i;
        printf("for본문 실행후 sum = %d\n\n", sum);
    }
    printf("SUM %d == %d\n", n, sum);
}