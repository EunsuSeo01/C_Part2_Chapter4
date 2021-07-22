#include <stdio.h>
// ������ ������ ���� 1���� �迭�� �����ϱ�.
int main() {
	int array[3] = { 10, 20, 30 };
	int* p = NULL;

	p = array;	// �迭�� ���� �ּҸ� �����Ϳ� ����.

	printf("%x %x %x \n", p, p + 0, &p[0]);
	printf("%x %x \n", p + 1, &p[1]);
	printf("%x %x \n", p + 2, &p[2]);

	/* array�� int[3]�� �迭�̶� sizeof(array)�ϸ� 12 ��������,
	   p�� int�� �����Ͷ� '�������� ũ��'�� ����.
	   32 bit �����Ϸ��� �������� ũ�� = 4 byte.
	   64 bit �����Ϸ��� �������� ũ�� = 8 byte. */
	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));
	printf("%d %d %d \n", sizeof(p), sizeof(p + 0), sizeof(&p[0]));

	return 0;
}