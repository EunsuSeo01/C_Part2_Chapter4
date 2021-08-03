/*
 Part 2 Chapter 4 연습문제 1번 풀이.
 last modified 2021-08-03
*/
// Q1. 정수형 배열에 10, 30, 40, 30, 20을 저장하고 포인터 변수로 배열에 접근하여 배열의 합을 구하세요.
#include <stdio.h>
int main(void) {
	int arr[5] = { 10, 30, 40, 30, 20 };	// 정수형 배열 선언.
	int* ip = arr;		// 배열의 시작 주소를 포인터 ip에 저장.
	int sum = 0;	// 배열의 합을 저장할 변수 선언.

	//	printf("%d ", sizeof(arr)); -> 20.
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		sum += arr[i];
	}

	printf("배열의 합 : %d\n", sum);

	return 0;
}