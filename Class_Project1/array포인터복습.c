#include <stdio.h> �⼮#1 2306
#include <math.h>

void nvec(double v[100000000], double result[]) //void? ����� 2 ���� �ѹݿ� �ѱ�� ����.
{ // �ѱ��ʿ� ���� ���� : �� ���� �Ƿ��ؼ� �츮�� �ּҸ� �����ü�� �����������. //double v[100000000] ��������.
    double size; //local �̶� ������ �������
    size = sqrt(v[0] * v[0] + v[1] * v[1]); // sqrt(2) - vectorũ��
    result[0] = v[0] / size;
    result[1] = v[1] / size;
}

char main8_1() // 8_1
{
    double vec[] = { 1., 1. }, norm_vec[2]; // ���� ����.. vec norm_vec array��� �Ҹ�. �������� ����Ʈ
    // vec norm_vec array �ּ� �����. �ǵ帮�� ����.
    //vec++; // �̷��� ���ϴ� ����... 3++ �� ������ ����
    nvec(vec, norm_vec); //main() ������ �ּҸ� ������� ����
    printf("%f %f\n", norm_vec[0], norm_vec[1]);
}