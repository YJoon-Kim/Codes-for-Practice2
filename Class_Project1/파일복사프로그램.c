#include <stdio.h>

// (1) �� main ������ ������Ʈ �������� ��ġ �˾Ƴ���
// (2) ������ �ϳ� ����. ���� ��λ��� (1)�� ��ġ�� ������ �־�
// (3) �޸��� ��� txt ���Ϸ� �ƹ� �����̳� ��. �׸��� (2) ������ ���� �̵�.
// ���� �̸��� ori.txt
// (4) (1)�� ��ɹ� ���� â���� ���������̸�.exe ori.txt copy.txt ������ -> ������ copy.txt ���� ����
// linux�� exe ������ ���� �ȵ�.

// argv[1][1] == *(* (argv[1] +1)+1);
// char arr[3][4] != char *arr[4];
// 2���� �迭�� �������� �����ʹ� �ſ� �ٸ�.

int main13_3(int argc, char* argv[]) //13_3 // **argv�� �ص� �����ϼ�
{ // argv�� 2���� �迭�� �ƴ�. <--- != ---> char argv[2][4];(2�����迭)
	// char *argv : argv�� �ּ� �����ϴ� ������ ������.
	// char *argv[10] ;; ������ ���� 10��. // ������ ������ �ϸ� �� ����� ������. ���󰡴� ���� ����.

	int i; FILE* ip, * op; char ch;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; ++i) printf("argv[%d] = %s\n", i, argv[i]); // i�� ° ���ڿ�

	ip = fopen(argv[1], "r");
	op = fopen(argv[2], "w");

	if (!ip || !op)
	{
		printf("���Ͽ��� ����\n"); return;
	}

	for (; fscanf(ip, "%c", &ch) > 0;) // ori.txt �б�
		fprintf(op, "%c", ch); // copy.txt�� ����

	fclose(ip); fclose(op); // ���� �ݱ�

	// argv[0][0] == *( *(argv + 0) + 0);
}