#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int _n);

int main() {
	int num;
	scanf(" %d", &num);
	printf("%d", fact(num));
}

int fact(int _n) {
	if (_n ==1) {
		return 1;
	}
	return _n* fact(_n - 1);
}