#include <stdio.h>

void main12_6(int argc, char *argv[]) // 12_6 // cmd â���� ������ ������ '����� �����ʰ� ����'���� ������
// ����� �ȵ��ư�.
// int char �̰� �߿��� ����. ���� �Ű����� �̸��� �׳� ���.
// int char �ڷ����ϰ� ������ �ٲٸ� �ȵ�!!!!!
{
	int i;
	printf("cmd��ɹ��ڿ� ���� argc = %d\n", argc);
	// argv[0][0] = 'X'; // �̷��� �տ� ���� �ٲ�. // ��� ���ڿ� �ƴ�
	for (i = 0; i < argc; ++i)
		printf("��ɹ��ڿ� %d = %s\n", i, argv[i]); // �� ���ڿ��� "'������ڿ� �ƴϰ�"" ���� ������.
}

/*
C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug>Class_Project1 A1 A2 A3
cmd��ɹ��ڿ� ���� argc = 4
��ɹ��ڿ� 0 = Class_Project1
��ɹ��ڿ� 1 = A1
��ɹ��ڿ� 2 = A2
��ɹ��ڿ� 3 = A3

C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug>
*/

// (1) �� ó���� ���� ���� ��ġ �˱� ���ؼ� ����� ���� �ʰ� ���� ��������
// �������� ��ġ : C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug\Class_Project1.exe
// (2) �޸����� �ϳ� ����.(�ѱ��� ��ο� �ִ� ��� �� �� ���ư� �� ������)
// (3) �޸��忡 ������ ���� --> cd C:\Users\User-Pc\source\repos\Codes-for-Practice2\Class_Project1\x64\Debug
// cmd
// (4) �޸��� ������ �� EXE.bat�� ��� ���� ���� ����.
// (5) EXE.bat�� ���콺 ����Ŭ�� �����Ű�� (dirġ�� ���������� ��������.)
// (6) �ڵ���... �����Ű�� ���� �ٽ� ���常 �ϼ�.
// (7) cmd â���� �����Ű��.
// Class_Project1.exe ARGV1 ARGV2

// ������ ����� �в����� ���� �Ű� ���ð� �׳� �ڵ����� �Ͻø� �Ǽ�.