/*
 ������ ������ ���� ���� �迭�� �����ϴ� ���� �����ִ� ����. 
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array1[] = { 'A', 'B', 'C', 'D' };
	char* p = NULL;

	p = array1;		// ������ ������ ���� �迭�� ���� �ּҸ� ����.

	printf("%c %c %c %c \n", p[0], p[1], p[2], p[3]);	// char������ ���.
	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);	// int������ ���. -> char���� int������(10���� ���·�) ����ϸ� ASCII CODE ���� ��µ�! ('A' == 65)

	printf("%c %c %c %c \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));	// p[i] == *(p + i)���� �̿��ؼ� ���� ���� �� ����.
	printf("%d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));

	return 0;
}