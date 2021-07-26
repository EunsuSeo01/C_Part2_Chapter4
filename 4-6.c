/*
 ������ ���� p�� �迭�� ���� �ּҸ� �����ϸ� p�� �迭ó�� ����� �� �ִ�.
 *(p + i) == *&p[i] == p[i] == *(array + i) == *&array[i] == array[i]
 last modified 2021-07-26
*/
#include <stdio.h>
int main(void) {
	int array[3] = { 10, 20, 30 };
	int i = 0;
	int* p = NULL;

	p = array;	// �������� p�� �迭ó�� ����� �� �ִ�.

	for (i = 0; i < 3; i++) {
		printf("%d %d %d \n", *(p + i), *&p[i], p[i]);
	}

	printf("-------------------------\n");
	for (i = 0; i < 3; i++) {
		printf("%d %d %d \n", *(array + i), *&array[i], array[i]);
	}

	return 0;
}