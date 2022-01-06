#include <stdio.h>

int mystrcmpD_h(char a[], char b[])
{
	int i; // array 방 호실 따라가는 index 변수로 많이 사용
	for (i = 0; a[i] && a[i] == b[i]; i++);;; // 계속 서로 동일하면 아무런 일도 하지말고 ++i 하면서 비교만
	// for 깨진 이유 (1) 둘다 널에 도착했음. (2) 비교시 차이 났음 --> 한방에 처리할 코딩??
	return a[i] - b[i];
}

int mystrcmpD(char a[], char b[]) // 문자열이 서로 동일하면 0을 리턴(차이 0임) / 다르면 ascii code차이 만큼 리턴
{ // char a[] / char b[] 는 포인터 변수 들!
	int i = 0;
	if (a[0] && a[0] == b[0]) i++; else return a[0] - b[0]; // a[0]이 NULL 아니고, 동일하면 i++ 1로 만들고 아니면 차이 리턴해 버려.
	if (a[1] && a[1] == b[1]) i++; else return a[1] - b[1]; // a[1]이 NULL 아니고, 동일하면 i++ 2로 만들고 아니면 차이 리턴해 버려.
	// a-c에서는 둘 동일 안해서 걸리므로 a[1] - c[1] = 'o' - 'O' 리턴해버려
	if (a[2] && a[2] == b[2]) i++; else return a[2] - b[2]; // a[2]이 NULL 이라 거짓말!! return 널 - 널 = 0 / 0을 리턴
}

char main9_2() // 9_2
{
	char a[] = "ho", b[] = "ho", c[] = "hOnGikU"; // a b c 는 모두 array
	printf("%d %d\n", mystrcmpD_h(a, b), mystrcmpD_h(a, c) ); // a-b , a-c 주소를 복사
	printf("%d %d\n", mystrcmpD(a, b), mystrcmpD(b, c)); // a-b , a-c 주소를 복사
}