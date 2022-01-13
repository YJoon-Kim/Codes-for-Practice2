#include <stdio.h>

struct time {
	int hour, min, sec;
};

typedef struct time Time;
typedef struct time* TimeP;

int Time2Sec_P(Time t) // �ð� ����ü�� ��°�� ����޾� ���� Sec�� ������ ����
{
	return t.hour * 3600 + t.min * 60 + t.sec; // 1�ð� 3600�� 1�� 60��
}

Time Sec2Time_P(int sec)
{
	Time result;
	result.sec = sec % 60; // 60���� ���� ������
	result.hour = sec / 3600;
	result.min = (sec - result.sec - result.hour * 3600) / 60; // ���ٲ� �͵� �� 60���� ���� ��
	return result; // ����ü�� ��°�� ����.
}

void addTimePointer(struct time a, Time b, TimeP result) // �����͸� ���ϸ� ��� ����� �Ѿ �� ������. �׳� ������ �ع����� �׳� �� �Լ����� ������.
{
	int sec;
	// �ð��� �ʷ� �ٲ� �ʸ� ���� �� �ٽ� �ð����� ��ȯ
	sec = Time2Sec_P(a) + Time2Sec_P(b);
	*result = Sec2Time_P(sec);
}

void main14_4() // 14_4
{
	Time a = { 1,25,49 }, b = { 2,48,45 }, result; // result�� ���� ������
	addTimePointer(a, b, &result);
	printf("��� : %d�� %d�� %d��\n", result.hour, result.min, result.sec);
}