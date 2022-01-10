#include <stdio.h>

int ivar, global, local1; //글로벌변수 프로그램 전체에 이름이 알려질 수 있음 초기화 됨 0  local은 이름만 local/global임
//extern int gono;

void main7_3() // static 은 방 안뺌. global 은 방 안빠지는 것임. // 7_3
{ // 위 int local 도 지역변수. 이자리에 선언된 것과 동일
    int local1; //쓰레기로 초기화. 이유 local은 무조건 쓰레기로 초기화. MS는 초기화 안된것 실행 막음./실행시 무시 버튼 필수
    int ivar;
    printf("%d %d\n", local1, ivar);
    {
        int local1 = 1; // 이렇게 안쪽 local에서 선언을 해버리면 여기서 나가게 됬을 때 다시 더 바깥의 초기화 안된 변수로 바뀌어버림.
        {
            ivar = local1; // 여기의 ivar은 맨 처음 선언했던 ivar이기 때문에 1이 끝까지 감.
            printf("%d %d\n", local1, ivar);
        }// 이 블럭에만 이름이 알려짐. 블럭이 끝나면 땡.. 초기화 값 쓰레기 
         // 동일한 이름이 없으면 ivar 사용가능. //제일 가까이 선언된 local.
        printf("%d %d\n", local1, ivar);
    }   // 더 local..  동명이인. 앞 것과 완전 다름.
    printf("%d %d\n", local1, ivar);
}  //} 지났으므로 더 local 방빼. //} 지났으므로 local 방빼.