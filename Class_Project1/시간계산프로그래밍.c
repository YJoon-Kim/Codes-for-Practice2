#include <stdio.h>

// �ð� ���ϱ� ��� ���α׷���

struct time {
	int hour, min, sec;
};

typedef struct time Time;
typedef struct time* TimeP;

int Time2Sec(Time t) // �ð� ����ü�� ��°�� ����޾� ���� Sec�� ������ ����
{
	return t.hour * 3600 + t.min * 60 + t.sec; // 1�ð� 3600�� 1�� 60��
}

Time Sec2Time(int sec)
{
	Time result;
	result.sec = sec % 60; // 60���� ���� ������
	result.hour = sec / 3600;
	result.min = (sec - result.sec - result.hour * 3600) / 60; // ���ٲ� �͵� �� 60���� ���� ��
	return result; // ����ü�� ��°�� ����.
}

/*
(1) �Լ� ��°�� ����
(2) ������ �ּ� �����ͼ� ���� ���ϱ�
*/

Time addTime(Time a, Time b)
{
	int sec;
	Time result; // ������
	// �ð��� �ʷ� �ٲ� �ʸ� ���� �� �ٽ� �ð����� ��ȯ..?
	sec = Time2Sec(a) + Time2Sec(b);
	result = Sec2Time(sec);

	return result;
}

void main14_2() // 14_2
{
	Time a = { 1,25,49 }, b = { 2,48,45 }, result; // result�� ���� ������
	result = addTime(a, b);
	printf("��� : %d�� %d�� %d��\n", result.hour, result.min, result.sec);
}