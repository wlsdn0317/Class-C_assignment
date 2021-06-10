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
		printf("같은 수를 입력하셨습니다.\n");
	}
}
void _2(int i) {
	if (i < 0) {
		printf("%d는 음수 입니다.\n", i);
	}
	else if(i > 0) {
		printf("%d는 양수 입니다.\n", i);
	}
	else if (i == 0) {
		printf("%d는 '0'입니다.\n", i);
	}

}
void _3(int i) {
	if (i > 0) {
		for (int j = 0; j < i; j++) {
			printf("HelloWorld\t");
		}
	}
	else if (i <= 0) {
		printf("0 또는 음수를 입력하셨습니다.\n");
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
		printf("%d는 짝수 입니다.\n", i);
	}
	else {
		printf("%d는 홀수 입니다.\n", i);
	}
}
void _7(int i, int j) {
	if (j != 0) {
		printf("합 : %d, 차 : %d, 곱 : %d, 몫 : %d", i + j, i - j, i * j, i / j);
	}
	else if (j == 0) {
		printf("합 : %d, 차 : %d, 곱 : %d,\n본모는 '0'일 수 없습니다.", i + j, i - j, i * j);
	}
}
void _8(int i, int j) {
	int add = 0;
	if (i>=j) {
		for (; i >= j; i--) {
			add += i;
		}
		printf("i와j 사이의 모든 숫자의 합 : %d", add);
	}
	else if (i <= j) {
		for (; j >= i; j--) {
			add += j;
		}
		printf("i와j 사이의 모든 숫자의 합 : %d", add);
	}	
	
}
 int _9(int i, int j, int k) {
	 int average = (i + j + k) / 3;
	 return average;
 }
void _10(int i) {
	printf("섭씨 i°C의 화씨 온도 = %0.1f°F", ((float)i * 9 / 5) + 32);
}
void _11(int i) {
	
}






int main() {
	while (1) {
		int num;
		printf("문제 번호를 입력해 주세요 (1~13) & 종료 (0): ");
		scanf(" %d", &num);
		if (num == 1) {
			int i, j;
			printf("\n\n");
			printf("1번 문제\n\n");
			printf("숫자 2개를 입력해주세요. \n");
			printf("첫번째 숫자를 입력해주세요 : ");
			scanf(" %d", &i);
			printf("첫번째 숫자를 입력해주세요 : ");
			scanf(" %d", &j);
			_1(i, j);
		}
		else if (num == 2) {
			int i;
			printf("\n\n");
			printf("2번 문제\n\n");
			printf("숫자를 입력해 주세요 : ");
			scanf(" %d", &i);
			_2(i);
		}
		else if (num == 3) {
			int i;
			printf("\n\n");
			printf("3번 문제\n\n");
			printf("HelloWorld를 반복할 횟수를 입력해주세요 : ");
			scanf(" %d", &i);
			_3(i);
		}
		else if (num == 4) {
			int i, j;
			printf("\n\n");
			printf("4번 문제\n\n");
			printf("숫자 2개를 입력해주세요.\n");
			printf("첫번째 숫자를 입력해주세요 : ");
			scanf(" %d", &i);
			printf("두번째 숫자를 입력해주세요 : ");
			scanf(" %d", &j);
			int result = _4(i, j);
			printf("더 큰수는 %d 입니다.\n", result);
		}
		else if (num == 5) {
			printf("\n\n");
			printf("5번 문제\n\n");
			int i, j, k;
			printf("숫자 3개를 입력해 주세요.\n");
			printf("첫번째 숫자를 입력해 주세요 : ");
			scanf(" %d", &i);
			printf("두번째 숫자를 입력해 주세요 : ");
			scanf(" %d", &j);
			printf("세번째 숫자를 입력해 주세요 : ");
			scanf(" %d", &k);
			int result = _5(i, j, k);
			printf("가장 작은 숫자 %d 입니다.\n", result);
		}
		else if (num == 6) {
			printf("\n\n");
			printf("6번 문제\n\n");
			int i;
			printf("숫자를 입력해 주세요 : ");
			scanf(" %d", &i);
			_6(i);
		}
		else if (num == 7) {
			int i, j;
			printf("\n\n");
			printf("7번 문제\n\n");
			printf("숫자 2개를 입력해주세요.\n");
			printf("첫번째 숫자를 입력해주세요 : ");
			scanf(" %d", &i);
			printf("두번째 숫자를 입력해주세요 : ");
			scanf(" %d", &j);
			_7(i, j);
		}
		else if (num == 8) {
			int i, j;
			printf("\n\n");
			printf("8번 문제\n\n");
			printf("숫자 2개를 입력해주세요.\n");
			printf("첫번째 숫자를 입력해주세요 : ");
			scanf(" %d", &i);
			printf("두번째 숫자를 입력해주세요 : ");
			scanf(" %d", &j);
			_8(i, j);
		}
		else if (num == 9) {
			printf("\n\n");
			printf("9번 문제\n\n");
			int i, j, k;
			printf("숫자 3개를 입력해 주세요.\n");
			printf("첫번째 숫자를 입력해 주세요 : ");
			scanf(" %d", &i);
			printf("두번째 숫자를 입력해 주세요 : ");
			scanf(" %d", &j);
			printf("세번째 숫자를 입력해 주세요 : ");
			scanf(" %d", &k);
			printf("i,j,k의 평균 = %d\n",_9(i, j, k));
		
		}
		else if (num == 10) {
			printf("\n\n");
			printf("10번 문제\n\n");
			int i;
			printf("섭씨온도를 입력해 주세요 : ");
			scanf(" %d", &i);
			_10(i);
		}
		else if (num == 11) {
			printf("\n\n");
			printf("11번 문제\n\n");
			int i;
			printf("점수를 입력해 주세요 : ");
			scanf(" %d", &i);
		}
		else if (num == 12) {}
		else if (num == 13) {}
		else if (num == 0) {
			printf("\n\n");
			printf("프로그램을 종료합니다.\n");
			return 0; }
		else { printf("번호를 잘 못 입력하셨습니다.\n"); }
		printf("\n\n");
	}

	return 0;
}