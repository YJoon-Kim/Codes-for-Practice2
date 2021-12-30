#include <stdio.h>

void main4_7() // 4_7
{
	char sex; int weight;
	scanf("%c %d", &sex, &weight); // m 121  ---> 군안가 // f 48 ->군안가 // m 120 ->군대가
	// if ( (( a )) &&      b        )
	if ((sex == 'm') && (weight <= 120)) printf("군대가mil service\n");  //(m 임)   면서&& (체중이 120 이하)  -> 군대감.
	else printf("군대안가 NO mil service\n");  //                          (sex == 'm')  &&  (weight <= 120) 

	// if 조건 반대로-> if else 부분 바꿔치기
	if (!(sex == 'm' && weight <= 120)) printf("군대안가 NO mil service\n");
	else  printf("군대가mil service\n");

	// !(a &&b)  -------> !a || !b   if (!( sex == 'm' && weight <= 120 ))
	if (!(sex == 'm') || !(weight <= 120)) printf("군대안가 NO mil service\n");
	else  printf("군대가mil service\n");

	if ((sex == 'f') || (weight > 120)) printf("군대안가 NO mil service\n");
	else  printf("군대가mil service\n");

	// if 조건 반대로-> if else 부분 바꿔치기
	if (!(sex == 'f' || weight > 120))   printf("군대가mil service\n");
	else printf("군대안가 NO mil service\n");

	// 드모르간  !(a||b)---> !a &&  !b
	if (!(sex == 'f') && !(weight > 120))   printf("군대가mil service\n");
	else printf("군대안가 NO mil service\n");

	if ((sex == 'm') && (weight <= 120))   printf("군대가mil service\n"); // 맨 처음것과 동일.
	else printf("군대안가 NO mil service\n");
}