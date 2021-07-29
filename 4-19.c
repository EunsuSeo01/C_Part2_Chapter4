/*
 포인터 배열이 필요한 이유 -> 저장해야 할 주소의 개수가 많아지면 포인터 변수를 많이 만들어야 됨. -> 보완: 포인터 배열.
 last modified 2021-07-29
*/
#include <stdio.h>
int main(void) {
	int a = 10, b = 20, c = 30;
	int* ap = NULL;
	int* bp = NULL;
	int* cp = NULL;

	ap = &a;
	bp = &b;
	cp = &c;

	printf("%d %d %d \n", a, b, c);
	printf("%d %d %d \n", *ap, *bp, *cp);

	printf("%x %x %x \n", &a, &b, &c);
	printf("%x %x %x \n", ap, bp, cp);
	printf("%x %x %x \n", &ap, &bp, &cp);
	
	return 0;
}