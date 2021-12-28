#include <stdio.h>

char main2_4() // 'a' + 1, 'A' + 2, 'b' - 'a' // 2-4
{
	char charA = 'A'; // 글자 A를 별명 charA인 변수에 넣어 ;;; 라.
	printf("'a'=a의 코드를 정수로 = %d     'a'+1=%c     'A'+2=%c       'b'-'a'=%d\n", 'a', 'a' + 1, 'A' + 2, 'b' - 'a');
	printf("A란 ascii code앞 글자가 뭔지 확인  ->  A-1=%c\n", 'A' - 1);
}