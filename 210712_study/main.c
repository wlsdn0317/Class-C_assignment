#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
	int avr;
	int sum =0;
	int* grade;
	printf("�л��� �� : ");
	scanf(" %d", &avr);
	grade = (int*)malloc(avr * sizeof(int));
	printf("\n");
	for (int i = 0; i < avr; i++) {
		printf("�л�%d : ", i + 1);
		scanf(" %d", &grade[i]);
		sum += grade[i];
	}
	printf("\n");
	printf("��� : %d\n", sum / avr);
	free(grade);
}