#include <stdio.h>

// switch 연습 battle 모드

int main() // 4_8
{
	char in;

	// 기본 if문
	for (;;) // 전기 다 쓸때 까지 돌려.. 무조건 외우자.. 반복안하면 시시해져서.
	{
		scanf("%c", &in);
		if (in == '\n') continue; // continue는 밑을 완전히 제끼고 새로 반복 돌림. // 이거 없을 때 왜 else에 있는 printf가 실행됨? 이해 X
		if (in == 'b') printf("battle 모드\n");
		else if (in == 'c') printf("cruise 모드\n");
		else if (in == 'q')
		{
			printf("종료하자고? 알았어\n");
			break;
		}
		else printf("뭔 모드야? 뭔 키야? 엔터인듯\n");
	}

	// switch문
	for (;;)
	{
		scanf("%c", &in);
		if (in == '\n') continue;
		switch (in)
		{
		case 'b': printf("battle 모드\n"); break; // 이 break는 switch를 깨는 break임.
		case 'c': printf("battle 모드\n"); break; // 이 break는 switch를 깨는 break임.
		case 'q': printf("종료하자고? 알았어\n"); break; // 이 break는 switch를 깨는 break임.
		default: printf("뭔 모드야? 뭔 키야? 엔터일듯\n"); break; // 여기 break 없어도 됨. 폼으로 넣음.
		}
		if (in == 'q') break;
	}
}