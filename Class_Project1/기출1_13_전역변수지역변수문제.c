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

<��>
9 -6 -7
9 3 4
-858993460 3 3
4 -858993460 -858993460
4 3 4
4 -6 -7
0 0 0

 a�� �� ���ִ°� ���ζ�!!!!!!!
 a b c ���ε��� �ϳ��� �ϴ°� �� ����� �Ƹ�... �ʱ� �� �� ������ �� ���ϰڴ�.

*/