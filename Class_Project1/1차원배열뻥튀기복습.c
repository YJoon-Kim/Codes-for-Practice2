#include <stdio.h>

void vscaling(double ratio, double v[2], double result[]) // 3개 리턴해야할 판이라 / main() 주소받아서 막바로 수정하자.
{ // ratio는 실수 값을 복사받음. v, result는 main에 있는 주소를 복사받음. --> 포인터 변수
	// v++; result++; --> 이것들은 변수 주소라서 ++ 문제 없음니다. 변수 -> 변할 수 있는 수
	v++; result++;
	result[0] = ratio * v[0];
	result[1] = ratio * v[1];
	result[-1] = ratio * v[-1];
}
/*
void vscaling_h(double ratio, double v[2], double result[])
{
	int i;
	for (i = 0; result[i] = v[i]; ++i);
}
*/
char main9_1() // 9_1 // 1차원 벡터 연습 // scaling 크기 확대 or 축소 (뻥튀기)
{
	double v[3] = { 1.,2.,3. }, result[3]; // 무조건 array / 그냥 v result 는 상수 주소.!
	// v++ result++ --> 상수 주소라서 3++ 하면 망합니다. 그래서 빌게이츠가 빡쳐함. 3++과 동등한 시도. 무식한 ㅅㄲ
	vscaling(2.0, v, result); // v result 는 주소를 vscaling()에 복사시켜 줌.
	printf("%f %f %f\n", result[0], result[1], result[2]);
}




/*
#include <stdio.h> 

int mystrlen(char str[])

{

	int count = 0; // 초기화 안하면 쓰레기 

	for (; str[count] != '\0'; count++); // for (count = 0 ; str[count] ; count++); 

	return count;

}

 str="123널" ;

count = 0 ;

str[count] str[0] 이 NULL??? 현재 '1'이 들었음 참

count ++ 증가 .. count = 1 ;

str[count] str[1] 이 NULL??? 현재 '2'이 들었음 참

count ++ 증가 .. count = 2 ;

str[count] str[2] 이 NULL??? 현재 '3'이 들었음 참

count ++ 증가 .. count = 3 ;

str[count] str[3] 이 NULL??? 현재 NULL 이 들었음 거짓

return 3 ;





void main()

{

	char str[10];

	scanf("%s", str);

	//str[3] = 1; 

	printf("%s  길이=%d\n", str, mystrlen(str));

}
*/