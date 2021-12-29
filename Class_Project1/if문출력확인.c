#include "stdio.h" // 자기폴더 먼저 찾고 시스템 폴더 찾아

// char 1 바이트 / int 4 바이트

void main3_4() // 3_4
{

	if (0) printf("0 is TRUE\n");

	else printf("0 is 거짓 FALSE\n");

	if (-11) printf("-11 is TRUE\n");

	else printf("-11 is 거짓 FALSE\n");

	if (11) printf("11 is TRUE\n");

	else printf("11 is 거짓 FALSE\n");

	if (0.1) printf(".1 is TRUE\n");

	else printf(".1 is 거짓 FALSE\n");

	if (0.0) printf(".0 is TRUE\n");

	else printf(".0 is 거짓 FALSE\n");

	printf("결론 0은 거짓말. 0아니면 참말, 안외우면 망함\n");

}