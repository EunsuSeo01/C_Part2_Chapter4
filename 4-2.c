#include <stdio.h>
int main() {
	int array[3] = { 10, 20, 30 };

	// * �����ڸ� ����.
	printf("%d %d %d \n", *array, *(array + 0), *&array[0]);	// �迭�� 0�� ��ҿ� ����� ��.
	printf("%d %d \n", *(array + 1), *&array[1]);
	printf("%d %d \n", *(array + 2), *&array[2]);

	// ����� ���� ũ��� int���� 4byte�� �� 4 4 4�� ��.
	printf("%d %d %d \n", sizeof(*array), sizeof(*(array + 0)), sizeof(*&array[0]));

	return 0;
}