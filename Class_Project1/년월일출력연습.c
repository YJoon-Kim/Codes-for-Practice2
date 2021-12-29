#include <stdio.h>

char main2_5() // 211228 // 2_5
{
	char c1, c2, c3, c4, c5, c6;
	int year, month, date;
	scanf("%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6); // & 주소 알려주기
	year = (c1 - '0') * 10 + (c2 - '0'); // 'b'-'a'=1 ascii로 'a' 'b' 코드차이 1
	// ascii code 0 1 2 3 4 5 6 7 8 9(char)를 정수(int)로 바꾸려면 - '0' 해줘
	// 이렇게 하는 이유는 '0'하고 c1의 아스키코드 차이를 나타내주기 때문이다. 그 차이는 c1의 실제 숫자만큼이다.
	// (c1 - '0')를 %d로 받으면 차이의 int로, %c로 받으면 그 차이의 ascii code가 나온다.

	// char-char=int / char-int=char

	month = (c3 - '0') * 10 + (c4 - '0');
	date = (c5 - '0') * 10 + (c6 - '0');

	printf("c6 - '0' = %d\n", c6 - '0');
	printf("%d년 %d월 %d일\n", year, month, date);
}