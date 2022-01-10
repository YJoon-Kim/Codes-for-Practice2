#include <stdio.h>

void mystrcat(char h[], char t[1]) // 알고보니 이것들도 다 포인터이더라...
{ // (1) h 맨 끝 찾아.. i index 사용
  // (2) h 끝에 t 쪽을 복사해.. j index 사용해서 h 따라가
  // (3) *** 문자열 마지막은 널로 마무리.
	int i, j;
	for (i = 0; h[i]; i++); // (1) h 맨 끝 찾아.. 널 만나면 거짓말해서 for 깸
	// (2)
	for (j = 0; h[i] = t[j]; j++, i++);

	// 이중 for문 안쓰는 것이 좋음. 연산속도가 너무 느려짐.

	/* <하수버전>
	for (j=0; t[j] != 0; i++, j++)
		h[i] = j[j];
	h[i] = 0;
	*/
}

char main9_3() // 9_3
{
	char head[100] = "Hongik", tail[] = "Univ"; // head[] 쪽에 공간 없으면 망함. 7 글자만 지 공간으로 배정됨. 11글자 못들어감.
	mystrcat(head, tail);
	printf("%s \n", head);
}