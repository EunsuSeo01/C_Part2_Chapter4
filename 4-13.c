/*
 2차원 배열에서 *(array + i) == *&array[i] == array[i]는 주소를 나타낸다.
 last modified 2021-07-28
*/
#include <stdio.h>
int main(void) {
	int array[2][3] = {
		{ 10, 20, 30 },
		{ 40, 50, 60 }
	};

	printf("------------------#1--------------------\n");
	printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);

	printf("------------------#2--------------------\n");
	printf("%x %x \n", array, array + 1);
	printf("%x %x \n", array[0], array[1]);
	printf("%x %x \n", *(array + 0), *(array + 1));

	printf("------------------#3--------------------\n");
	printf("%d %d %d \n", *(array[0] + 0), *(array[0] + 1), *(array[0] + 2));
	printf("%d %d %d \n", *(array[1] + 0), *(array[1] + 1), *(array[1] + 2));

	printf("------------------#4--------------------\n");
	printf("%d %d %d \n", *(*(array + 0) + 0), *(*(array + 0) + 1), *(*(array + 0) + 2));
	printf("%d %d %d \n", *(*(array + 1) + 0), *(*(array + 1) + 1), *(*(array + 1) + 2));

	// array[0] == *(array + 0)
	// array[1] == *(array + 1)

	return 0;
}