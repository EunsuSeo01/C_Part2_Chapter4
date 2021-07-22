#include <stdio.h>
int main() {
	int array[3] = { 10, 20, 30 };

	// * 연산자를 붙임.
	printf("%d %d %d \n", *(array + 0), *&array[0], array[0]);
	printf("%d %d %d \n", *(array + 1), *&array[1], array[1]);
	printf("%d %d %d \n", *(array + 2), *&array[2], array[2]);
	// 결론 : *(array + i) == *&array[i] == array[i]

	return 0;
}