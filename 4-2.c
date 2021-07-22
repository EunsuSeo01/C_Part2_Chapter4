#include <stdio.h>
int main() {
	int array[3] = { 10, 20, 30 };

	// * 연산자를 붙임.
	printf("%d %d %d \n", *array, *(array + 0), *&array[0]);	// 배열의 0번 요소에 저장된 값.
	printf("%d %d \n", *(array + 1), *&array[1]);
	printf("%d %d \n", *(array + 2), *&array[2]);

	// 저장된 값의 크기라서 int형은 4byte라서 늘 4 4 4가 뜸.
	printf("%d %d %d \n", sizeof(*array), sizeof(*(array + 0)), sizeof(*&array[0]));

	return 0;
}