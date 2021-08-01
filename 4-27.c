/*
 문자 배열과 문자열 배열의 차이를 알아볼 수 있는 예제.
 종료 문자의 유무에 따라 배열의 종류가 달라진다.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array1[] = { 'A', 'B', 'C', 'D', '\0' };	// 문자열 배열 선언.
	char array2[] = { 'A', 'B', 'C', 'D' };			// 문자 배열 선언.

	// 문자열 출력.
	printf("%s \n", array1);
	printf("%s \n", array2);

	return 0;
}