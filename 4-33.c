/*
 const 키워드를 이용하여 포인터 변수를 상수화시키는 방법.
 경우 1: 포인터 변수에 다른 메모리 공간의 주소를 저장하지 못 하게 한다.
  = 하나의 주소값만 저장하게 한다.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	char* a = 'A';
	char* b = 'B';
	
	char* const p = &a;		// p = &a 부분을 상수화시킨 것!

	*p = 'C';	// p가 가리키고 있는 공간(주소)이 바뀌는 것 아니면 상관없음.
	printf("%c \n", *p);
	printf("%c \n", a);

	// p = &b;		ERROR! p = &a 부분이 상수화 되었기 때문에 p는 계속 a의 메모리 공간만 가리키고 있어야 함. b의 공간으로 변경이 불가.

	return 0;
}