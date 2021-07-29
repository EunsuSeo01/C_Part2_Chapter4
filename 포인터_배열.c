/*
 포인터 배열을 선언하는 예제.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int a = 1, b = 2, c = 3;
	int* pointer[3] = { NULL, NULL, NULL };		// 포인터 배열 선언.

	pointer[0] = &a;
	pointer[1] = &b;
	pointer[2] = &c;	// int형 변수들의 주소를 포인터 배열의 요소로 저장.

	return 0;
}