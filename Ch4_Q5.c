/*
 Part 2 Chapter 4 �������� 5�� Ǯ��.
 last modified 2021-08-03
*/
// Q5. ���� �ڵ带 �̿��Ͽ� ���� ����� ���� ���·� ����ϴ� ���α׷��� �ۼ��ϼ���.
#include <stdio.h>
int main(void) {
	char* string[2] = { "I Love C", "Hello World" };		// char�� ������ �迭. -> ���ڿ� �迭.

	printf("%s %s \n", string[0], string[1] + 6);

	return 0;
}