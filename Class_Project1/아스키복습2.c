#include <stdio.h> // �⼮#1 3756 ����ȫ�� ����� ������ �����Ÿ�

char main4_1() // ascii code�� ����.. �ڵ� ������� �Ǿ�����
{
    char vA = 'A'; //���� ���Ҽ� �ִ� ��. ������� ���� vA
    char v0 = '0'; //���� ���Ҽ� �ִ� ��. ������� ���� v0
    printf("%c A=%c %c %c %c %c %c %c %c %c %c\n",
        vA - 1, vA + 0, vA + 1, vA + 2, vA + 3, vA + 4, vA + 5, vA + 6, vA + 7, vA + 8, vA + 9);
    printf("%c 0=%c %c %c %c %c %c %c %c %c %c\n",
        v0 - 1, v0 + 0, v0 + 1, v0 + 2, v0 + 3, v0 + 4, v0 + 5, v0 + 6, v0 + 7, v0 + 8, v0 + 9);
}