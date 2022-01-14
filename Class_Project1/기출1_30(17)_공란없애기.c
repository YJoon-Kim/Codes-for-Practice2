void removeblankG1_30(char* a, char* b) // array [] int 추가변수 사용시 점 사용시 0 점
{
	for (; *a;)
	{
		if ('-' != *a)
		{
			*b = *a;
			a++, b++;
		}
		else a++;
	} b++; *b = '\0';
}

void mainG1_30()
{
	char a[] = "010-6543-2335";
	char b[] = "                   ";
	removeblankG1_30(a, b);
	printf("%s\n", b);
}

// 지렸다...