/*
 배열에 저장된 문자열의 값을 변경해 보는 예제.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = "ABCD";		// 문자열 배열 선언. 큰따옴표 사용해서 선언해 주면 그냥 자동으로 널 문자가 마지막에 들어가 있음.

	printf("변경 전 : %s \n", array);
	array[0] = 'X';		// 배열에 문자열을 저장하면 값을 변경할 수 있다!!
	printf("변경 후 : %s \n", array);

	return 0;
}