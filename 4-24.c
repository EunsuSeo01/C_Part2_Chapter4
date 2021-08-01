/*
 [문자열 배열] = 문자열을 배열에 저장하는 것.
 큰 따옴표를 이용하여 문자열을 배열에 저장하는 방법들을 보여주는 예제.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = "ABCD";	// 문자열 배열 선언.

	// 문자열 크기 출력.
	printf("문자열 배열의 크기 : %d\n", sizeof(array));		// 문자열 배열에 넣은 문자들의 수 + 1('\0' : 종료문자. 널문자!)

	// 문자 출력.
	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);	// 그래서 index 4까지 접근이 가능.
	// 10진수 형태로 출력.
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);

	return 0;
}