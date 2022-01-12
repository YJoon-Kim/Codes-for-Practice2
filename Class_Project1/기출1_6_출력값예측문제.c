#include <stdio.h>
int mainG1_6() {
	int i, j, k = 0;
	for (i = 0; i <= 4; ++i, k++)
	{
		if ((i - 2)) i = 3;
		for (j = 3; j < 6; j = j + 2) {
			if (!(j - 4)) break;
			if (j > 4) continue;
			printf("A %d %d %d\n", i, j, k);
		}
		printf("B %d %d %d\n", i, j, k);
		if (k = 1) break; // 여기 k=1는 수행되지 않음!!! for에서는 k=1 되는데
		// if 에서는 그냥 bool로써만 의미가 있나보다.
	}
}

// 틀림.
/*
* 
<내 정답>

A 3 3 0
B 3 7 1

<실제 정답>
A 3 3 0
B 3 7 0

*/