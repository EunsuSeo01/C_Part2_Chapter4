/*
 Part 2 Chapter 4 �������� 6�� Ǯ��.
 last modified 2021-08-03
*/
// Q6. ���� ���α׷��� ���� �߻� ������ ���������� �м��ϼ���.
#include <stdio.h>
int main(void) {
	// ���ڿ��� �� �� �� ��� �����ص� ������ ����!
	char* array1 = "ABCD";
	char array2[] = "ABCD";

	//	array1[0] = 'X';	ERROR! ������ ������ ������ "ABCD"�� ���ڿ� ����� ������ �Ұ�����.
	array2[0] = 'X';		// �迭�� ������ index�� �̸��� �ֱ� ������ ���� ����� �ƴ�. -> ���� ����.

	printf("%s %s\n", array1, array2);

	return 0;
}