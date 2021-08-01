/*
 문자열을 배열에 저장한 형식과 포인터 변수에 문자열 상수의 시작 주소를 저장한 것의 차이를 보여주는 예제. -> 잘 모르겠음...
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = "ABCD";	// 문자열을 배열에 저장. 큰따옴표로 선언했으므로 array[4]까지 접근 가능.(널 문자 들어있음)
	char* p = "ABCD";		// 문자열 상수의 시작 주소를 포인터 p에 저장.
	// 문자열 상수 ABCD가 저장된 메모리 공간은 이름이 없음!! -> 메모리 공간에 붙여진 이름이 없다 = 상수이다.

	p[0] = 'X';			// ERROR! 문자열 ABCD는 문자열 상수라서 변경 불가함.
	array[0] = 'X';		// 변경 가능.

	p = array;		// 변경 가능. p는 포인터 변수라서 배열의 시작 주소를 저장할 수 있음.
	// array = array + 1;		// ERROR! 배열 이름은 상수라서 변경 불가함.

	printf("%s \n", array);
	printf("%s \n", p);

	return 0;
}