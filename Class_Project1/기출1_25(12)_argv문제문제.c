#include <stdio.h>

void mainG1_25(int argc, char* argv[])
{
	*(*(argv + argc - 3) + 1) = 'F'; *(*(argv + argc - 3) + 3) = 0; // 0번 째 문자열만 고침
	printf("%s\n", (*(argv + argc - 3) + 0)); // 주소 주고 %s 하면 문자열 나옴. Class_Project1 --> CFa // 0번 째 문자열만 출력.
	printf("%s\n", (*(argv + argc - 1) + 1)); 
	printf("%s\n", (*(argv + argc - 2) + 2));
}

// 답 : aF
// 완전히 이해해 버렸어...