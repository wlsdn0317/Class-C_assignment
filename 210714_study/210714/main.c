#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

void printLen(char* s1,char* s2);

int main(void) {
	
	char s1[30];
	char s2[30];
	printf("문자열을 입력해주세요.\n");
	gets_s(s1, sizeof(s1));
	gets_s(s2, sizeof(s2));
	printLen(s1,s2);
}
void printLen(char* s1,char* s2) {
	int len_1,len_2;
	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (len_1 > len_2) {
		printf("처음 입력한 문자열이 더 깁니다. 길이 : %d", len_1);
	}
	else if (len_1 < len_2) {
		printf("두번째 입력한 문자열이 더 깁니다. 길이 : %d", len_2);
	}
	else if (len_1 = len_2) {
		printf("첫 문자열과 두번째 문자열 길이가 같습니다.\n");
		strcat(s1, s2);
		printf("입력한 문자열 : %s", s1);
	}
}
