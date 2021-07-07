#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Max(int** p_arr);
void Max_2(int** p_arr);


int main(void) {
	int arr[5];
	int* p_arr = arr;

	for (int i = 0; i < 5; i++) {
		printf("숫자를 입력하세요(5가지) : ");
		scanf(" %d", &arr[i]);
	}
	printf("%d\n", &p_arr);
	printf("%d\n", p_arr);
	printf("%d\n", **&p_arr);
	printf("%d\n", *p_arr);
	
	printf("\n응용하기\n");
	int arr_2[2][3];
	int* p_arr_2 = arr_2;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("숫자를 입력하세요(6가지) : ");
			scanf(" %d", &arr_2[i]);
		}
	}



}

void Max(int** pp_arr) {
	int max = **pp_arr;	//(pp_arr의 역참조 = &p_arr)의 역참조 = arr[0]
	for (int i = 0; i < 5; i++) {
		if (max < *(*pp_arr + i)) { //(*pp_arr+i)는 arr[0]의 주소값에 더하기 i니까 
									//풀어쓰면 4바이트 움직인것과 같음
			max = *(*pp_arr + i);
		}
	}
	printf("최대값 : %d", max);
}
void Max(int** pp_arr_2) {
	int max = **pp_arr_2;	//**pp_arr_2 = arr_2[0][0]
	for(int i = 0;i<)
}

