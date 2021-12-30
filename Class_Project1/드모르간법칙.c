#include <stdio.h>

int main4_5()
{
	int age; char sex;
	scanf("%d %c", &age, &sex);
	// ³ªÀÌ ¼ºº°
	
	// ±âº»Çü
	if (sex == 'm' || age > 19)
	{
		printf("¸¶¼Å\n");
	}
	else
	{
		printf("¸ø¸¶¼Å\n");
	}

	// !»ç¿ë
	if (!(sex == 'm' || age > 19))
	{
		printf("¸ø¸¶¼Å\n");
	}
	else
	{
		printf("¸¶¼Å\n");
	}

	// !¿¬»ê ÈÄ
	if (!(sex == 'm') && !(age > 19))
	{
		printf("¸ø¸¶¼Å\n");
	}
	else
	{
		printf("¸¶¼Å\n");
	}

	// !¿¬»ê ÈÄ2
	if ((sex == 'f') && (age <= 19))
	{
		printf("¸ø¸¶¼Å\n");
	}
	else
	{
		printf("¸¶¼Å\n");
	}

	// !(a||b) == !a && !b
	// !(a&&b) == !a || !b
}