/*
 ���� �迭�� ���ڿ� �迭�� ���̸� �˾ƺ� �� �ִ� ����.
 ���� ������ ������ ���� �迭�� ������ �޶�����.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array1[] = { 'A', 'B', 'C', 'D', '\0' };	// ���ڿ� �迭 ����.
	char array2[] = { 'A', 'B', 'C', 'D' };			// ���� �迭 ����.

	// ���ڿ� ���.
	printf("%s \n", array1);
	printf("%s \n", array2);

	return 0;
}