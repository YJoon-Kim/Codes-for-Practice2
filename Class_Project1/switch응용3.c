#include <stdio.h>

void main5_2() // 5_2
{
	int year, month;

	for (;;) // 무한반복
	{
		scanf("%d %d", &year, &month);
		
		switch (month)
		{
		case 1: // 여기서 break; 걸면 switch 깨고 나와서 month에 1 치면 아무것도 안나옴.
		case 3: // switch는 3이면 여기서 걸려서 쭉 실행하는 듯 break 나올 때 까지.
		case 5:
		case 7:case 8:case 10:case 12: printf("31일임\n"); break;
		case 4:case 6:case 9: case 11: printf("30일임\n"); break;
		case 2: if (!(year % 4)) printf("29일임\n"); else printf("28일임\n"); break;
		}
		if (year <= 0 || month <= 0) break;
	}
}