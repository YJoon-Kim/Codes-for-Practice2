#include <stdio.h>// stdio.h�� ȭ���� �����־� 

// stdio.h std standad ǥ�� io input output ����� 

void main1_5() // main() �Լ� ������ void ��ȿ �� �ƹ��͵� �������� �ʴ�  �Լ� // main1_5

// int main()�� int ���� ��ȯ�ϴ� y=f(x) ���� �Լ�
// c �� ���� �Լ�. ���� ������ �Լ�

{

    int kor, math, eng, sum;

    double avg; // ���� �� ���ϴ� ��. �߰� ��� ��� ����. �ι� ���� �Ǽ�. // ����/���� = ����

    char name; //���� 1�� 

    scanf("%c %d %d %d", &name, &kor, &math, &eng);// �Է� ��ĵ�߱� lf����.. --> ����
    // �Է� ���� : K 100 100 100

    // �ּ� �˷���� �ù� ��޵� & �ּ� �˾Ƴ��� ������ 

    // �̸��� �̴ϼ� ���ڸ� �Է°���  �� K

    sum = kor + math + eng; // ������ ���ؼ� sum�̶� ������ ���� ���� ������ ����

    avg = sum / 3; // ��հ�� // ����/���� = ���� // ����/�Ǽ� = �Ǽ�(���質��)

    printf("%c %d %d %d = %d, avg=%f\n", name, kor, math, eng, sum, avg); // �μ�==���

}