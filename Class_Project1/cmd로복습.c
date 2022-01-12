#include <stdio.h>

int main13_2(int argc, char *argv[]) // 13_2
{
	int i;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++) printf("%s\n", argv[i]);
	if (argv[1][0] == '/' && argv[1][1] == '?')
		printf("도와달라고? 뭘 도와줘?\n");
	argv[1][1] = 'X'; // 수정 됨. argv는 상수 문자열 아님.
	// 내가 마음대로 수정가능한 내 메모리공간임. 고쳐도 무관함.

	for (i = 0; i < argc; i++) printf("%s\n", argv[i]);
}