#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Max(int** p_arr);
void Max_2(int** p_arr);


int main(void) {
	int arr[5];
	int* p_arr = arr;
	printf("������ �̼�\n");
	for (int i = 0; i < 5; i++) {
		printf("���ڸ� �Է��ϼ���(5����) : ");
		scanf(" %d", &arr[i]);
	}
	Max(&p_arr);
	
	
}

void Max(int** pp_arr) {
	int max = **pp_arr;	//(pp_arr�� ������ = &p_arr)�� ������ = arr[0]
	for (int i = 0; i < 5; i++) {
		if (max < *(*pp_arr + i)) { //(*pp_arr+i)�� arr[0]�� �ּҰ��� ���ϱ� i�ϱ� 
								    //Ǯ��� 4����Ʈ �����ΰͰ� ����
			max = *(*pp_arr + i);
		}
		printf("%d ", *(*pp_arr + i));
	}
	printf("�ִ밪 : %d", max);
}
