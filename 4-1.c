#include <stdio.h>
int main() {
	int array[3] = { 10, 20, 30 };

	// �迭 0�� ����� �ּҰ�. array = �迭�̸� = �迭�� �����ּ�!!
	printf("%x %x %x \n", array, array + 0, &array[0]);
	// �迭 1�� ����� �ּҰ�.
	printf("%x %x \n", array + 1, &array[1]);
	// �迭 2�� ����� �ּҰ�.
	printf("%x %x \n", array + 2, &array[2]);

	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));

	return 0;
}