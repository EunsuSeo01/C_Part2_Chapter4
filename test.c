#include <stdio.h>
int main(void) {
	int array[2][3] = { 10, 20, 30, 40, 50, 60 };
	int* p1 = array[0];
	int** p2 = &p1;		// 1차원 포인터의 주소를 저장하는 역할.

	printf("%d %d %d \n", *(p2[0] + 0), *(*p2 + 1), *(*p2 + 2));
	printf("%d %d %d \n", *(*p2 + 3), *(*p2 + 4), *(*p2 + 5));

	printf("--------------\n");

	printf("%d %d %d \n", p2[0][0], p2[0][1], p2[0][2]);
	printf("%d %d %d \n", p2[0][3], p2[0][4], p2[0][5]);

	return 0;
}