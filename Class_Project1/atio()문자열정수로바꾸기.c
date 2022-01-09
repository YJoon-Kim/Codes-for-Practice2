#include <stdio.h> 

int myatoi(char str[10])
{
	int sum = 0, i;
	// 0은 거짓말... '\0' 아니면 참말 
	for (i = 0; str[i]; ++i) //for (i = 0; str[i] != '\0'; ++i) // for (i = 0; str[i] != 0; ++i) 
	{
		printf("차이 %d ", str[i] - '0');
		sum = sum * 10 + str[i] - '0';
		printf("현재합 %d\n", sum);
	}
	return sum;
}

void main8_7() // 8_7
{
	char str[10];
	scanf("%s", str); // 123 입력하셔
	//str[3] = 1; 
	printf("%s -> %d  \n", str, myatoi(str));
}

/* 8 str = "123널";
i = 0; 애초 sum = 0
str[i] str[0] 이 NULL ? ? ? 현재 '1'이 들었음 참
sum = 0 * 10 + '1' - '0' = 1 - 0 = 1..sum = 1
i ++ 증가 ..i = 1;
str[i] str[1] 이 NULL ? ? ? 현재 '2'이 들었음 참
sum = 1 * 10 + '2' - '0' = 10 + 2 - 0 = 12..sum = 12
i ++ 증가 ..i = 2;
str[i] str[2] 이 NULL ? ? ? 현재 '3'이 들었음 참
sum = 12 * 10 + '3' - '0' = 120 + 3 - 0 = 123..sum = 123
i ++ 증가 ..i = 3;
str[count] str[3] 이 NULL ? ? ? 현재 NULL 이 들었음 거짓
return 123; */

/*
==================================
atoi() 디버깅
int myatoi(char str[10])
{
	int sum = 0, i;
	str = "123"; // "123널" 널을 정수로 바꾸면 0 
	//for 안의 초기화 i = 0; 
	// for의 조건 확인 ( str[0] 참말?) '1'은 0 아님 ,참말. for 계속 
	// sum은 애초 초기화 0 
	sum = 0 * 10 + '1' - '0' = 1;
	++i; // i = 1이됨 
	// for의 조건 확인 ( str[1] 참말?) '2'은 0 아님 ,참말. for 계속 
	sum = 1 * 10 + '2' - '0' = 10 + 2 = 12;
	++i; // i = 2이됨 
	// for의 조건 확인 ( str[2] 참말?) '3'은 0 아님 ,참말. for 계속 
	sum = 12 * 10 + '3' - '0' = 120 + 3 = 123;
	++i; // i = 3이됨 
	// for의 조건 확인 ( str[3] 참말?) '\0'은 널은 0 임 ,거짓말. for 깨고 나옴 
	//최종 sum = 123이므로 123이 return; 

#ifdef NDEL 
	for (i = 0; str[i] != 0; ++i) // 문자열 맨 뒤에는 널이란 정수로 바꾸면 0이되는 글자가 들어있음. 문자열의 끝을 나타냄. 
		sum = sum * 10 + str[i] - '0';
#endif 
	return sum;
}
*/