/*
 Part 2 Chapter 4 �������� 3�� �ڵ�.
 last modified 2021-08-03
*/
// Q3. ���� ������ �迭�� ���õ� �ڵ带 �м��ؼ� �� ����� �׸����� �ۼ��ϼ���.
#include <stdio.h>
int main(void) {
	int a = 10, b = 20;
	int* array[2] = { &a, &b };		// ������ �迭 ����. �ּҰ� 2���� �� �� ����.

	printf("%x %x \n", &a, &b);
	printf("%x %x \n", array[0], array[1]);

	printf("%d %d \n", *&a, *&b);
	printf("%d %d \n", *array[0], *array[1]);

	return 0;
}