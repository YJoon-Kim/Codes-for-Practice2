#include <stdio.h>

void main5_2() // 5_2
{
	int year, month;

	for (;;) // ���ѹݺ�
	{
		scanf("%d %d", &year, &month);
		
		switch (month)
		{
		case 1: // ���⼭ break; �ɸ� switch ���� ���ͼ� month�� 1 ġ�� �ƹ��͵� �ȳ���.
		case 3: // switch�� 3�̸� ���⼭ �ɷ��� �� �����ϴ� �� break ���� �� ����.
		case 5:
		case 7:case 8:case 10:case 12: printf("31����\n"); break;
		case 4:case 6:case 9: case 11: printf("30����\n"); break;
		case 2: if (!(year % 4)) printf("29����\n"); else printf("28����\n"); break;
		}
		if (year <= 0 || month <= 0) break;
	}
}