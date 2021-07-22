#include <stdio.h>
int main() {
	int array[3] = { 10, 20, 30 };

	// 배열 0번 요소의 주소값. array = 배열이름 = 배열의 시작주소!!
	printf("%x %x %x \n", array, array + 0, &array[0]);
	// 배열 1번 요소의 주소값.
	printf("%x %x \n", array + 1, &array[1]);
	// 배열 2번 요소의 주소값.
	printf("%x %x \n", array + 2, &array[2]);

	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));

	return 0;
}