/*
 ���ڿ� ��� "ABCD"�� �ּҸ� �˾ƺ��� ���� ����.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	// ���ڿ� ����� ���� �ּҸ� ����.
	char* p = &"ABCD";	// char* p = "ABCD"; �� ���� �ڵ�.

	printf("%x \n", p);
	printf("%x \n", p + 1);
	printf("%x \n", p + 2);
	printf("%x \n", p + 3);
	printf("%x \n", p + 4);
	printf("---------\n");

	printf("%x %x \n", &"ABCD", p);		// �� ���� ���� ���� ���´�.

	return 0;
}