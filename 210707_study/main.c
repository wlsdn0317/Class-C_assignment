#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Max(int** p_arr);
void Max_2(int** p_arr);


int main(void) {
	int arr[5];
	int* p_arr = arr;

	for (int i = 0; i < 5; i++) {
		printf("���ڸ� �Է��ϼ���(5����) : ");
		scanf(" %d", &arr[i]);
	}
	printf("%d\n", &p_arr);
	printf("%d\n", p_arr);
	printf("%d\n", **&p_arr);
	printf("%d\n", *p_arr);
	
	printf("\n�����ϱ�\n");
	int arr_2[2][3];
	int* p_arr_2 = arr_2;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("���ڸ� �Է��ϼ���(6����) : ");
			scanf(" %d", &arr_2[i]);
		}
	}



}

void Max(int** pp_arr) {
	int max = **pp_arr;	//(pp_arr�� ������ = &p_arr)�� ������ = arr[0]
	for (int i = 0; i < 5; i++) {
		if (max < *(*pp_arr + i)) { //(*pp_arr+i)�� arr[0]�� �ּҰ��� ���ϱ� i�ϱ� 
									//Ǯ��� 4����Ʈ �����ΰͰ� ����
			max = *(*pp_arr + i);
		}
	}
	printf("�ִ밪 : %d", max);
}
void Max(int** pp_arr_2) {
	int max = **pp_arr_2;	//**pp_arr_2 = arr_2[0][0]
	for(int i = 0;i<)
}

