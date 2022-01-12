#include <stdio.h>

int multiply(int multiplicand, int multiplier)
{
	if (0 == multiplier)
		return 0;

	else if (multiplier < 0)
		return multiply(multiplicand, multiplier + 1) - multiplicand;

	else
		return multiply(multiplicand, multiplier - 1) + multiplicand;
}

void mainG1_7()
{
	printf("%d\n", multiply(10, -5));
}