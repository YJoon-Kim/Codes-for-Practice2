#include <stdio.h>

void something(int a) // ���� a �� main a �� ���� �����. �̰� ���ڳ�...
{ 
	printf("%d %x\n", a, &a);
} 

void main14_3() // 14_3
{ 
	int a = 1; 
	something(a); 
	printf("%d %x\n", a, &a);
}