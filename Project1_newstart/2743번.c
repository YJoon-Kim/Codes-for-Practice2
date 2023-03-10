#include <stdio.h>
// 단어 길이 재기

int main_2743()
{
	char a[101] = { 0, };
	scanf("%s", a);
	int count = 0;
	for(int i = 0;i<101;i++,count++)
	{
		if (a[i] == 0)
		{
			break;
		}
	}
	printf("%d",count);
	return 0;
}