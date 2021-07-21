#include<stdio.h>
#include<Windows.h>

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void CursorView(char view)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = view;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}
int main()
{
	CursorView(0);

	while (TRUE)
	{
		for (int i = 1; i < 10; i++)
		{
			GotoXY(25, i - 1);
			printf("  ");
			GotoXY(25, i);
			printf("¤±");
			Sleep(50);
		}
		for (int j = 8; j > 0; j--)
		{
			GotoXY(25, j + 1);
			printf("  ");
			GotoXY(25, j);
			printf("¤±");
			Sleep(50);
		}
	}
	return 0;
}
