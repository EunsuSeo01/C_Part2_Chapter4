/*
 포인터 변수를 통해 2차원 배열에 접근하는 방법.
 2. 배열 포인터를 사용하여 2차원 배열처럼 접근하는 방법 의 예제.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int array[2][3] = { 10, 20, 30, 40, 50, 60 };
	int(*p)[3] = NULL;
	
	p = array;		// p = &array[0][0]	  // p = array[0];	포인터 변수에 배열의 시작주소를 저장.

	printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
	printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);

	return 0;
}