#include <stdio.h>// stdio.h�� ȭ���� �����־� 

// stdio.h std standad ǥ�� io input output ����� 

void main() // main() �Լ� ������ void ��ȿ �� �ƹ��͵� �������� �ʴ�  �Լ� 

// int main()�� int ���� ��ȯ�ϴ� y=f(x) ���� �Լ�
// c �� ���� �Լ�. ���� ������ �Լ�

{

    double kor, math, eng, sum, avg; // ���� �� ���ϴ� ��. �߰� ��� ��� ����. �ι� ���� �Ǽ�.

    char name; //���� 1�� 

    scanf("%c %lf %lf %lf", &name, &kor, &math, &eng);// �Է� ��ĵ�߱� lf����.. --> ����

  // �ּ� �˷���� �ù� ��޵� & �ּ� �˾Ƴ��� ������ 

 // �̸��� �̴ϼ� ���ڸ� �Է°���  �� K

    sum = kor + math + eng; // ������ ���ؼ� sum�̶� ������ ���� ���� ������ ����

    avg = sum / 3.0; // ��հ�� 

    printf("%c %f %f %f = %f, avg=%f\n", name, kor, math, eng, sum, avg); // �μ�==���

}