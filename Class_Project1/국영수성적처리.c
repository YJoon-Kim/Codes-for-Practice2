#include <stdio.h>// stdio.h란 화일을 끼워넣어 

// stdio.h std standad 표준 io input output 입출력 

void main1_5() // main() 함수 종류가 void 무효 즉 아무것도 돌려주지 않는  함수 // main1_5

// int main()은 int 값을 반환하는 y=f(x) 같은 함수
// c 는 전부 함수. 컴의 개념이 함수

{

    int kor, math, eng, sum;

    double avg; // 변수 는 변하는 수. 중간 계산 결과 저장. 두배 정교 실수. // 정수/정수 = 정수

    char name; //글자 1자 

    scanf("%c %d %d %d", &name, &kor, &math, &eng);// 입력 스캔뜨기 lf주의.. --> 시험
    // 입력 예시 : K 100 100 100

    // 주소 알려줘야 택배 배달됨 & 주소 알아내는 연산자 

    // 이름은 이니셜 한자만 입력가능  예 K

    sum = kor + math + eng; // 국영수 더해서 sum이란 별명을 가진 변수 공간에 저장

    avg = sum / 3; // 평균계산 // 정수/정수 = 정수 // 정수/실수 = 실수(시험나옴)

    printf("%c %d %d %d = %d, avg=%f\n", name, kor, math, eng, sum, avg); // 인쇄==출력

}