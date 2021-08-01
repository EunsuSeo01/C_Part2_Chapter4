/*
 포인터 변수를 통해 문자 배열에 접근하는 것을 보여주는 예제. 
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array1[] = { 'A', 'B', 'C', 'D' };
	char* p = NULL;

	p = array1;		// 포인터 변수에 문자 배열의 시작 주소를 저장.

	printf("%c %c %c %c \n", p[0], p[1], p[2], p[3]);	// char형으로 출력.
	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);	// int형으로 출력. -> char형을 int형으로(10진수 형태로) 출력하면 ASCII CODE 값이 출력됨! ('A' == 65)

	printf("%c %c %c %c \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));	// p[i] == *(p + i)임을 이용해서 위와 같은 값 도출.
	printf("%d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));

	return 0;
}