#include <stdio.h>

void main5_1() // 5_1
{
	char ch;
	for (;;)
	{
		scanf("%c", &ch); // �Է½� ����Ű�� �Էµ�. ���� ���� �۵��ϴ� �Է�.. -> �Ĵ� ��. // queue ������� b enter c enter q enter

		// if (ch == '\n') continue;

		switch (ch) // () �ȿ� �Ǽ� �ȵ�. char int �� ����
		{
		case ('b' || 'c') : break; // ���ǽ��� ���� ���� ������ �� �ڵ����� ������ ����������.
		case 2: break; // �� ���͸��� ���ɼ� �ſ� ����. ��? ���ǰ�� 0 �ƴϸ� 1 �ϰ�.
		case 'c': printf("cruise mode\n"); break; // break ���ϸ� break ���� �� ���� ��� ����
		case 'b': printf("battle mode\n"); break; // break ���ϸ� break ���� �� ���� ��� ����
		case '\n': printf("�翬 ����Ű�� ����\n"); break; // break ���ϸ� break ���� �� ���� ��� ����
		case 'q': printf("������\n"); break;
		default: printf("��� �Է���\n"); break; // switch�� �� // �������̸� ����. ��� ��.
		}

		if (ch == 'q') break;
	}
	return; // void�� ��� ����
}