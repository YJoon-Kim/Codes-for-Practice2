#include <stdio.h>

void mystrcpy_3(char ori[1], char copyHere[100000]) // ����� ��� �����͵�. array ���� �Ұ�����.
{ // �� �ڸ��� array �����ϱ� ��.
	int i;
	for (i = 0; ori[i]; ++i) // ���ڿ� ������ NULL ���� ������ �Ǿ� for ��
	{
		copyHere[i] = ori[i];
	}
	copyHere[i] = NULL;
}

void main11_1() // 11_1
{
	char name[10] = "ȫ�浿"; // �̸� ������ ������ �߿�. ���� ȫ�浿���� �ް����� ����.
	mystrcpy_3("�迬��", name);
	printf("%s\n", name);
}