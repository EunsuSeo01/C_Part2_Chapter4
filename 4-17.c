/*
 배열 포인터를 자세히 알아보기 위한 예제1.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int array[2][3] = { 10, 20, 30, 40, 50, 60 };
	int(*p)[3] = NULL;		// (가로 크기가 3인 배열을 가리키는) 배열 포인터 변수 p를 선언.

	p = array;	// p = &array[0][0]	  // p = array[0]   포인터 변수에 배열의 시작 주소를 저장.
	printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);

	printf("-------------\n");
	printf("%x %x %x \n", &p[0][0], &p[0][1], &p[0][2]);
	printf("%x %x %x \n", &p[1][0], &p[1][1], &p[1][2]);

	printf("-------------\n");
	printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
	printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);

	printf("-------------\n");
	printf("%d %d %d \n", *&p[0][0], *&p[0][1], *&p[0][2]);
	printf("%d %d %d \n", *&p[1][0], *&p[1][1], *&p[1][2]);
	
	printf("-------------\n");
	printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);

	printf("-------------\n");
	printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
	printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);

	return 0;
}