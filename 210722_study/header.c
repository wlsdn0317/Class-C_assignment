#include "header.h"

void CursorView(char show) {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void move() {
	
	int nkey;
	if (_kbhit()) {
		nkey = _getch();
		if (nkey == ARROW) {
			nkey = _getch();
			switch (nkey) {
			case UP:
				YP--;
				break;
			case DOWN:
				YP++;
				break;
			case LEFT:
				XP--;
				break;
			case RIGHT:
				XP++;
				break;
			}
		}
	}
}

