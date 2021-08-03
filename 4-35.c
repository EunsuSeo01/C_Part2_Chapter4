/*
 const 키워드를 이용하여 포인터 변수를 상수화시키는 방법.
 경우 3: 포인터 변수를 통해 메모리 공간의 주소와 값 모두 변경하지 못 하게 한다.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	char a = 'A';
	char b = 'B';
	const char* const p = &a;	// *p와 p = &a 둘 다를 상수화시킴.

	printf("%c \n", *p);
	printf("%c \n", a);

	a = 'X';
	b = 'C';

	printf("%c \n", a);
	printf("%c \n", b);

	// p = &b;		메모리 공간의 주소 변경 불가.
	// *p = 'D';	*p를 통한 값 변경 불가.  -> 둘 다 ERROR.

	return 0;
}