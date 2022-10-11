#include "../headers/naves.h"

void printaDinheiro(float puscoin, int x, int y){
    gotoxy(x,y);
    cout << "Puscoin: ";
    textcolor(LIGHTGREEN);
    gotoxy(x+10,y);         cout  << "PS$" << puscoin;
    textcolor(WHITE);
}
