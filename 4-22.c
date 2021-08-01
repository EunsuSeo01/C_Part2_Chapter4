/*
 문자 상수 자체는 변수가 아니므로 변경할 수 없지만, 변수나 배열에 문자를 저장하면 그 값을 변경할 수 있음을 보여주는 예제.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = { 'A', 'B', 'C', 'D' };
	
	// 문자 상수 = 작은따옴표 내에 포함된 하나의 문자. 키보드로 표현할 수 있는 영문자와 숫자, 특수기호가 포함.
	printf("문자 상수 : %c %c %c %c \n", 'A', 'B', 'C', 'D');

	// 문자 배열.
	printf("문자 배열 변경 전 : %c %c %c %c \n", array[0], array[1], array[2], array[3]);

	array[0] = 'D';
	array[1] = 'C';
	array[2] = 'B';
	array[3] = 'A';

	printf("문자 배열 변경 후 : %c %c %c %c \n", array[0], array[1], array[2], array[3]);

	printf("문자 배열 array의 크기 : %d \n", sizeof(array));	// 1byte 짜리 char형 변수가 4개 들어가 있기 때문이다.

	return 0;
}