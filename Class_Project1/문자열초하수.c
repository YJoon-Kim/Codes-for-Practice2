#include <stdio.h> �⼮#1 2306

void mystrcpy_h(char ori[1], char copy[1])
{
    int i;
    for (i = 0; copy[i] = ori[i]; ++i);
    // �۵� ���� �����ϱ�
}

void mystrcpy_m(char ori[1], char copy[1]) // array�ƴ�. ��ǻ� �������̳� array���� ����ϼ�
{
    int i;
    for (i = 0; ori[i] != 0; ++i) // ori[i]!= 0  ==== ori[i]
        copy[i] = ori[i]; // (i=0) copy[0] = ori[0]; (i=1) copy[1] = ori[1]; 
    // (i=2 �ϋ�).. ori[2]==0�� �̶� ������. for���� ����
    copy[i] = 0; // �������� �η� �������ϱ�. // ���ϴ� ho�������������������������̿�?+?
}

void mystrcpy_LOW(char ori[1], char copy[1]) // array�ƴ�. ��ǻ� �������̳� array���� ����ϼ�
{
    copy[0] = ori[0];
    copy[1] = ori[1]; // ���α׷��� ���� �ƴ�. ����
    // copy[2] = 0; // �������� �η� �������ϱ�. // ���ϴ� ho�������������������������̿�?+?
}

char main8_4() // ���ڿ� ��ĵ // 8_4
{
    char ori[] = "ho", copy[5]; //ori copy �� array��
    //mystrcpy_LOW(ori, copy); // �ּҸ� ���� ���� ����.
    mystrcpy_m(ori, copy); // �ּҸ� ���� ���� ����.
    printf("%s\n", copy); // ����Ʈ�� �γ������� ���� ���� ������ ����. ��¼�ٰ� ���߿� �� ��������� ��� ����
}