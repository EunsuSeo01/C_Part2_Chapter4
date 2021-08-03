/*
 문자열 상수의 시작 주소를 저장하는 포인터 배열을 활용하는 예제.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	char* p = "Good morning";	// 문자열의 시작 주소를 포인터 변수에 저장.
	char* q = "C-language";
	char* array[2] = { "Good morning", "C-language" };		// 포인터 배열 선언.
															// array[0]에 첫 번째 문자열의 시작 주소가, array[1]에는 두 번째 문자열의 시작 주소가 저장됨. 

	printf("%s \n", p);
	printf("%s \n", q);
	printf("-------------\n");

	printf("%s \n", array[0]);
	printf("%s \n", array[1]);
	printf("-------------\n");

	printf("%s \n", p + 5);
	printf("%s \n", q + 2);
	printf("-------------\n");

	printf("%s \n", array[0] + 5);
	printf("%s \n", array[1] + 2);

	return 0;
}