#include <stdio.h>

// input[i] == *(input + i)

void mystrPointer(char* ori, char copyHere[])
{
	for (; *copyHere = *ori; ++ori, copyHere++);
}

void main11_4() // 11_4
{
	char name[10] = "홍길동"; // 이름 저장할 공간이 중요. 괜히 홍길동에게 햇갈리지 말자.
	mystrPointer("김연준", name);
	printf("%s\n", name);
}

/*

#include "stdio.h" 출석 #2 0951 출석 #3 0029  시험 14일(금) 오후2시. 컴 코딩..

void mystrcpyHPointer(char ori[1], char copyHere[100000]) // 여기는 뭐라해도 전부 포인터들임. array정의 불가능함
{ // 고수 pointer 버젼  // input + 1 대신  input++ 을 i번 후 * 내용보기
	for (; *copyHere = *ori; ++ori, copyHere++ );;;;;;;;;;; // 문자열 마지막 널 보면 거짓말되어 for 깸
} // ++ 각각해서 내용 복사 후, 또 ++.. 널 일단 복사후 내용보니 널이라 거짓말/for 꺰

void mystrcpyLPointer(char* ori, char copyHere[]) //input[i] == *(input+i)    // input 주소  (input+i) 주소+i칸 올라간 것임.// *주소의 내용
//== input + 1 대신  input++ 을 i번 후 * 내용보기
{
	//ori[i] == *(ori+i)    copyHere[i] == *(copyHere+i)
	for (; *ori != NULL; ++ori ) // 문자열 마지막 널 보면 거짓말되어 for 깸
		*copyHere = *ori;
	*copyHere = NULL; // 널로 막음질 여기서 해야. 안하면 망함.
}

void mystrcpyPLUS(char* ori, char copyHere[])
{
	int i; //ori[i] == *(ori+i)    copyHere[i] == *(copyHere+i)
	for (i = 0; ori[i] != NULL; ++i) // 문자열 마지막 널 보면 거짓말되어 for 깸
		*(copyHere + i) = *(ori + i);
	copyHere[i] = NULL; // 널로 막음질 여기서 해야. 안하면 망함.
}

void mystrcpyHPLUS(char ori[1], char copyHere[100000]) // 여기는 뭐라해도 전부 포인터들임. array정의 불가능함
{ // 고수+ 버젼
	int i; 	for (i = 0; *(copyHere + i) = *(ori + i); ++i);;;;;;;;;;; // 문자열 마지막 널 보면 거짓말되어 for 깸
}

void mystrcpyH(char ori[1], char copyHere[100000]) // 여기는 뭐라해도 전부 포인터들임. array정의 불가능함
{ // 고수버젼
	int i; 	for (i = 0; copyHere[i] = ori[i]; ++i);;;;;;;;;;; // 문자열 마지막 널 보면 거짓말되어 for 깸
}

void mystrcpy(char ori[1], char copyHere[100000]) // 여기는 뭐라해도 전부 포인터들임. array정의 불가능함
{ // 하수버젼
	int i;
	for (i = 0; ori[i] != NULL; ++i) // 문자열 마지막 널 보면 거짓말되어 for 깸
		copyHere[i] = ori[i];
	copyHere[i] = NULL; // 	// 널로 막음질 여기서 해야.안하면 망함.
}

void main()
{
	char name[10] = "홍길동"; // 이름저장할 공간이 중요. 괜히 홍길동에게 헷갈리지 말자.
	mystrcpy("당신이름", name); name[0] = NULL; //문자열 망가뜨리기
	mystrcpyLPointer("당신이름", name);
	printf("%s\n", name);
}

*/