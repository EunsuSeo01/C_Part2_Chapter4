/*
 포인터 변수 p에 배열의 시작 주소를 저장하면 p를 배열처럼 사용할 수 있다.
 last modified 2021-07-26
*/
#include <stdio.h>
int main(void) {
	int array[3] = { 10, 20, 30 };
	int* p = NULL;
	p = array;	// 포인터 변수에 배열의 시작 주소를 저장.

	// * 연산자를 붙임.
	printf("%d %d %d \n", *p, *(p + 0), *&p[0]);
	printf("%d %d \n", *(p + 1), *&p[1]);
	printf("%d %d \n", *(p + 2), *&p[2]);

	return 0;
}