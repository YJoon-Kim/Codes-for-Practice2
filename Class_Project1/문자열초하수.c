#include <stdio.h> 출석#1 2306

void mystrcpy_h(char ori[1], char copy[1])
{
    int i;
    for (i = 0; copy[i] = ori[i]; ++i);
    // 작동 과정 정리하기
}

void mystrcpy_m(char ori[1], char copy[1]) // array아님. 사실상 포인터이나 array같이 사용하셔
{
    int i;
    for (i = 0; ori[i] != 0; ++i) // ori[i]!= 0  ==== ori[i]
        copy[i] = ori[i]; // (i=0) copy[0] = ori[0]; (i=1) copy[1] = ori[1]; 
    // (i=2 일떄).. ori[2]==0널 이라 거짓말. for깨고 나옴
    copy[i] = 0; // 마지막을 널로 막음질하기. // 안하니 ho儆儆儆儆儆儆儆儆儆儆儆儆儆옇?+?
}

void mystrcpy_LOW(char ori[1], char copy[1]) // array아님. 사실상 포인터이나 array같이 사용하셔
{
    copy[0] = ori[0];
    copy[1] = ori[1]; // 프로그래밍 수준 아님. 계산기
    // copy[2] = 0; // 마지막을 널로 막음질하기. // 안하니 ho儆儆儆儆儆儆儆儆儆儆儆儆儆옇?+?
}

char main8_4() // 문자열 스캔 // 8_4
{
    char ori[] = "ho", copy[5]; //ori copy 는 array임
    //mystrcpy_LOW(ori, copy); // 주소를 복사 시켜 줬음.
    mystrcpy_m(ori, copy); // 주소를 복사 시켜 줬음.
    printf("%s\n", copy); // 프린트는 널나오기전 까지 글자 꾸준히 찍음. 어쩌다가 도중에 널 들어있으면 출력 종료
}