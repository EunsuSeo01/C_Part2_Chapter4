/*
 Part 2 Chapter 4 �������� 2�� Ǯ��.
 last modified 2021-08-03
*/
// Q2. ������ ���� ���� ����� ��µǾ����ϴ�. ����� ���� �ڵ��� (//) �κ��� �ۼ��ϼ���.
#include <stdio.h>
int main(void) {
	int array[5] = { 10,20,30,40,50 };
	// 1. ������ ������ �����.
	int* p = NULL;

	p = array;
	// 2. ������ ������ �ʱ�ȭ.
	printf("%d %d %d %d %d \n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));

	return 0;
}