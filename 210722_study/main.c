#include "header.h"



int main(void) {
	CursorView(0);
	int XP = 40;
	int YP = 5;
	while (1) {
		GotoXY(XP, YP);
		printf("��");
		for (int i = 0; i < 30; i++) {
			GotoXY(50, 0+i);
			printf("��");
		}
		if (_kbhit()) {
			move();
			system("cls");
		}
		if (XP == 50) {
			printf("��������");
			exit(1);
		}
	}
	return 0;
}