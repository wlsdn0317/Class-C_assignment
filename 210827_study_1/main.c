#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Decimal(int _arr[],int size);

void main() {
	int n;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &n);
	int arr[256] = { 0, };
	

	Decimal(arr,n);

	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			printf("%d ", arr[i]);
		}
		else {
			continue;
		}
	}
}

void Decimal(int _arr[],int size) {
	int count = 0;
	int j = 0;
	for (int i = 2; i <= size; i++) {
		for ( j= 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == i) {
			_arr[count] = j;
			count++;
		}
	}
}