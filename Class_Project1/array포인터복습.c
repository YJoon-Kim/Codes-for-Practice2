#include <stdio.h> 출석#1 2306
#include <math.h>

void nvec(double v[100000000], double result[]) //void? 결과가 2 개라서 한반에 넘기기 힘듬.
{ // 넘길필요 없는 이유 : 집 수리 의뢰해서 우리집 주소를 공사업체에 복사시켜줬음. //double v[100000000] 포인터임.
    double size; //local 이라 쓰레기 들어있음
    size = sqrt(v[0] * v[0] + v[1] * v[1]); // sqrt(2) - vector크기
    result[0] = v[0] / size;
    result[1] = v[1] / size;
}

char main8_1() // 8_1
{
    double vec[] = { 1., 1. }, norm_vec[2]; // 공간 선언.. vec norm_vec array라고 불림. 변수들의 아파트
    // vec norm_vec array 주소 상수임. 건드리면 망함.
    //vec++; // 이러면 망하는 이유... 3++ 와 유사한 행위
    nvec(vec, norm_vec); //main() 공간의 주소를 복사시켜 줬음
    printf("%f %f\n", norm_vec[0], norm_vec[1]);
}