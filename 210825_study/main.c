#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ReverseArr(int arr[], int size);


void main() {
	int arr[10] = { 0, };
	int* ptr = arr;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	ReverseArr(ptr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}

void ReverseArr(int arr[], int size) {
	int tmp[10] = { 0, };
	for (int i = 0; i < size; i++) {
		tmp[i] = arr[i];
	}
	for (int i = 0; i < size; i++) {
		arr[i] = tmp[9 - i];
	}
	printf("\n");
}