#include <stdio.h>

// p->name == (*p).name ����
// 23_2������ �������.

struct student {
	char name[10];
	int kor, eng, math, sum; // ���� �˾Ƽ� ����
	double avg;
};

// �׳� �տ� �ִ� �ſ� �Ȱ���, ����ü�� �׳� ����� �þ �� ��.

void AvgNoReturnFunc(struct student *x) // y = f(x) ���� �ƴ�!!!.
{ // ��� ������� main �ٷ� ���� -> ����ü ũ�Ⱑ �ӵ��� ���� X
	// sturct student x local ������. main�� ����ü ���� �ּҰ� ������� ������
	x->sum = x->kor + x->eng + x->math; // �����Ͷ� ��� ������ '->'��
	x->avg = x->sum / 3.0; // ����/���� = ����
	// """����� main�� �ִ� �� �ּ� sum avg��"""
}

struct student AvgReturnFunc(struct student x) // y = f(x) ����.
{ // ��°�� �ϱ� ������ ����ü�� ũ�� ������.
	/* �տ� struct student�� �ణ type ���� ���� */
	// sturct student x local ������. main���� �ܼ��� ���� �������. �� ��.
	x.sum = x.kor + x.eng + x.math;
	x.avg = x.sum / 3.0; // ����/���� = ����
	// """����� main�� �ִ� �� �ּ� sum avg�� ���� �ٸ�!!!!!"""
	return x; // ���縦 ����.
}

void main13_4() // 13_4
{
	struct student st[3] = { { "ȫ1", 100,100,100, 0, 0.0 }, { "ȫ2", 90,90,90 },
	{ "ȫ3", 80,80,80 } }; // �ʱ�ȭ... ����ppt23��..? // ������ ����ִ� ������ 0����!! ������ �ƴ�!
	
	int i;
	for (i = 0; i < 3; ++i)
	{
		printf("�Լ�ȣ���� %d %.2f\n", st[i].sum, st[i].avg); // �ʱ�ȭ 0���� �Ǿ�����.
		AvgNoReturnFunc(st + i); // &st[i] == st + i; // main�� ����Ǿ��ִ� �ּҸ� ������ ����. ���ٷ�
		// st[i] = AvgReturnFunc(st[i]); // """��°��""" ���� - """��°��""" y�� �Ѱ� ���� y=f(x) ����.
		printf("%s %d %d %d %d %.2f\n\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].sum, st[i].avg);
	}
}

// ����5 �˶��ð� �̹��� 1�� ���� Ȯ�� �ſ� ����!!!!