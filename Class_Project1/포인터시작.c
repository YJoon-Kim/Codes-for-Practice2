#include "stdio.h"

void main() // 10_4
{
	int a = 2022; // 별명 a란 변수 선언. 초기화로 a 집에 2022 넣음.
	int* pA = &a; //int *pA ; pA는 포인터 변수임 선언. 초기화는 별명a 집의 주소 &a==a1dda9bc로 초기값 넣음.
	printf("%d\n", a); //별명 a란 집 내용을 찍어봐
	printf("%d\n", *pA); // pA 집에 사는 것은 주소 a1dda9bc 임. 이 주소 따라가 보니 주소 a1dda9bc의 집에 사는 내용인 2022임
	// 포인터 변수로 내용 찍으려면 *pA로
	printf("%x %x\n", &a, pA); // pA 집에 사는 것은 주소 a1dda9bc임
	printf("pA address=%x \n", &pA); //pA 란 별명을 가진 변수의 집(공간) 주소는 a1dda9b0 임
}

/*
2022
2022
f654f874 f654f874
pA address=f654f898

C:\Users\82106\source\repo\Codes-for-Practice2\Class_Project1\x64\Debug\Class_Project1.exe(프로세스 6960개)이(가) 종료되었습니다(코드: 0개).
이 창을 닫으려면 아무 키나 누르세요...
*/

/*
localhost / lab / graphics / jhpark / hw1.86 : !a.

a.out

2020

2020

a1dda9bc a1dda9bc

pA address = a1dda9b0
*/

// char *a = "ABCDE"; 가능하려면 메모리 할당 해야함.