#include <stdio.h>
#include <math.h> // �ȳ����� ���� // �� ��� �϶��..
#define M_PI 3.141592 // M_PI�� �� �ڵ��߿� ������ ������ 3.141592�� ��ü

// 45 �� �� ����غ��� radian��
// linux ������ cc c.c - lm / - lm ������ �ȵ�. ����m ������ link ����...!
// PI ��� M_PI ���

float main4_4()
{
	float degree = 45.0, radian = degree * M_PI / 180.0;
	printf("cos=%.4f, sin=%.4f, tan=%.4f\n", cos(radian), sin(radian), tan(radian));
}