/*
 문자열을 서식 문자 %s를 이용해서 일괄적으로 출력해 보는 예제.
 last modified 2021-08-01
*/
#include <stdio.h>
int main(void) {
	char array[] = "ABCD";	// 큰따옴표를 이용하여 문자열 배열을 선언.

	// 문자열 출력.
	// *** 서식 문자 %s는 문자열의 시작 주소를 입력받아서 종료 문자를 만날 때까지 문자열을 출력해 준다. (널 문자 전까지!)
	printf("%s \n", array);
	printf("%s \n", array + 1);		// array + 1의 주소부터 시작해서 널 문자 전까지 문자열을 출력하는 것. -> array + 1 주소에 있는 값인 B부터 출력.
	printf("%s \n", array + 2);
	printf("%s \n", array + 3);

	return 0;
}