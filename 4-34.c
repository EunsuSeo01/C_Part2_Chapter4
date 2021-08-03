/*
 const 키워드를 이용하여 포인터 변수를 상수화시키는 방법.
 경우 2: 포인터 변수를 통해 메모리 공간의 값을 변경하지 못 하게 한다.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	char a = 'A';
	char b = 'B';
	const char* p = &a;		// char* p 영역을 상수화하였다! = *p가 상수화됨.
							// -> *p를 통해 값을 변경하는 행위가 불가능해짐.

	printf("%c \n", *p);
	printf("%c \n", a);

	p = &b;		// p에 저장되어 있는 주소값은 변경이 가능함! 이제 b의 메모리 영역을 가리키게 됨.
	printf("%c \n", *p);
	printf("%c \n", b);

	a = 'X';
	b = 'C';
	// *p = 'D';

	return 0;
}