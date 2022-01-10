#include <stdio.h>

int mystrlenPointer(char* s) // s[i] == *(s+i)
{
	char* startAdress = s;
	for (; *s; s++);
	return s - startAdress;
}

int mystrlenPointer_2(char* s) // s[i] == *(s+i)
{
	int i;
	for (i = 0; *s; s++, i++);
	return i;
}

int mystrlenPlus(char* s) // s[i] == *(s+i)
{
	int i;
	for (i = 0; *(s + i) != 0; i++);
	return i;
}

int mystrlenARR_3(char* s)
{
	int i;
	for (i = 0; s[i] != 0; i++);
	return i;
}

void main11_6() // 11_6
{
	char str[10] = "ho";
	printf("%d\n", mystrlenPointer_2(str));
}