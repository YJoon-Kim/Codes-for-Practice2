/*

int ivar, global, local; //�۷ι����� ���α׷� ��ü�� �̸��� �˷��� �� ���� �ʱ�ȭ �� 0  local�� �̸��� local/global��
//extern int gono;
void main7_3(int local, char** a) // static �� �� �Ȼ�. global �� �� �Ⱥ����� ����.
{ // �� int local �� ��������. ���ڸ��� ����� �Ͱ� ����
    int local1; //������� �ʱ�ȭ. ���� local�� ������ ������� �ʱ�ȭ. MS�� �ʱ�ȭ �ȵȰ� ���� ����./����� ���� ��ư �ʼ�
    int ivar;
    { int local; // �� ������ �̸��� �˷���. ���� ������ ��.. �ʱ�ȭ �� ������ 
    ivar = local; // ������ �̸��� ������ ivar ��밡��. //���� ������ ����� local.
    { int local; // �� local..  ��������. �� �Ͱ� ���� �ٸ�.
    local = 1;
    }  //} �������Ƿ� �� local �滩.
    } //} �������Ƿ� local �滩.
}

*/