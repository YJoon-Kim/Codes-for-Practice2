#include "stdio.h"

void main() // 10_4
{
	int a = 2022; // ���� a�� ���� ����. �ʱ�ȭ�� a ���� 2022 ����.
	int* pA = &a; //int *pA ; pA�� ������ ������ ����. �ʱ�ȭ�� ����a ���� �ּ� &a==a1dda9bc�� �ʱⰪ ����.
	printf("%d\n", a); //���� a�� �� ������ ����
	printf("%d\n", *pA); // pA ���� ��� ���� �ּ� a1dda9bc ��. �� �ּ� ���� ���� �ּ� a1dda9bc�� ���� ��� ������ 2022��
	// ������ ������ ���� �������� *pA��
	printf("%x %x\n", &a, pA); // pA ���� ��� ���� �ּ� a1dda9bc��
	printf("pA address=%x \n", &pA); //pA �� ������ ���� ������ ��(����) �ּҴ� a1dda9b0 ��
}

/*
2022
2022
f654f874 f654f874
pA address=f654f898

C:\Users\82106\source\repo\Codes-for-Practice2\Class_Project1\x64\Debug\Class_Project1.exe(���μ��� 6960��)��(��) ����Ǿ����ϴ�(�ڵ�: 0��).
�� â�� �������� �ƹ� Ű�� ��������...
*/

/*
localhost / lab / graphics / jhpark / hw1.86 : !a.

a.out

2020

2020

a1dda9bc a1dda9bc

pA address = a1dda9b0
*/

// char *a = "ABCDE"; �����Ϸ��� �޸� �Ҵ� �ؾ���.