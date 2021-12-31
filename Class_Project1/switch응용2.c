#include <stdio.h>

void main5_1() // 5_1
{
	char ch;
	for (;;)
	{
		scanf("%c", &ch); // 입력시 엔터키도 입력됨. 엔터 없이 작동하는 입력.. -> 파는 분. // queue 순서대로 b enter c enter q enter

		// if (ch == '\n') continue;

		switch (ch) // () 안에 실수 안됨. char int 만 가능
		{
		case ('b' || 'c') : break; // 조건식을 넣은 수는 있으나 뭔 코딩인지 본인이 정신차리셔.
		case 2: break; // 위 엉터리될 가능성 매우 높음. 왜? 조건결과 0 아니면 1 일것.
		case 'c': printf("cruise mode\n"); break; // break 안하면 break 나올 때 까지 계속 수행
		case 'b': printf("battle mode\n"); break; // break 안하면 break 나올 때 까지 계속 수행
		case '\n': printf("당연 엔터키도 들어옴\n"); break; // break 안하면 break 나올 때 까지 계속 수행
		case 'q': printf("종료함\n"); break;
		default: printf("잡것 입력함\n"); break; // switch만 깸 // 마지막이면 폼임. 없어도 됨.
		}

		if (ch == 'q') break;
	}
	return; // void는 상관 없음
}