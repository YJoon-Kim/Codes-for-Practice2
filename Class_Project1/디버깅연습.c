#include <stdio.h> 

int main6_3() // 6_3
{
	int i, j, k = 0;

	for (i = 0; i <= 4; ++i, k++)
	{
		if ((i - 2)) i = 3;
		for (j = 3; j < 6; j = j + 2) {
			if (!(j - 4)) break;  // 조건 참 되면 해당 for탈출 break
			if (j > 4) continue; // 조건 참 되면 해당 for 밑을 제끼고 반복 계속.즉 j=j+2한후 for 조건 따져나감
			printf("A %d %d %d\n", i, j, k);
		}
		printf("B %d %d %d\n", i, j, k);
		if (k = 1) break; // k=1 k 에 1넣어. 그리고 값보니 1.0 아님. 그러면 참말
	}
}

/* <설명>
i = 0
0 <= 4 ->1 참말 for_i안에 들어감
i - 2 ==== 0 - 2 == -2 참말 i = 3이됨
j = 3 초기화
3 < 6 ==== 1 참말 for_j안에 들어감
	3 - 4 = -1 참
	!(-1) == = 0 거짓 !은 거꾸로 거짓이라 break실행안됨
	3 > 4 == = 0 이라 거짓 continue실행안됨
	printf("A %d %d %d\n", i, j, k);
A i = 3 j = 3 k = 0 //k초기화 0
j = j + 2 하면서 i = 3, k = 0, j = 5 이됨
5 < 6 1 참말 for_j안에 들어감
	5 - 4 == 1 !1 == 0 거짓 이라 break실행안됨
	5 > 4 참 1 continue실행
	j = j + 2 하면서 i = 3, k = 0, j = 7 이됨
	7 < 6 거짓 for_j 깨져나옴
	printf("B %d %d %d\n", i, j, k);
B i = 3 j = 7, k = 0
k = 1 실행되면서 k가 1이됨
1이면 참말 break실행
for_i 빠져나옴
*/