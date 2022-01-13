#include <stdio.h>

void fG1_20(char strX[10]) { strX[0] = 2 + 'a'; } //프로그램 실행에 대한 설명도 가능
void mainG1_20() { char* str = "B "; fG1_20(str); printf("%c\n", str[0]); } // 빌게이츠 : 상수 문자열을 건드려??? 죽어.

// 답 : 코드 박살남.