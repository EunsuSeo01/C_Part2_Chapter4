/*
 const Ű���带 �̿��Ͽ� ������ ������ ���ȭ��Ű�� ���.
 ��� 3: ������ ������ ���� �޸� ������ �ּҿ� �� ��� �������� �� �ϰ� �Ѵ�.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	char a = 'A';
	char b = 'B';
	const char* const p = &a;	// *p�� p = &a �� �ٸ� ���ȭ��Ŵ.

	printf("%c \n", *p);
	printf("%c \n", a);

	a = 'X';
	b = 'C';

	printf("%c \n", a);
	printf("%c \n", b);

	// p = &b;		�޸� ������ �ּ� ���� �Ұ�.
	// *p = 'D';	*p�� ���� �� ���� �Ұ�.  -> �� �� ERROR.

	return 0;
}