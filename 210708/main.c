#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수선언
void multiple(int (*p_A_arr)[3],int (*p_B_arr)[3]);
void print_A(int (*p_A_arr)[3]);
void print_B(int (*p_B_arr)[3]);

int main(void) {
	int A_arr[3][3];
	int B_arr[3][3];

	int (*A_ptr)[3] = A_arr;
	int (*B_ptr)[3] = B_arr;

	//행렬A 입력
	printf("[행렬 A]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("숫자를 입력해주세요 : ");
			scanf(" %d", &A_arr[i][j]);
		}
	}
	//행렬B 입력
	printf("[행렬 B]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("숫자를 입력해주세요 : ");
			scanf(" %d", &B_arr[i][j]);
		}
	}
	print_A(A_arr); //print_A함수 호출
	print_B(B_arr);//print_B함수 호출
	multiple(A_arr,B_arr);//multiple함수 호출

}

void multiple(int (*p_A_arr)[3],int (*p_B_arr)[3]) {
	int result[3][3] = { 0 };
	printf("\n[행렬 곱]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				result[i][j] += *(*(p_A_arr + i) + k) * *(*(p_B_arr + k) + j);
			}
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
void print_A(int (*p_A_arr)[3]) {
	printf("\n[행렬 A]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",*(*(p_A_arr+i)+j));
		}
		printf("\n");
	}
}
void print_B(int (*p_B_arr)[3]) {
	printf("\n[행렬 B]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p_B_arr + i) + j));
		}
		printf("\n");
	}
}