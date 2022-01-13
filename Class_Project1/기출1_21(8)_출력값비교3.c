#include <stdio.h>

void fG1_21(char strX[10]) { printf("%d\n", strX); } //출력 나오는 것에 대한 설명도 가능
void mainG1_21() { char* str = "C "; fG1_21(str); }

// 답 : 출력이 뭐가 나올진 모르겠지만, 문자열 "C "가 들어있는 주소를 double type으로 프린트하셔.