/*
 Part 2 Chapter 4 연습문제 2번 풀이.
 last modified 2021-08-03
*/
// Q2. 다음과 같이 실행 결과가 출력되었습니다. 결과를 보고 코드의 (//) 부분을 작성하세요.
#include <stdio.h>
int main(void) {
	int array[5] = { 10,20,30,40,50 };
	// 1. 포인터 변수의 선언부.
	int* p = NULL;

	p = array;
	// 2. 포인터 변수의 초기화.
	printf("%d %d %d %d %d \n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));

	return 0;
}