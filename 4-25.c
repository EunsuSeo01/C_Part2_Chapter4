/*
 중괄호와 작은 따옴표를 이용하여 문자열을 배열에 저장한 것을 보여주는 예제.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = { 'A', 'B', 'C', 'D', '\0' };	// 문자열 배열 선언. -> 맨 끝에 널 문자를 삽입했기 때문에 이 배열에 저장된 데이터들은 '문자열'로 인식된다.

	// 문자 출력.
	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);

	return 0;
}