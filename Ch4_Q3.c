/*
 Part 2 Chapter 4 연습문제 3번 코드.
 last modified 2021-08-03
*/
// Q3. 다음 포인터 배열과 관련된 코드를 분석해서 그 결과를 그림으로 작성하세요.
#include <stdio.h>
int main(void) {
	int a = 10, b = 20;
	int* array[2] = { &a, &b };		// 포인터 배열 선언. 주소값 2개가 들어갈 수 있음.

	printf("%x %x \n", &a, &b);
	printf("%x %x \n", array[0], array[1]);

	printf("%d %d \n", *&a, *&b);
	printf("%d %d \n", *array[0], *array[1]);

	return 0;
}