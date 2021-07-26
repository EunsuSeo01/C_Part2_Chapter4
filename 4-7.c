/*
 포인터 변수를 배열처럼 사용할 수 있지만 둘은 같은 것은 아님.
 -> 모든 포인터 변수의 크기 : (32bit 컴파일러에서) 4 byte로 고정되어 있음.
    배열의 크기 : 배열 길이에 따라 달라짐.
 last modified 2021-07-27
*/
#include <stdio.h>
int main(void) {
	int array[3] = { 10, 20, 30 };
	int* p = NULL;
	p = array;

	printf("%d %d %d \n", array[0], array[1], array[2]);
	printf("%d %d %d \n", *(array + 0), *(array + 1), *(array + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d %d %d \n", *(p + 0), *(p + 1), *(p + 2));

	printf("배열의 크기 : %d 포인터의 크기 : %d \n", sizeof(array), sizeof(p));

	return 0;
}