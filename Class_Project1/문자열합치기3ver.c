#include <stdio.h>

void mystrcatPointer_3(char* a, char b[])
{
	for (; *(a); a++);
	for (; *(a) = *b; a++, b++);
	// 널도 복사가 되었으므로 작업 완료.
}

void mystrcatPlus_3(char* a, char b[])
{
	int i, j; // i는 a 따라가고, j는 b 따라 가라.
	for (i = 0; *(a+i); i++);
	for (j = 0; *(a+i) = b[j]; i++, j++);
	// 널도 복사가 되었으므로 작업 완료.
}

void mystrcatARR_3(char* a, char b[])
{
	int i, j; // i는 a 따라가고, j는 b 따라 가라.
	for (i = 0; a[i]; i++);
	for (j = 0; a[i] = b[j]; i++, j++);
	// 널도 복사가 되었으므로 작업 완료.
}
void main12_4() // 12_4
{
	char* b = "University";
	char a[100] = "hongik"; // 추가로 문자열 쑤셔넣을 공간 있어야 함.

	mystrcatARR_3(a, b); // a에 충분한 공간 있어야 함.
	printf("%s \n", a);

	mystrcatPlus_3(a, b); // a에 충분한 공간 있어야 함.
	printf("%s \n", a);

	mystrcatPointer_3(a, b); // a에 충분한 공간 있어야 함.
	printf("%s \n", a);
}