/*
 2차원 배열에서 *(array+i) == *&array[i] == array[i]는 주소를 표현한다.
 last modified 2021-07-28
*/
#include <stdio.h>
int main(void) {
	int array[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};

	printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
	printf("%x %x %x \n", &array[2][0], &array[2][1], &array[2][2]);
	printf("---------------\n");

	printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
	printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);
	printf("%d %d %d \n", *&array[2][0], *&array[2][1], *&array[2][2]);
	printf("---------------\n");

	printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);

	return 0;
}