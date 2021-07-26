/*
 *p, p[0]의 값이 p에 저장된 주소값에 따라 달라지는 것을 보여주는 예제.
 last modified 2021-07-27
*/
#include <stdio.h>
int main(void) {
	int array[3] = { 10, 20, 30 };
	int* p = NULL;

	p = array;	// p = &array[0]
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("--------------\n");

	p = p + 1;	// p == array니까. p = array + 1과 같음. -> p = &array[1]
	printf("%d %d %d \n", p[-1], p[0], p[1]);
	printf("%d %d %d \n", *(p - 1), *p, *(p + 1));
	printf("--------------\n");

	p = p + 1;	// p == array니까. p = array + 1과 같음. -> p = &array[2]
	printf("%d %d %d \n", p[-2], p[-1], p[0]);
	printf("%d %d %d \n", *(p - 2), *(p - 1), *p);
	printf("--------------\n");

	return 0;
}