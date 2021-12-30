#include <stdio.h> // 출석#1 3756 오늘홍대 전산원 서버가 벅벅거림

char main4_1() // ascii code의 진실.. 코드 순서대로 되어있음
{
    char vA = 'A'; //변수 변할수 있는 수. 저장공간 별명 vA
    char v0 = '0'; //변수 변할수 있는 수. 저장공간 별명 v0
    printf("%c A=%c %c %c %c %c %c %c %c %c %c\n",
        vA - 1, vA + 0, vA + 1, vA + 2, vA + 3, vA + 4, vA + 5, vA + 6, vA + 7, vA + 8, vA + 9);
    printf("%c 0=%c %c %c %c %c %c %c %c %c %c\n",
        v0 - 1, v0 + 0, v0 + 1, v0 + 2, v0 + 3, v0 + 4, v0 + 5, v0 + 6, v0 + 7, v0 + 8, v0 + 9);
}