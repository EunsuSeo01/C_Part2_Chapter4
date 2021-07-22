#include <stdio.h>
// 포인터 변수를 통해 1차원 배열에 접근하기.
int main() {
	int array[3] = { 10, 20, 30 };
	int* p = NULL;

	p = array;	// 배열의 시작 주소를 포인터에 저장.

	printf("%x %x %x \n", p, p + 0, &p[0]);
	printf("%x %x \n", p + 1, &p[1]);
	printf("%x %x \n", p + 2, &p[2]);

	/* array는 int[3]의 배열이라서 sizeof(array)하면 12 나오지만,
	   p는 int형 포인터라서 '포인터의 크기'가 나옴.
	   32 bit 컴파일러면 포인터의 크기 = 4 byte.
	   64 bit 컴파일러면 포인터의 크기 = 8 byte. */
	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));
	printf("%d %d %d \n", sizeof(p), sizeof(p + 0), sizeof(&p[0]));

	return 0;
}