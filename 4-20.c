/*
 포인터 배열을 사용해 본 예제.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int a = 10, b = 20, c = 30;
	int* ap[3] = { NULL, NULL, NULL };

	ap[0] = &a;
	ap[1] = &b;
	ap[2] = &c;

	printf("%x %x %x \n", &a, &b, &c);
	printf("%x %x %x \n", ap[0], ap[1], ap[2]);		// 포인터 배열이기 때문에 배열의 각 요소가 주소임. 
	printf("%x %x %x \n", *(ap + 0), *(ap + 1), *(ap + 2));		// ap[0] == *(ap + 0)

	// 위의 주소들에 *를 붙여서 값에 참조!
	printf("%d %d %d \n", *&a, *&b, *&c);
	printf("%d %d %d \n", *ap[0], *ap[1], *ap[2]);		// 각 주소에 참조하여 실제 값을 얻음.
	printf("%d %d %d \n", **(ap + 0), **(ap + 1), **(ap + 2));

	return 0;
}