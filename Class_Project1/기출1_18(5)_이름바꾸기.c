#include <stdio.h>

void mystrchgG1_18(char ori[], char n[]) { for (; *ori = *n; ori++, n++); }

void mainG1_18()
{
	char name[20] = "È«±æµ¿";
	mystrchgG1_18(name,"±è¿¬ÁØ");
	printf("%s\n", name); // Æ÷ÀÎÅÍ·Î ³ù³×? printf ÇÒ ¶§? Ã· º½.
}