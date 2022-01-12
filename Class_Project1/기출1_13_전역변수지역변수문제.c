#include <stdio.h>
int a, b, c;
void mainG1_13()
{
	{
		int a = 9, b = -6, c = -7.9;
		printf("%d %d %d\n", a, b, c);
		{
			int b = 3;
			int c = 4.9;
			printf("%d %d %d\n", a, b, c);
			a = b, b = a++;

			{
				register int a; static int c;
				c = b;
				printf("%d %d %d\n", a, b, c);
			}

			{
				register int b; static int c;
				c = b;
				printf("%d %d %d\n", a, b, c);
			}

			printf("%d %d %d\n", a, b, c);
		}
		printf("%d %d %d\n", a, b, c);
	}
	printf("%d %d %d\n", a, b, c);
}

/*

<답>
9 -6 -7
9 3 4
-858993460 3 3
4 -858993460 -858993460
4 3 4
4 -6 -7
0 0 0

 a가 쭉 가주는게 뽀인뜨!!!!!!!
 a b c 따로따로 하나씩 하는게 더 쉬울듯 아마... 필기 할 수 있으면 더 편하겠다.

*/