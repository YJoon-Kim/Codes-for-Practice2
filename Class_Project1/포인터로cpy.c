#include <stdio.h>

void mystrcpyHPointer(char ori[1], char* copy)
{
	// ori�� "ho"�ּ� �������. "ho"�� ��� ���ڿ���. �̰� ���� �õ��ϸ� ���Ӵ���.
	// name�� �ڱ� ��. 10�� ����. ���� 10�� ���� ����. "" �صּ� ���� 0���� �ʱ�ȭ ��.
	*copy = *ori; // ori�� h ���ڰ� copy�� �����.
	copy++, ori++; // �ּ� ��ĭ�� �ø�. ++�ϴ� ori���� 0�� ���� ����Ŵ
	*copy = *ori; // ori�� o ���ڰ� copy�� �����.
	copy++, ori++; // �ּ� ��ĭ�� �ø�. ++�ϴ� ori���� 0�� ���� ����Ŵ
	*copy = *ori; // ori�� NULL ���ڰ� copy�� �����.

	// for ���ǹ����� *copy = *ori; (1) �ϴ� �� ���� (2) ������ �Ǻ� --> 0�̶� ���� (3) for ���� ����.
	// �ϴ� ���ڿ� �������� ���� ����� �����̹Ƿ� ���̻� �� �� ����. ���ư���. return;
	// for (; *copyHere = *ori; ++ori, copyHere++);
}

void main11_5() // 11_5
{
	char name[10] = "";
	mystrcpyHPointer("ho", name);
	printf("%s\n", name);
}