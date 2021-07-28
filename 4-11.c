/*
 포인터 변수 p를 이동시켜 배열의 메모리 공간에 접근하는 방식을 보여주는 예제.
 last modified 2021-07-28
*/
#include <stdio.h>
int main(void) {
	int array[3];
	int* p = NULL;

	p = array;
	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("-------------\n");

	p = p + 1;
	*p = 20;
	printf("%d %d %d \n", p[-1], p[0], p[1]);	// 지금의 p 위치에서 배열 array 측면에서의 첫 번째 요소를 가리키려면(= array[0])
												// -1 이동해야 해서 p[-1]로 적어준다.
	printf("-------------\n");

	p = p + 1;
	*p = 30;
	printf("%d %d %d \n", p[-2], p[-1], p[0]);
	printf("-------------\n");

	printf("%d %d %d \n", p[-2], p[-1], p[0]);
	printf("%d %d %d \n", *(p - 2), *(p - 1), *p);
	printf("-------------\n");

	return 0;
}