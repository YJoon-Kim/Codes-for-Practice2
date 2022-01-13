#include <stdio.h>

void fG1_19(char strX[10]) { strX[0] = 2 + 'a'; }

void mainG1_19() { char str[] = "A "; fG1_19(str); printf("%c\n", str[0]); }

// ´ä : c