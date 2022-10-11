#include "../headers/naves.h"

void TanqueGasolina(int x, int y){
    setlocale(LC_ALL, "C");
    char ces=201, cds=187, cdi=188, cei=200, bl=186, bc=205, tm=206 , tms=203, tmdd=185, tmee=204, tmei=202, teta=17;
    textcolor(BLUE);
    gotoxy(x,y);            cout << " " << ces << bc << tms << bc << cds;
    gotoxy(x,y+1);          cout << teta << tmee;
    textbackground(RED);
    gotoxy(x+2,y+1);        cout << bc << tm << bc;
    gotoxy(x+2,y+2);        cout << bc << tm << bc;

    textbackground(NULL);
    gotoxy(x+5, y+1);       cout << tmdd;
    gotoxy(x,y+2);          cout << teta <<tmee;
    gotoxy(x+5, y+2);       cout << tmdd;
    gotoxy(x, y+3);         cout << " " << cei <<  bc << tmei << bc << cdi;
    textcolor(WHITE);

    setlocale(LC_ALL, "portuguese");

}
