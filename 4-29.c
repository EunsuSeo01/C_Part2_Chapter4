/*
 �����Ϳ� ���ڿ��� ���踦 �� �� �ִ� ���� ����.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char* p = "ABCD";	// p�� ���ڿ��� �����ϴ� �ǹ̰� �ƴ�! ���ڿ� ��� ABCD�� '���� �ּ�'�� char�� �������� p�� �����϶�� �ǹ�.

	printf("%s \n", p);
	printf("%s \n", p + 1);
	printf("%s \n", p + 2);
	printf("%s \n", p + 3);

	return 0;
}