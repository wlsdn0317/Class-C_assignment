#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum	(int i, int j);
void sub	(int i, int j);
void multi	(int i, int j);
void div	(int i, int j);

int main() {
	
	int i, j, k;
	printf	("������ ��ȣ�� �´� ��ȣ�� �Է����ּ���.\n");	//��ȣ �Է¹ޱ�
	printf	("0)+ 1)- 2)x 3)�� : ");
	scanf	(" %d", &k);
	printf	("2���� ���ڸ� �Է����ּ���.\n");				//�� ���� �Է� �ޱ�
	printf	("ù��° ���� i : ");
	scanf	(" %d", &i);
	printf	("�ι�° ���� j : ");
	scanf	(" %d", &j);
	printf	("\n");
	
	void	(*fptr[4])(i, j) = { sum,sub,multi,div };		//�Լ� ������ ����
	fptr[k]	(i, j);											//�Լ� ȣ��
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
		printf("i �� j = %d", i / j);
	}
	else if (j == 0) {
		printf("�и� 0�� �� �����ϴ�.\n");
	}
}