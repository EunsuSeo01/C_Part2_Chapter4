/*
 포인터 배열과 배열 포인터의 차이를 확인하기 위한 예제.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int a = 10, b = 20, c = 30;
	int* ap[3] = { &a, &b, &c };	// 포인터 배열 선언.

	int array[2][3] = { 10,20,30,40,50,60 };
	int(*p)[3] = array;		// 배열 포인터 선언. 2차원 배열의 시작 주소를 저장.

	printf("%x %x %x \n", &a, &b, &c);
	printf("%x %x %x \n", ap[0], ap[1], ap[2]);
	printf("%x %x %x \n", *(ap + 0), *(ap + 1), *(ap + 2));
	printf("---------------\n");

	printf("%d %d %d \n", *&a, *&b, *&c);
	printf("%d %d %d \n", *ap[0], *ap[1], *ap[2]);
	printf("%d %d %d \n", **(ap + 0), **(ap + 1), **(ap + 2));		// ap[i] == *(ap + i)
	printf("---------------\n");

	printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
	printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);
	printf("---------------\n");

	// printf("Test: %x %x %d\n", array, *p, **(p+1));
	printf("%d %d %d \n", *(p[0] + 0), *(p[0] + 1), *(p[0] + 2));
	printf("%d %d %d \n", *(p[1] + 0), *(p[1] + 1), *(p[1] + 2));
	printf("---------------\n");

	printf("%d %d %d \n", *(*(p + 0) + 0), *(*(p + 0) + 1), *(*(p + 0) + 2));
	printf("%d %d %d \n", *(*(p + 1) + 0), *(*(p + 1) + 1), *(*(p + 1) + 2));		// p[i] == *(p + i)
	printf("---------------\n");

	return 0;
}