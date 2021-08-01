/*
 포인터와 문자열의 관계를 볼 수 있는 쉬운 예제.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char* p = "ABCD";	// p에 문자열을 저장하는 의미가 아님! 문자열 상수 ABCD의 '시작 주소'를 char형 포인터인 p에 저장하라는 의미.

	printf("%s \n", p);
	printf("%s \n", p + 1);
	printf("%s \n", p + 2);
	printf("%s \n", p + 3);

	return 0;
}