#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void _1(int i, int j) {
	if (i > j) {
		printf("%d-%d=%d\n", i, j, i - j);
	}
	else if (j > i) {
		printf("%d-%d=%d\n", j, i, j - i);
	}
	else {
		printf("���� ���� �Է��ϼ̽��ϴ�.\n");
	}
}
void _2(int i) {
	if (i < 0) {
		printf("%d�� ���� �Դϴ�.\n", i);
	}
	else if(i > 0) {
		printf("%d�� ��� �Դϴ�.\n", i);
	}
	else if (i == 0) {
		printf("%d�� '0'�Դϴ�.\n", i);
	}

}
void _3(int i) {
	if (i > 0) {
		for (int j = 0; j < i; j++) {
			printf("HelloWorld\t");
		}
	}
	else if (i <= 0) {
		printf("0 �Ǵ� ������ �Է��ϼ̽��ϴ�.\n");
	}
}
 int _4(int i, int j) {
	 if (i >= j) {
		 return i;
	 }
	 else {
		 return j;
	 }
 }
 int _5(int i, int j, int k) {
	 int small = i;
	 if (small >= j) {
		 small = j;
		 if (small >= k) {
			 small = k;
		}
	 }
	 return small;
 }
void _6(int i) {
	if (i % 2 == 0) {
		printf("%d�� ¦�� �Դϴ�.\n", i);
	}
	else {
		printf("%d�� Ȧ�� �Դϴ�.\n", i);
	}
}
void _7(int i, int j) {
	if (j != 0) {
		printf("�� : %d, �� : %d, �� : %d, �� : %d", i + j, i - j, i * j, i / j);
	}
	else if (j == 0) {
		printf("�� : %d, �� : %d, �� : %d,\n����� '0'�� �� �����ϴ�.", i + j, i - j, i * j);
	}
}
void _8(int i, int j) {
	int add = 0;
	if (i>=j) {
		for (; i >= j; i--) {
			add += i;
		}
		printf("i��j ������ ��� ������ �� : %d", add);
	}
	else if (i <= j) {
		for (; j >= i; j--) {
			add += j;
		}
		printf("i��j ������ ��� ������ �� : %d", add);
	}	
	
}
 int _9(int i, int j, int k) {
	 int average = (i + j + k) / 3;
	 return average;
 }
void _10(int i) {
	printf("���� i��C�� ȭ�� �µ� = %0.1f��F", ((float)i * 9 / 5) + 32);
}
void _11(int i) {
	
}






int main() {
	while (1) {
		int num;
		printf("���� ��ȣ�� �Է��� �ּ��� (1~13) & ���� (0): ");
		scanf(" %d", &num);
		if (num == 1) {
			int i, j;
			printf("\n\n");
			printf("1�� ����\n\n");
			printf("���� 2���� �Է����ּ���. \n");
			printf("ù��° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &i);
			printf("ù��° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &j);
			_1(i, j);
		}
		else if (num == 2) {
			int i;
			printf("\n\n");
			printf("2�� ����\n\n");
			printf("���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &i);
			_2(i);
		}
		else if (num == 3) {
			int i;
			printf("\n\n");
			printf("3�� ����\n\n");
			printf("HelloWorld�� �ݺ��� Ƚ���� �Է����ּ��� : ");
			scanf(" %d", &i);
			_3(i);
		}
		else if (num == 4) {
			int i, j;
			printf("\n\n");
			printf("4�� ����\n\n");
			printf("���� 2���� �Է����ּ���.\n");
			printf("ù��° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &i);
			printf("�ι�° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &j);
			int result = _4(i, j);
			printf("�� ū���� %d �Դϴ�.\n", result);
		}
		else if (num == 5) {
			printf("\n\n");
			printf("5�� ����\n\n");
			int i, j, k;
			printf("���� 3���� �Է��� �ּ���.\n");
			printf("ù��° ���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &i);
			printf("�ι�° ���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &j);
			printf("����° ���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &k);
			int result = _5(i, j, k);
			printf("���� ���� ���� %d �Դϴ�.\n", result);
		}
		else if (num == 6) {
			printf("\n\n");
			printf("6�� ����\n\n");
			int i;
			printf("���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &i);
			_6(i);
		}
		else if (num == 7) {
			int i, j;
			printf("\n\n");
			printf("7�� ����\n\n");
			printf("���� 2���� �Է����ּ���.\n");
			printf("ù��° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &i);
			printf("�ι�° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &j);
			_7(i, j);
		}
		else if (num == 8) {
			int i, j;
			printf("\n\n");
			printf("8�� ����\n\n");
			printf("���� 2���� �Է����ּ���.\n");
			printf("ù��° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &i);
			printf("�ι�° ���ڸ� �Է����ּ��� : ");
			scanf(" %d", &j);
			_8(i, j);
		}
		else if (num == 9) {
			printf("\n\n");
			printf("9�� ����\n\n");
			int i, j, k;
			printf("���� 3���� �Է��� �ּ���.\n");
			printf("ù��° ���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &i);
			printf("�ι�° ���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &j);
			printf("����° ���ڸ� �Է��� �ּ��� : ");
			scanf(" %d", &k);
			printf("i,j,k�� ��� = %d\n",_9(i, j, k));
		
		}
		else if (num == 10) {
			printf("\n\n");
			printf("10�� ����\n\n");
			int i;
			printf("�����µ��� �Է��� �ּ��� : ");
			scanf(" %d", &i);
			_10(i);
		}
		else if (num == 11) {
			printf("\n\n");
			printf("11�� ����\n\n");
			int i;
			printf("������ �Է��� �ּ��� : ");
			scanf(" %d", &i);
		}
		else if (num == 12) {}
		else if (num == 13) {}
		else if (num == 0) {
			printf("\n\n");
			printf("���α׷��� �����մϴ�.\n");
			return 0; }
		else { printf("��ȣ�� �� �� �Է��ϼ̽��ϴ�.\n"); }
		printf("\n\n");
	}

	return 0;
}