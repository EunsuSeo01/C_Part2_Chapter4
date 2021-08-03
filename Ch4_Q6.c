/*
 Part 2 Chapter 4 연습문제 6번 풀이.
 last modified 2021-08-03
*/
// Q6. 다음 프로그램의 에러 발생 원인이 무엇인지를 분석하세요.
#include <stdio.h>
int main(void) {
	// 문자열은 이 둘 중 어떻게 선언해도 문제가 없다!
	char* array1 = "ABCD";
	char array2[] = "ABCD";

	//	array1[0] = 'X';	ERROR! 포인터 변수에 저장한 "ABCD"는 문자열 상수라서 변경이 불가능함.
	array2[0] = 'X';		// 배열은 각각이 index로 이름이 있기 때문에 이제 상수가 아님. -> 변경 가능.

	printf("%s %s\n", array1, array2);

	return 0;
}