#include <stdio.h>

int pp(char ch, int n) { printf("%c%d", ch, n); return 1; }

int myfactt(int n) {
	if (pp('A', n) && n <= 0) return 1;
	return (pp('B', n) * n * myfactt(n - 1) * pp('R', n));
}
void mainG1_5() { printf("%d\n", myfactt(3)); }

// ´ä : A3B3A2B2A1B1A0R1R2R36