#include <stdio.h>

void fG1_20(char strX[10]) { strX[0] = 2 + 'a'; } //���α׷� ���࿡ ���� ���� ����
void mainG1_20() { char* str = "B "; fG1_20(str); printf("%c\n", str[0]); } // �������� : ��� ���ڿ��� �ǵ��??? �׾�.

// �� : �ڵ� �ڻ쳲.