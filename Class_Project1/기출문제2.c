#include <stdio.h>

int main5_11() { // 5_11
	int i, j, k = 0;
	for (i = 0; i <= 4; ++i, k++)
	{
		if ((i - 2) /* i != 2 */) i = 3;
		for (j = 3; j < 6; j = j + 2) {
			if (!(j - 4)) break;
			if (j > 4) continue;
			printf("A %d %d %d\n", i, j, k);
		}
		printf("B %d %d %d\n", i, j, k);
		if (k = 1) break;
	}
}