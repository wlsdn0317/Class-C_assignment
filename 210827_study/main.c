#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num ;
	int ary[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &ary[i]);
	}
	num = ary[1];
	for (int i = 0; i < 5; i++) {
		if (num > ary[i]) {
			num = ary[i];
		}
	}
	printf("\n가장 작은 수는 %d입니다.", num);
}
