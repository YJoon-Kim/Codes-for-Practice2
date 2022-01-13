#include <stdio.h>

void something(int a) // 여기 a 랑 main a 랑 완전 딴사람. 이건 쉽자나...
{ 
	printf("%d %x\n", a, &a);
} 

void main14_3() // 14_3
{ 
	int a = 1; 
	something(a); 
	printf("%d %x\n", a, &a);
}