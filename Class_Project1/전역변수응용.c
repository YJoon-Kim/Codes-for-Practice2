#include <stdio.h>

int ivar, global, local1; //�۷ι����� ���α׷� ��ü�� �̸��� �˷��� �� ���� �ʱ�ȭ �� 0  local�� �̸��� local/global��
//extern int gono;

void main7_3() // static �� �� �Ȼ�. global �� �� �Ⱥ����� ����. // 7_3
{ // �� int local �� ��������. ���ڸ��� ����� �Ͱ� ����
    int local1; //������� �ʱ�ȭ. ���� local�� ������ ������� �ʱ�ȭ. MS�� �ʱ�ȭ �ȵȰ� ���� ����./����� ���� ��ư �ʼ�
    int ivar;
    printf("%d %d\n", local1, ivar);
    {
        int local1 = 1; // �̷��� ���� local���� ������ �ع����� ���⼭ ������ ���� �� �ٽ� �� �ٱ��� �ʱ�ȭ �ȵ� ������ �ٲ�����.
        {
            ivar = local1; // ������ ivar�� �� ó�� �����ߴ� ivar�̱� ������ 1�� ������ ��.
            printf("%d %d\n", local1, ivar);
        }// �� ������ �̸��� �˷���. ���� ������ ��.. �ʱ�ȭ �� ������ 
         // ������ �̸��� ������ ivar ��밡��. //���� ������ ����� local.
        printf("%d %d\n", local1, ivar);
    }   // �� local..  ��������. �� �Ͱ� ���� �ٸ�.
    printf("%d %d\n", local1, ivar);
}  //} �������Ƿ� �� local �滩. //} �������Ƿ� local �滩.