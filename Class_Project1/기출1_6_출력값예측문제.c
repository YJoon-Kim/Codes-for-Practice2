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
		if (k = 1) break; // ���� k=1�� ������� ����!!! for������ k=1 �Ǵµ�
		// if ������ �׳� bool�νḸ �ǹ̰� �ֳ�����.
	}
}

// Ʋ��.
/*
* 
<�� ����>

A 3 3 0
B 3 7 1

<���� ����>
A 3 3 0
B 3 7 0

*/