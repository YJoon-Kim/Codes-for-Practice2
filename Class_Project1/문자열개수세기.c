#include <stdio.h> 

int mystrlen(char str[])
{
	int count = 0; // �ʱ�ȭ ���ϸ� ������ 
	for (; str[count] != '\0'; count++); // for (count = 0 ; str[count] ; count++); 
	return count;
}

void main8_5()  // 8_5
{
	char str[10];
	scanf("%s", str);
	//str[3] = 1; 
	printf("%s�� ����=%d\n", str, mystrlen(str));
}

/* str="123��" ;
count = 0 ;
str[count] str[0] �� NULL??? ���� '1'�� ����� ��
count ++ ���� .. count = 1 ;
str[count] str[1] �� NULL??? ���� '2'�� ����� ��
count ++ ���� .. count = 2 ;
str[count] str[2] �� NULL??? ���� '3'�� ����� ��
count ++ ���� .. count = 3 ;
str[count] str[3] �� NULL??? ���� NULL �� ����� ����
return 3 ;*/