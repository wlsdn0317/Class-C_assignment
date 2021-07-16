#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main(void) {
    int i;
    scanf(" %d", &i);
    for (int j = 1; j <= i; j++) {
        GotoXY(j*2, j);
        printf("¤¡");
    }
}