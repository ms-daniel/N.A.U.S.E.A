#include "../headers/naves.h"

void Planeta(int plan, int y){
    if (plan == 1 || plan == 5 || plan == 6)
        textbackground(LIGHTGRAY);
    else if (plan == 2)
        textbackground(LIGHTRED);
    else if (plan == 3)
        textbackground(LIGHTCYAN);
    else if (plan == 4)
        textbackground(RED);
    else if (plan == 7 || plan == 10)
        textbackground(DARKGRAY);
    else if (plan == 8)
        textbackground(CYAN);
    else if (plan == 9)
        textbackground(BLUE);
    else
        textbackground(LIGHTRED);

    for (int x=y;x<y+25;x++){
        gotoxy(25,x);
        cout << "                    ";
    }
    for (int x=y+1;x<y+24;x++){
        gotoxy(21,x);
        cout << "                            ";
    }
    for (int x=y+2;x<y+23;x++){
        gotoxy(17,x);
        cout << "                                    ";
    }
    for (int x=y+3;x<y+22;x++){
        gotoxy(15,x);
        cout << "                                        ";
    }
    for (int x=y+4;x<y+21;x++){
        gotoxy(13,x);
        cout << "                                            ";
    }
    for (int x=y+6;x<y+19;x++){
        gotoxy(11,x);
        cout << "                                                ";
    }
    for (int x=y+8;x<y+17;x++){
        gotoxy(9,x);
        cout << "                                                    ";
    }
    textbackground(NULL);
}
