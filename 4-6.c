/*
 포인터 변수 p에 배열의 시작 주소를 저장하면 p를 배열처럼 사용할 수 있다.
 *(p + i) == *&p[i] == p[i] == *(array + i) == *&array[i] == array[i]
 last modified 2021-07-26
*/
#include <stdio.h>
int main(void) {
	int array[3] = { 10, 20, 30 };
	int i = 0;
	int* p = NULL;

	p = array;	// 이제부터 p를 배열처럼 사용할 수 있다.

	for (i = 0; i < 3; i++) {
		printf("%d %d %d \n", *(p + i), *&p[i], p[i]);
	}

	printf("-------------------------\n");
	for (i = 0; i < 3; i++) {
		printf("%d %d %d \n", *(array + i), *&array[i], array[i]);
	}

	return 0;
}