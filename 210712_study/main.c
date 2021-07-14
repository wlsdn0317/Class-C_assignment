#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
	int avr;
	int sum =0;
	int* grade;
	printf("학생의 수 : ");
	scanf(" %d", &avr);
	grade = (int*)malloc(avr * sizeof(int));
	printf("\n");
	for (int i = 0; i < avr; i++) {
		printf("학생%d : ", i + 1);
		scanf(" %d", &grade[i]);
		sum += grade[i];
	}
	printf("\n");
	printf("평균 : %d\n", sum / avr);
	free(grade);
}