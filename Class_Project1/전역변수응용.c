/*

int ivar, global, local; //글로벌변수 프로그램 전체에 이름이 알려질 수 있음 초기화 됨 0  local은 이름만 local/global임
//extern int gono;
void main7_3(int local, char** a) // static 은 방 안뺌. global 은 방 안빠지는 것임.
{ // 위 int local 도 지역변수. 이자리에 선언된 것과 동일
    int local1; //쓰레기로 초기화. 이유 local은 무조건 쓰레기로 초기화. MS는 초기화 안된것 실행 막음./실행시 무시 버튼 필수
    int ivar;
    { int local; // 이 블럭에만 이름이 알려짐. 블럭이 끝나면 땡.. 초기화 값 쓰레기 
    ivar = local; // 동일한 이름이 없으면 ivar 사용가능. //제일 가까이 선언된 local.
    { int local; // 더 local..  동명이인. 앞 것과 완전 다름.
    local = 1;
    }  //} 지났으므로 더 local 방빼.
    } //} 지났으므로 local 방빼.
}

*/