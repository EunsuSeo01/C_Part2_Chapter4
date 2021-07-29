/*
 배열 포인터를 선언해 보는 예제.
   참고하면 좋은 Link> https://dojang.io/mod/page/view.php?id=312
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int array1[2][3];
	int(*p1)[3] = NULL;		// 배열 '포인터' 변수 p1 선언.

	double array2[2][4];
	double(*p2)[4] = NULL;		// 배열 '포인터' 변수 p2 선언.

	p1 = array1;	// p1에 3열을 가지는 2차원 배열 array1의 시작 주소를 저장.
	p2 = array2;	// p2에 4열을 가지는 2차원 배열 array2의 시작 주소를 저장.

	return 0;
}