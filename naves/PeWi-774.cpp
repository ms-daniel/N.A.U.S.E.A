#include "..\headers\naves.h"


void PeWi774(int x, int y){
    setlocale(LC_ALL, "C");
    char barra=219, ab=220, ac=223;

    //branco e sem fundo
    textcolor(WHITE);
    if(y>0){
        gotoxy(x+6, y);             cout << ab << barra << ab;
    }

    if (y>-1){
        gotoxy(x+5, y+1);           cout << ab << barra;
        gotoxy(x+8, y+1);           cout << barra << ab;
    }
    if (y>-2){
        gotoxy(x+5, y+2);           cout << barra;
        gotoxy(x+9, y+2);           cout << barra;
    }
    if (y>-3){
        gotoxy(x+5, y+3);           cout << barra;
        gotoxy(x+9, y+3);           cout << barra;
    }
    if (y>-4){
        gotoxy(x+5, y+4);           cout << barra << barra << barra << barra << barra;
    }
    if (y>-5){
        gotoxy(x+6, y+5);           cout << barra << barra << barra;
    }
    if (y>-6){
        gotoxy(x+2, y+6);           cout << ab << barra << barra;
        gotoxy(x+10, y+6);          cout << barra << barra << ab;
        gotoxy(x+6, y+6);           cout << barra << barra << barra;
    }
    if (y>-7){
        gotoxy(x+1, y+7);           cout << barra << barra << barra;
        gotoxy(x+6, y+7);           cout << barra << barra << barra;
        gotoxy(x+11, y+7);          cout << barra << barra << barra;
    }
    if (y>-8){
        gotoxy(x, y+8);             cout << barra << barra;
        gotoxy(x+3, y+8);           cout << barra;
        gotoxy(x+5, y+8);           cout << barra << barra << barra << barra << barra;
        gotoxy(x+11, y+8);          cout << barra;
        gotoxy(x+13, y+8);          cout << barra << barra;
    }
    if(y>-9){
        gotoxy(x+5, y+9);           cout << barra << barra << barra << barra << barra;
    }
    if (y>-10){
        gotoxy(x+1, y+10);          cout << ac << ac;
        gotoxy(x+4, y+10);          cout << barra << barra;
        gotoxy(x+7, y+10);          cout << barra;
        gotoxy(x+9, y+10);          cout << barra << barra;
        gotoxy(x+12, y+10);         cout << ac << ac;
    }
    if (y>-11){
        gotoxy(x+7, y+11);          cout << ac;
    }

    //cinza com fundo branco
    textcolor(DARKGRAY); textbackground(WHITE);
    if (y>-1){
        gotoxy(x+7, y+1);           cout << ab;
    }
    if (y>-2){
        gotoxy(x+6, y+2);           cout << ac << ac << ac;
    }
    if (y>-3){
        gotoxy(x+6, y+3);           cout << ac << ac << ac;
    }
    if (y>-5){
        gotoxy(x+5, y+5);           cout << ab;
        gotoxy(x+9, y+5);           cout << ab;
    }
    if (y>-7){
        gotoxy(x+5, y+7);           cout << ac;
        gotoxy(x+9, y+7);           cout << ac;
    }
    if (y>-9){
        gotoxy(x, y+9);             cout << ac << ac << ac;
        gotoxy(x+4, y+9);           cout << ac;
        gotoxy(x+10, y+9);          cout << ac;
        gotoxy(x+12, y+9);          cout << ac << ac << ac;
    }
    if (y>-10){
        gotoxy(x+6, y+10);          cout << ab;
        gotoxy(x+8, y+10);          cout << ab;
    }

    //cinza sem fundo
    textbackground(NULL);
    if (y>-5){
        gotoxy(x+4, y+5);           cout << barra;
        gotoxy(x+10, y+5);          cout << barra;
    }
    if (y>-6){
        gotoxy(x+5, y+6);           cout << barra;
        gotoxy(x+9, y+6);           cout << barra;
    }
    if (y>-7){
        gotoxy(x+4, y+7);           cout << barra;
        gotoxy(x+10, y+7);          cout << barra;
    }
    if (y>-8){
        gotoxy(x+4, y+8);           cout << barra;
        gotoxy(x+10, y+8);          cout << barra;
    }
    if (y>-9){
        gotoxy(x+3, y+9);           cout << barra;
        gotoxy(x+11, y+9);          cout << barra;
    }
    if (y>-10){
        gotoxy(x+3, y+10);          cout << ac;
        gotoxy(x+11, y+10);         cout << ac;
    }
    if (y>-11){
        gotoxy(x+5, y+11);          cout << ac << ac;
        gotoxy(x+8, y+11);          cout << ac << ac;
    }

    //azul com fundo branco
    textcolor(BLUE); textbackground(WHITE);
    if (y>-8){
        gotoxy(x+2, y+8);           cout << ac;
        gotoxy(x+12, y+8);          cout << ac;
    }


    gotoxy(1,1); textbackground(NULL); textcolor(WHITE);
    setlocale(LC_ALL, "portuguese");
}
