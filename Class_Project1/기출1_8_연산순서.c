#include <stdio.h>

void main()
{
	int a = 2; int b = 3; int c = 7;
	a = --b + c++;

	printf("%d %d %d\n", a, b, c);
}


/*

<�� ���>
10 2 8

<���� ���>
9 2 8

*/

/*
<����>
 �Ƹ��� c++������ �Ҵ��� �ǰ� �Ǵ°��δ�... �ű��ϴ�.

*/