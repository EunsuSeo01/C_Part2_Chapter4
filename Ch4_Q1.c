/*
 Part 2 Chapter 4 �������� 1�� Ǯ��.
 last modified 2021-08-03
*/
// Q1. ������ �迭�� 10, 30, 40, 30, 20�� �����ϰ� ������ ������ �迭�� �����Ͽ� �迭�� ���� ���ϼ���.
#include <stdio.h>
int main(void) {
	int arr[5] = { 10, 30, 40, 30, 20 };	// ������ �迭 ����.
	int* ip = arr;		// �迭�� ���� �ּҸ� ������ ip�� ����.
	int sum = 0;	// �迭�� ���� ������ ���� ����.

	//	printf("%d ", sizeof(arr)); -> 20.
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		sum += arr[i];
	}

	printf("�迭�� �� : %d\n", sum);

	return 0;
}