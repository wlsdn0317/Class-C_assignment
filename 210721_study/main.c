#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224

void GotoXY(int x, int y);
void CursorView(char show);
void Move(void);
void GotoXY(int x, int y) {
	COORD POS;
	POS.X = x;
	POS.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), POS);
}

void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void Move(void) {
	int nkey;
	int x = 25, y = 10;
	GotoXY(x, y);
	CursorView(0);
	printf("け");
	while (1) {
		if (_kbhit()) {
			nkey = _getch();
			if (nkey == ARROW) {
				nkey = _getch();
				switch (nkey) {
				case UP:
					if (y != 0) {
						system("cls");
						GotoXY(x, y - 1);
						y--;
						printf("け");
						break;
					}
				case DOWN:
					if (y != 80) {
						system("cls");
						GotoXY(x, y + 1);
						y++;
						printf("け");
						break;
					}
				case RIGHT:
					if (x != 150) {
						system("cls");
						GotoXY(x + 1, y);
						x++;
						printf("け");
						break;
					}
				case LEFT:
					if (x != 0) {
						system("cls");
						GotoXY(x - 1, y);
						x--;
						printf("け");
						break;
					}
				}
			}
		}
	}
}
void main(void) {
	CursorView(0);
	Move();
}