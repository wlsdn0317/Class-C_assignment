#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

void printLen(char* str);

int main(void) {
	
	char tmp[30];
	char* str[2]; //������ �迭 ����

	for (int i = 0; i < 2; i++) {
		printf("���ڿ��� �Է��ϼ���.\n");
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
		printf("ó�� �Է��� ���ڿ��� �� ��ϴ�. ���� : %d", a);
	}
	else if (b < a) {
		printf("�ι�° �Է��� ���ڿ��� �� ��ϴ�. ���� : %d", b);
	}
	else if (a = b) {
		printf("ù ���ڿ��� �ι�° ���ڿ� ���̰� �����ϴ�.");
		strcat(str[0], str[1]);
		printf("�Է��� ���ڿ� : %s", str[0]);
	}
}
