#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum	(int i, int j);
void sub	(int i, int j);
void multi	(int i, int j);
void div	(int i, int j);

int main() {
	
	int i, j, k;
	printf	("연산할 기호에 맞는 번호를 입력해주세요.\n");	//기호 입력받기
	printf	("0)+ 1)- 2)x 3)÷ : ");
	scanf	(" %d", &k);
	printf	("2가지 숫자를 입력해주세요.\n");				//두 수를 입력 받기
	printf	("첫번째 숫자 i : ");
	scanf	(" %d", &i);
	printf	("두번째 숫자 j : ");
	scanf	(" %d", &j);
	printf	("\n");
	
	void	(*fptr[4])(i, j) = { sum,sub,multi,div };		//함수 포인터 선언
	fptr[k]	(i, j);											//함수 호출
	return 0;
}

void sum(int i, int j){
	printf("i + j = %d", i + j);
}
void sub(int i, int j){
	printf("i - j = %d", i - j);
}
void multi(int i, int j){
	printf("i x j = %d", i * j);
}
void div(int i, int j){
	if (j != 0) {
		printf("i ÷ j = %d", i / j);
	}
	else if (j == 0) {
		printf("분모가 0일 수 없습니다.\n");
	}
}