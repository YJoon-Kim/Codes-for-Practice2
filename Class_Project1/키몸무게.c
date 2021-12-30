#include <stdio.h>

double main4_6() // 4_6
{
	// 조건 계산 순서 헷갈리면 무조건 () 사용!

	char sex; int height, weight;
	scanf("%c %d %d", &sex, &height, &weight);
	// 성별 키 몸무게

	// 기본형
	if (sex == 'f' || (height >= 165 && weight <= 60))
	{
		printf("slim날씬하심\n");
	}
	else
		printf("fat뚱하심\n");

	// 우선순위 확인1
	if (sex == 'f' || (height >= 165) && (weight <= 60))
	{
		printf("slim날씬하심\n");
	}
	else
		printf("fat뚱하심\n");

	// 우선순위 확인2
	// !(a || b && c) --> !a && !b || !c
	if (!(sex == 'f' || (height >= 165) && (weight <= 60)))
	{
		printf("fat뚱하심\n");
	}
	else
		printf("slim날씬하심\n");

	// 우선순위 확인3
	if (!(sex == 'f') && !(height >= 165) || !(weight <= 60))
	{
	printf("fat뚱하심\n");
	}
	else
		printf("slim날씬하심\n");
}