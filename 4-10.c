/*
 포인터 변수 p를 고정한 상태에서 배열의 메모리 공간에 접근하는 방식을 보여주는 예제.
<<<<<<< HEAD
 last modified 2021-07-27
*/
#include <stdio.h>
int main(void) {
	int array[3];
	int* p = NULL;

	p = array;
=======
 last modified 2021-07-28
*/
#include <stdio.h>
int main(void) {
	int array[3];	// 초기화 안 함.
	int* p = NULL;

	p = array;	// 포인터 p를 이용하여 배열 array에 접근 가능해짐.
>>>>>>> 43edfcf65c6754d25b581d5cbaea53bf13020414

	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

<<<<<<< HEAD
	*(p + 1) = 20;	// p는 위치 고정해 둔 채로 +를 이용해 다음 요소를 가리키게 함.
=======
	*(p + 1) = 20;	// p는 고정해 둔 상태에서 +를 통해 주소 이동 후 값을 참조.
>>>>>>> 43edfcf65c6754d25b581d5cbaea53bf13020414
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	*(p + 2) = 30;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
<<<<<<< HEAD
	printf("0-------------\n");
=======
	printf("--------------\n");
>>>>>>> 43edfcf65c6754d25b581d5cbaea53bf13020414

	return 0;
}