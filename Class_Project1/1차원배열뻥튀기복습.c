#include <stdio.h>

void vscaling(double ratio, double v[2], double result[]) // 3�� �����ؾ��� ���̶� / main() �ּҹ޾Ƽ� ���ٷ� ��������.
{ // ratio�� �Ǽ� ���� �������. v, result�� main�� �ִ� �ּҸ� �������. --> ������ ����
	// v++; result++; --> �̰͵��� ���� �ּҶ� ++ ���� �����ϴ�. ���� -> ���� �� �ִ� ��
	v++; result++;
	result[0] = ratio * v[0];
	result[1] = ratio * v[1];
	result[-1] = ratio * v[-1];
}
/*
void vscaling_h(double ratio, double v[2], double result[])
{
	int i;
	for (i = 0; result[i] = v[i]; ++i);
}
*/
char main9_1() // 9_1 // 1���� ���� ���� // scaling ũ�� Ȯ�� or ��� (��Ƣ��)
{
	double v[3] = { 1.,2.,3. }, result[3]; // ������ array / �׳� v result �� ��� �ּ�.!
	// v++ result++ --> ��� �ּҶ� 3++ �ϸ� ���մϴ�. �׷��� ���������� ������. 3++�� ������ �õ�. ������ ����
	vscaling(2.0, v, result); // v result �� �ּҸ� vscaling()�� ������� ��.
	printf("%f %f %f\n", result[0], result[1], result[2]);
}




/*
#include <stdio.h> 

int mystrlen(char str[])

{

	int count = 0; // �ʱ�ȭ ���ϸ� ������ 

	for (; str[count] != '\0'; count++); // for (count = 0 ; str[count] ; count++); 

	return count;

}

 str="123��" ;

count = 0 ;

str[count] str[0] �� NULL??? ���� '1'�� ����� ��

count ++ ���� .. count = 1 ;

str[count] str[1] �� NULL??? ���� '2'�� ����� ��

count ++ ���� .. count = 2 ;

str[count] str[2] �� NULL??? ���� '3'�� ����� ��

count ++ ���� .. count = 3 ;

str[count] str[3] �� NULL??? ���� NULL �� ����� ����

return 3 ;





void main()

{

	char str[10];

	scanf("%s", str);

	//str[3] = 1; 

	printf("%s  ����=%d\n", str, mystrlen(str));

}
*/