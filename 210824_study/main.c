#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void max(int ary[],int size);

void main() {
	int arr[10] = { 0, };
	int* ptr = arr;
	for (int i = 0; i < 10; i++) {
		printf("���ڸ� �Է����ּ���(%d��°) : ",i+1);
		scanf("%d", &arr[i]);
	}
	max(ptr, sizeof(arr) / sizeof(int));
}

void max(int ary[], int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < ary[i]) {
			max = ary[i];
		}
	}
	printf("���� ū �� : %d", max);
}