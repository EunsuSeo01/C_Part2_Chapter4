/*
 [���ڿ� �迭] = ���ڿ��� �迭�� �����ϴ� ��.
 ū ����ǥ�� �̿��Ͽ� ���ڿ��� �迭�� �����ϴ� ������� �����ִ� ����.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = "ABCD";	// ���ڿ� �迭 ����.

	// ���ڿ� ũ�� ���.
	printf("���ڿ� �迭�� ũ�� : %d\n", sizeof(array));		// ���ڿ� �迭�� ���� ���ڵ��� �� + 1('\0' : ���Ṯ��. �ι���!)

	// ���� ���.
	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);	// �׷��� index 4���� ������ ����.
	// 10���� ���·� ���.
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);

	return 0;
}