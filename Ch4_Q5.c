/*
 Part 2 Chapter 4 연습문제 5번 풀이.
 last modified 2021-08-03
*/
// Q5. 다음 코드를 이용하여 실행 결과와 같은 형태로 출력하는 프로그램을 작성하세요.
#include <stdio.h>
int main(void) {
	char* string[2] = { "I Love C", "Hello World" };		// char형 포인터 배열. -> 문자열 배열.

	printf("%s %s \n", string[0], string[1] + 6);

	return 0;
}