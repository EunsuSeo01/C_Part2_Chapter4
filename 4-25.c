/*
 �߰�ȣ�� ���� ����ǥ�� �̿��Ͽ� ���ڿ��� �迭�� ������ ���� �����ִ� ����.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = { 'A', 'B', 'C', 'D', '\0' };	// ���ڿ� �迭 ����. -> �� ���� �� ���ڸ� �����߱� ������ �� �迭�� ����� �����͵��� '���ڿ�'�� �νĵȴ�.

	// ���� ���.
	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);

	return 0;
}