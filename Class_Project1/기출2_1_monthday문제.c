#include <stdio.h>

int atoi(char*); // char를 int로 변환해주는 역할.

void monthday(char* str, int* month, int day[]) // 수업시간에 만든 것이라고 가정하고 사용하셔. 원리는 생각하지 마셔.
{
	*day = atoi(str + 2);
	str[2] = 0; // *(str + 2) = 0; // 3번째 자리 널로 막기. / '0'이랑 0 이랑은 다름. '0'은 아스키 코드로 ??이고 0은 아스키로 0(NULL)임.
	*month = atoi(str);
	// printf("%s\n", str);
}

int mainG2_1()
{
	int month, day; char str[10] = "1209"; // char *str 이런거 물어보심. --> 상수 문자열 건드리면 죽임을 당하셔. --> 공중화장실을 우리집으로 만드는 수준.
	// 물론 문자열이 array로 저장됨. - array는 내 공간, 내 빌딩이라 수정 가능해요.!!!
	// 3++ 이 수준. 3=30 이런거랑 같은 수준. 변수가 아니라고 바보야;.
	monthday(str, &month, &day);
	printf("%d %d %c%c%c%c%c\n", month, day, str[0], str[1], str[2], str[3], str[4]);
	return 0;
}

// 베터리 폭발하는 문제 내심.(char *str 이런거 물어보심. --> 상수 문자열 건드리면 죽임을 당하셔.) 이런거...?