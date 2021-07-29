/*
 포인터 변수를 통해 2차원 배열에 접근하는 방법
 1. 1차원 포인터 변수에 2차원 배열의 시작 주소를 저장하는 방법 의 예제. -> 1차원 포인터 변수를 이용해서 1차원 배열처럼 접근함!
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int array[2][3] = {
		{ 10, 20, 30 },
		{ 40, 50, 60 }
	};

	// ** 1차원 포인터 변수 ip에 2차원 배열의 첫 행의 주소값을 저장시킨다! -> 그 행을 가지고 있는 1차원 배열처럼 접근하는 것임.
	int* ip = array[0];		// 2차원 배열에서 array[0]은 주소값을 나타낸다.
	// int* ip = array;
	// int* ip = &array[0][0];

	printf("주소\n");
	printf("%x %x %x \n", &ip[0], &ip[1], &ip[2]);
	printf("%x %x %x \n", &ip[3], &ip[4], &ip[5]);	// 2차원 배열의 실제 메모리 구조는
													// 이 array 배열의 요소 6개가 다 같은 줄에 연속적으로 저장되어 있음.
													// 그래서 1차원 포인터인 ip로는 ip[3], ip[4], ip[5]로 접근이 가능.

	printf("--------------\n");
	printf("값\n");
	printf("%d %d %d \n", ip[0], ip[1], ip[2]);
	printf("%d %d %d \n", ip[3], ip[4], ip[5]);

	printf("--------------\n");
	printf("%d %d %d \n", *ip, *(ip + 1), *(ip + 2));
	printf("%d %d %d \n", *(ip + 3), *(ip + 4), *(ip + 5));

	return 0;
}