/*
 ���ڿ� ����� ���� �ּҸ� �����ϴ� ������ �迭�� Ȱ���ϴ� ����.
 last modified 2021-08-03
*/
#include <stdio.h>
int main(void) {
	char* p = "Good morning";	// ���ڿ��� ���� �ּҸ� ������ ������ ����.
	char* q = "C-language";
	char* array[2] = { "Good morning", "C-language" };		// ������ �迭 ����.
															// array[0]�� ù ��° ���ڿ��� ���� �ּҰ�, array[1]���� �� ��° ���ڿ��� ���� �ּҰ� �����. 

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