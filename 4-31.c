/*
 문자열 상수 "ABCD"의 주소를 알아보기 위한 예제.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	// 문자열 상수의 시작 주소를 저장.
	char* p = &"ABCD";	// char* p = "ABCD"; 와 같은 코드.

	printf("%x \n", p);
	printf("%x \n", p + 1);
	printf("%x \n", p + 2);
	printf("%x \n", p + 3);
	printf("%x \n", p + 4);
	printf("---------\n");

	printf("%x %x \n", &"ABCD", p);		// 두 개는 같은 값이 나온다.

	return 0;
}