#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

void printLen(char* s1,char* s2);

int main(void) {
	
	char s1[30];
	char s2[30];
	printf("���ڿ��� �Է����ּ���.\n");
	gets_s(s1, sizeof(s1));
	gets_s(s2, sizeof(s2));
	printLen(s1,s2);
}
void printLen(char* s1,char* s2) {
	int len_1,len_2;
	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (len_1 > len_2) {
		printf("ó�� �Է��� ���ڿ��� �� ��ϴ�. ���� : %d", len_1);
	}
	else if (len_1 < len_2) {
		printf("�ι�° �Է��� ���ڿ��� �� ��ϴ�. ���� : %d", len_2);
	}
	else if (len_1 = len_2) {
		printf("ù ���ڿ��� �ι�° ���ڿ� ���̰� �����ϴ�.\n");
		strcat(s1, s2);
		printf("�Է��� ���ڿ� : %s", s1);
	}
}
