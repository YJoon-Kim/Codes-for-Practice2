#include <stdio.h>

void main4_7() // 4_7
{
	char sex; int weight;
	scanf("%c %d", &sex, &weight); // m 121  ---> ���Ȱ� // f 48 ->���Ȱ� // m 120 ->���밡
	// if ( (( a )) &&      b        )
	if ((sex == 'm') && (weight <= 120)) printf("���밡mil service\n");  //(m ��)   �鼭&& (ü���� 120 ����)  -> ���밨.
	else printf("����Ȱ� NO mil service\n");  //                          (sex == 'm')  &&  (weight <= 120) 

	// if ���� �ݴ��-> if else �κ� �ٲ�ġ��
	if (!(sex == 'm' && weight <= 120)) printf("����Ȱ� NO mil service\n");
	else  printf("���밡mil service\n");

	// !(a &&b)  -------> !a || !b   if (!( sex == 'm' && weight <= 120 ))
	if (!(sex == 'm') || !(weight <= 120)) printf("����Ȱ� NO mil service\n");
	else  printf("���밡mil service\n");

	if ((sex == 'f') || (weight > 120)) printf("����Ȱ� NO mil service\n");
	else  printf("���밡mil service\n");

	// if ���� �ݴ��-> if else �κ� �ٲ�ġ��
	if (!(sex == 'f' || weight > 120))   printf("���밡mil service\n");
	else printf("����Ȱ� NO mil service\n");

	// ��𸣰�  !(a||b)---> !a &&  !b
	if (!(sex == 'f') && !(weight > 120))   printf("���밡mil service\n");
	else printf("����Ȱ� NO mil service\n");

	if ((sex == 'm') && (weight <= 120))   printf("���밡mil service\n"); // �� ó���Ͱ� ����.
	else printf("����Ȱ� NO mil service\n");
}