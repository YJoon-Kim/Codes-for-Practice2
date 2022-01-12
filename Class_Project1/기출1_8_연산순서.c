#include <stdio.h>

void main()
{
	int a = 2; int b = 3; int c = 7;
	a = --b + c++;

	printf("%d %d %d\n", a, b, c);
}


/*

<내 답안>
10 2 8

<실제 답안>
9 2 8

*/

/*
<오답>
 아마도 c++연산이 할당이 되고 되는가부다... 신기하다.

*/