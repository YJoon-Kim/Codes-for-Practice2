void removeblankG1_30(char* a, char* b) // array [] int �߰����� ���� �� ���� 0 ��
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

// ���ȴ�...