#include <stdio.h>

int mystrcmpD_h(char a[], char b[])
{
	int i; // array �� ȣ�� ���󰡴� index ������ ���� ���
	for (i = 0; a[i] && a[i] == b[i]; i++);;; // ��� ���� �����ϸ� �ƹ��� �ϵ� �������� ++i �ϸ鼭 �񱳸�
	// for ���� ���� (1) �Ѵ� �ο� ��������. (2) �񱳽� ���� ���� --> �ѹ濡 ó���� �ڵ�??
	return a[i] - b[i];
}

int mystrcmpD(char a[], char b[]) // ���ڿ��� ���� �����ϸ� 0�� ����(���� 0��) / �ٸ��� ascii code���� ��ŭ ����
{ // char a[] / char b[] �� ������ ���� ��!
	int i = 0;
	if (a[0] && a[0] == b[0]) i++; else return a[0] - b[0]; // a[0]�� NULL �ƴϰ�, �����ϸ� i++ 1�� ����� �ƴϸ� ���� ������ ����.
	if (a[1] && a[1] == b[1]) i++; else return a[1] - b[1]; // a[1]�� NULL �ƴϰ�, �����ϸ� i++ 2�� ����� �ƴϸ� ���� ������ ����.
	// a-c������ �� ���� ���ؼ� �ɸ��Ƿ� a[1] - c[1] = 'o' - 'O' �����ع���
	if (a[2] && a[2] == b[2]) i++; else return a[2] - b[2]; // a[2]�� NULL �̶� ������!! return �� - �� = 0 / 0�� ����
}

char main9_2() // 9_2
{
	char a[] = "ho", b[] = "ho", c[] = "hOnGikU"; // a b c �� ��� array
	printf("%d %d\n", mystrcmpD_h(a, b), mystrcmpD_h(a, c) ); // a-b , a-c �ּҸ� ����
	printf("%d %d\n", mystrcmpD(a, b), mystrcmpD(b, c)); // a-b , a-c �ּҸ� ����
}