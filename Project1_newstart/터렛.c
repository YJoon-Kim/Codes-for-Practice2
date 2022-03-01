#include <stdio.h>
#include <math.h>

int main()
{
	int Num; // 시도 횟수
	scanf("%d", &Num);

	for (int i = 0; i < Num; i++)
	{
		int x1, y1, r1, x2, y2, r2; // 좌표와 반지름
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		double a; // 중점 사이의 거리 // sqrt 하니까 double로 했어야지!!
		int b; // r1 - r2 = b
		a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		b = r1 - r2;

		if (a == 0)
		{
			if (r1 == r2)
				printf("-1\n");
			else
				printf("0\n");
		}

		else // a>0 일 때
		{
			if (r1 + r2 == a || abs(b) == a)
				printf("1\n");
			else if (abs(b) > a || r1 + r2 < a)
				printf("0\n");
			else
				printf("2\n");
		}
	}
	return 0;
}