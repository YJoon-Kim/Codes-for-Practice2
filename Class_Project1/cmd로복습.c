#include <stdio.h>

int main13_2(int argc, char *argv[]) // 13_2
{
	int i;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++) printf("%s\n", argv[i]);
	if (argv[1][0] == '/' && argv[1][1] == '?')
		printf("���ʹ޶��? �� ������?\n");
	argv[1][1] = 'X'; // ���� ��. argv�� ��� ���ڿ� �ƴ�.
	// ���� ������� ���������� �� �޸𸮰�����. ���ĵ� ������.

	for (i = 0; i < argc; i++) printf("%s\n", argv[i]);
}