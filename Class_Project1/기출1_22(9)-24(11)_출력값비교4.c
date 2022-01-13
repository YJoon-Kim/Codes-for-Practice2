#include <stdio.h>

void addG1_22(int* a) { printf("%d %d\n", a, &a); } void mainG1_22() { int a = 1; addG1_22(&a); printf("%d %d\n", a, &a); }

// 22(9)번답 : a = 1 / 주소 값 다름.
// 
// 23(10)번 답 : a = 1 / 주소 값 다름. // a = 1인 이유는 함수에서 받을 때 주소로 받은게 아니라
// int로 받아서 그런가? 어렵네...
// 
// 24(11)번 답 : 동일 / 주소 다름.