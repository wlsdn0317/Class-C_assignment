#ifndef calc
#define calc
#include <stdio.h>

void cal(int x, int y) {
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
}
#endif