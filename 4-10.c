/*
 포인터 변수 p를 고정한 상태에서 배열의 메모리 공간에 접근하는 방식을 보여주는 예제.
 last modified 2021-07-27
*/
#include <stdio.h>
int main(void) {
	int array[3];
	int* p = NULL;

	p = array;

	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	*(p + 1) = 20;	// p는 위치 고정해 둔 채로 +를 이용해 다음 요소를 가리키게 함.
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	*(p + 2) = 30;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("0-------------\n");

	return 0;
}