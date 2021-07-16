#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int count = 0;
	int result = 0;
	int* ptr;
	printf("숫자의 개수 : ");
	scanf("%d", &num);

	ptr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &ptr[i]);
		for (int j = 1; j <= ptr[i]; j++) {
			if (ptr[i] % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			result++;
			count = 0;
		}
		else {
			count = 0;
		}
	}
	printf("\n\n");
	printf("소수의 개수는 %d입니다.", result);

}