/*
 ������ �迭�� �����ϴ� ����.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int a = 1, b = 2, c = 3;
	int* pointer[3] = { NULL, NULL, NULL };		// ������ �迭 ����.

	pointer[0] = &a;
	pointer[1] = &b;
	pointer[2] = &c;	// int�� �������� �ּҸ� ������ �迭�� ��ҷ� ����.

	return 0;
}