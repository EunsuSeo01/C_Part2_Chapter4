/*
 �迭 �����͸� ������ ���� ����.
   �����ϸ� ���� Link> https://dojang.io/mod/page/view.php?id=312
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int array1[2][3];
	int(*p1)[3] = NULL;		// �迭 '������' ���� p1 ����.

	double array2[2][4];
	double(*p2)[4] = NULL;		// �迭 '������' ���� p2 ����.

	p1 = array1;	// p1�� 3���� ������ 2���� �迭 array1�� ���� �ּҸ� ����.
	p2 = array2;	// p2�� 4���� ������ 2���� �迭 array2�� ���� �ּҸ� ����.

	return 0;
}