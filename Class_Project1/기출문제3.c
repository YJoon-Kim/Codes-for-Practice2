#include <stdio.h>

void main5_12() // 5_12
{
	int in = 876324, out = 0;
	for (; in; in = in / 10) // 0 아닌 수는 참말 , 정수/정수 = 정수 이용
	{
		out = out * 10 + in % 10; // in의 마지막 숫자 X 10 추출해서 누적해서 더하기
	}
	printf("%d\n", out); // 423678 // 숫자 거꾸로 만들어 버리기
}