#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

void printLen(char* str);

int main(void) {
	
	char tmp[30];
	char* str[2]; //포인터 배열 선언

	for (int i = 0; i < 2; i++) {
		printf("문자열을 입력하세요.\n");
		gets(tmp);
		str[i] = (char*)malloc(strlen(tmp) + 1);
		strcpy(str[i], tmp);
	}

	printLen(str);
}
void printLen(char* str) {
	int a, b;
	a = strlen(str[0]);
	b = strlen(str[1]);
	if (a > b) {
		printf("처음 입력한 문자열이 더 깁니다. 길이 : %d", a);
	}
	else if (b < a) {
		printf("두번째 입력한 문자열이 더 깁니다. 길이 : %d", b);
	}
	else if (a = b) {
		printf("첫 문자열과 두번째 문자열 길이가 같습니다.");
		strcat(str[0], str[1]);
		printf("입력한 문자열 : %s", str[0]);
	}
}
