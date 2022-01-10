#include <stdio.h>

void mystrcpy_3(char ori[1], char copyHere[100000]) // 여기는 모두 포인터들. array 정의 불가능함.
{ // 여 자리는 array 가능하긴 함.
	int i;
	for (i = 0; ori[i]; ++i) // 문자열 마지막 NULL 보면 거짓말 되어 for 깸
	{
		copyHere[i] = ori[i];
	}
	copyHere[i] = NULL;
}

void main11_1() // 11_1
{
	char name[10] = "홍길동"; // 이름 저장할 공간이 중요. 괜히 홍길동에게 햇갈리지 말자.
	mystrcpy_3("김연준", name);
	printf("%s\n", name);
}