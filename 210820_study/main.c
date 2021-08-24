#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int ary[5] = { 0, };
	int* ptr = ary;
	for (int i = 0; i < 5; i++) {
		printf("정수를 입력해 주세요 : ");
		scanf(" %d", &ary[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *((ptr + 4) - i));
	}

}