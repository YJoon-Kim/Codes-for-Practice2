#include <stdio.h>

// input[i] == *(input + i)

void mystrPointer(char* ori, char copyHere[])
{
	for (; *copyHere = *ori; ++ori, copyHere++);
}

void main11_4() // 11_4
{
	char name[10] = "ȫ�浿"; // �̸� ������ ������ �߿�. ���� ȫ�浿���� �ް����� ����.
	mystrPointer("�迬��", name);
	printf("%s\n", name);
}

/*

#include "stdio.h" �⼮ #2 0951 �⼮ #3 0029  ���� 14��(��) ����2��. �� �ڵ�..

void mystrcpyHPointer(char ori[1], char copyHere[100000]) // ����� �����ص� ���� �����͵���. array���� �Ұ�����
{ // ��� pointer ����  // input + 1 ���  input++ �� i�� �� * ���뺸��
	for (; *copyHere = *ori; ++ori, copyHere++ );;;;;;;;;;; // ���ڿ� ������ �� ���� �������Ǿ� for ��
} // ++ �����ؼ� ���� ���� ��, �� ++.. �� �ϴ� ������ ���뺸�� ���̶� ������/for ��

void mystrcpyLPointer(char* ori, char copyHere[]) //input[i] == *(input+i)    // input �ּ�  (input+i) �ּ�+iĭ �ö� ����.// *�ּ��� ����
//== input + 1 ���  input++ �� i�� �� * ���뺸��
{
	//ori[i] == *(ori+i)    copyHere[i] == *(copyHere+i)
	for (; *ori != NULL; ++ori ) // ���ڿ� ������ �� ���� �������Ǿ� for ��
		*copyHere = *ori;
	*copyHere = NULL; // �η� ������ ���⼭ �ؾ�. ���ϸ� ����.
}

void mystrcpyPLUS(char* ori, char copyHere[])
{
	int i; //ori[i] == *(ori+i)    copyHere[i] == *(copyHere+i)
	for (i = 0; ori[i] != NULL; ++i) // ���ڿ� ������ �� ���� �������Ǿ� for ��
		*(copyHere + i) = *(ori + i);
	copyHere[i] = NULL; // �η� ������ ���⼭ �ؾ�. ���ϸ� ����.
}

void mystrcpyHPLUS(char ori[1], char copyHere[100000]) // ����� �����ص� ���� �����͵���. array���� �Ұ�����
{ // ���+ ����
	int i; 	for (i = 0; *(copyHere + i) = *(ori + i); ++i);;;;;;;;;;; // ���ڿ� ������ �� ���� �������Ǿ� for ��
}

void mystrcpyH(char ori[1], char copyHere[100000]) // ����� �����ص� ���� �����͵���. array���� �Ұ�����
{ // �������
	int i; 	for (i = 0; copyHere[i] = ori[i]; ++i);;;;;;;;;;; // ���ڿ� ������ �� ���� �������Ǿ� for ��
}

void mystrcpy(char ori[1], char copyHere[100000]) // ����� �����ص� ���� �����͵���. array���� �Ұ�����
{ // �ϼ�����
	int i;
	for (i = 0; ori[i] != NULL; ++i) // ���ڿ� ������ �� ���� �������Ǿ� for ��
		copyHere[i] = ori[i];
	copyHere[i] = NULL; // 	// �η� ������ ���⼭ �ؾ�.���ϸ� ����.
}

void main()
{
	char name[10] = "ȫ�浿"; // �̸������� ������ �߿�. ���� ȫ�浿���� �򰥸��� ����.
	mystrcpy("����̸�", name); name[0] = NULL; //���ڿ� �����߸���
	mystrcpyLPointer("����̸�", name);
	printf("%s\n", name);
}

*/