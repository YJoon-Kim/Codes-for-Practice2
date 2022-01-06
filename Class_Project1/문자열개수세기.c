#include <stdio.h> 

int mystrlen(char str[])
{
	int count = 0; // 초기화 안하면 쓰레기 
	for (; str[count] != '\0'; count++); // for (count = 0 ; str[count] ; count++); 
	return count;
}

void main8_5()  // 8_5
{
	char str[10];
	scanf("%s", str);
	//str[3] = 1; 
	printf("%s의 길이=%d\n", str, mystrlen(str));
}

/* str="123널" ;
count = 0 ;
str[count] str[0] 이 NULL??? 현재 '1'이 들었음 참
count ++ 증가 .. count = 1 ;
str[count] str[1] 이 NULL??? 현재 '2'이 들었음 참
count ++ 증가 .. count = 2 ;
str[count] str[2] 이 NULL??? 현재 '3'이 들었음 참
count ++ 증가 .. count = 3 ;
str[count] str[3] 이 NULL??? 현재 NULL 이 들었음 거짓
return 3 ;*/