#include <stdio.h>

int Compare_with_two_numbers()
{
	int num01, num02;
	scanf("%d %d", &num01, &num02);

	if (num01 > num02)
		printf(">");
	else if (num01 < num02)
		printf("<");
	else
		printf("==");

	return 0;
}