#include <stdio.h>

// switch ���� battle ���

int main() // 4_8
{
	char in;

	// �⺻ if��
	for (;;) // ���� �� ���� ���� ����.. ������ �ܿ���.. �ݺ����ϸ� �ý�������.
	{
		scanf("%c", &in);
		if (in == '\n') continue; // continue�� ���� ������ ������ ���� �ݺ� ����. // �̰� ���� �� �� else�� �ִ� printf�� �����? ���� X
		if (in == 'b') printf("battle ���\n");
		else if (in == 'c') printf("cruise ���\n");
		else if (in == 'q')
		{
			printf("�������ڰ�? �˾Ҿ�\n");
			break;
		}
		else printf("�� ����? �� Ű��? �����ε�\n");
	}

	// switch��
	for (;;)
	{
		scanf("%c", &in);
		if (in == '\n') continue;
		switch (in)
		{
		case 'b': printf("battle ���\n"); break; // �� break�� switch�� ���� break��.
		case 'c': printf("battle ���\n"); break; // �� break�� switch�� ���� break��.
		case 'q': printf("�������ڰ�? �˾Ҿ�\n"); break; // �� break�� switch�� ���� break��.
		default: printf("�� ����? �� Ű��? �����ϵ�\n"); break; // ���� break ��� ��. ������ ����.
		}
		if (in == 'q') break;
	}
}