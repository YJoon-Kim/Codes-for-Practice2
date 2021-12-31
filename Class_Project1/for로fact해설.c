#include <stdio.h> 

int conditionCheck2(int i, int n)
{
	if (i <= n) printf("i <= n ... i=%d는 n=%d보다 작거나같음. 참말임. \n", i, n);
	else printf("i <= n ... i=%d는 n=%d보다 크므로 깨져나옴 \n", i, n);
	return 1; // 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임. 
}

void main5_7() // 5_7
{
	int i, n = 5, fact = 1; /* 초기화 않으면 망함. 쓰레기 값 들어있음. */
	/* , 로 여러 문장을 1문장같이 처리*/
	for ( /* 초기화문*/ i = 1, printf("i 초기화후값 i=%d\n", i);
		/*조건문*/ conditionCheck2(i, n) && i <= n;
		/*증가-감소*/ ++i, printf("i증가후값 i=%d\n", i))
	{
		printf("for본문 실행전값 fact = %d i=%d 실행전값 %dX%d=%d->fact값으로됨.\n ", fact, i, fact, i, fact * i);
		fact = fact * i;
		printf("for본문 실행후 fact = %d\n\n", fact);
	}
	printf("%d! == %d\n", n, fact);
}