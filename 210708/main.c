#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ�����
void multiple(int (*p_A_arr)[3],int (*p_B_arr)[3]);
void print_A(int (*p_A_arr)[3]);
void print_B(int (*p_B_arr)[3]);

int main(void) {
	int A_arr[3][3];
	int B_arr[3][3];

	int (*A_ptr)[3] = A_arr;
	int (*B_ptr)[3] = B_arr;

	//���A �Է�
	printf("[��� A]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("���ڸ� �Է����ּ��� : ");
			scanf(" %d", &A_arr[i][j]);
		}
	}
	//���B �Է�
	printf("[��� B]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("���ڸ� �Է����ּ��� : ");
			scanf(" %d", &B_arr[i][j]);
		}
	}
	print_A(A_arr); //print_A�Լ� ȣ��
	print_B(B_arr);//print_B�Լ� ȣ��
	multiple(A_arr,B_arr);//multiple�Լ� ȣ��

}

void multiple(int (*p_A_arr)[3],int (*p_B_arr)[3]) {
	int result[3][3] = { 0 };
	printf("\n[��� ��]\n");
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
	printf("\n[��� A]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",*(*(p_A_arr+i)+j));
		}
		printf("\n");
	}
}
void print_B(int (*p_B_arr)[3]) {
	printf("\n[��� B]\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p_B_arr + i) + j));
		}
		printf("\n");
	}
}