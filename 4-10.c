/*
 ������ ���� p�� ������ ���¿��� �迭�� �޸� ������ �����ϴ� ����� �����ִ� ����.
<<<<<<< HEAD
 last modified 2021-07-27
*/
#include <stdio.h>
int main(void) {
	int array[3];
	int* p = NULL;

	p = array;
=======
 last modified 2021-07-28
*/
#include <stdio.h>
int main(void) {
	int array[3];	// �ʱ�ȭ �� ��.
	int* p = NULL;

	p = array;	// ������ p�� �̿��Ͽ� �迭 array�� ���� ��������.
>>>>>>> 43edfcf65c6754d25b581d5cbaea53bf13020414

	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

<<<<<<< HEAD
	*(p + 1) = 20;	// p�� ��ġ ������ �� ä�� +�� �̿��� ���� ��Ҹ� ����Ű�� ��.
=======
	*(p + 1) = 20;	// p�� ������ �� ���¿��� +�� ���� �ּ� �̵� �� ���� ����.
>>>>>>> 43edfcf65c6754d25b581d5cbaea53bf13020414
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	*(p + 2) = 30;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("--------------\n");

	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
<<<<<<< HEAD
	printf("0-------------\n");
=======
	printf("--------------\n");
>>>>>>> 43edfcf65c6754d25b581d5cbaea53bf13020414

	return 0;
}