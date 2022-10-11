#include "..\headers\naves.h"

void ocultar(int esc){
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    ConCurInf.dwSize = 10;
    if (esc == 1)
        ConCurInf.bVisible = FALSE;

    else
        ConCurInf.bVisible = TRUE;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}
