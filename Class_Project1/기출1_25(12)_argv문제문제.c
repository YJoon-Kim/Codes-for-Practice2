#include <stdio.h>

void mainG1_25(int argc, char* argv[])
{
	*(*(argv + argc - 3) + 1) = 'F'; *(*(argv + argc - 3) + 3) = 0; // 0�� ° ���ڿ��� ��ħ
	printf("%s\n", (*(argv + argc - 3) + 0)); // �ּ� �ְ� %s �ϸ� ���ڿ� ����. Class_Project1 --> CFa // 0�� ° ���ڿ��� ���.
	printf("%s\n", (*(argv + argc - 1) + 1)); 
	printf("%s\n", (*(argv + argc - 2) + 2));
}

// �� : aF
// ������ ������ ���Ⱦ�...