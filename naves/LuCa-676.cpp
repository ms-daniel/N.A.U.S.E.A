#include "..\headers\naves.h"


void LuCa676(int x, int y){
    setlocale(LC_ALL,"C");
    char barra=219, ab=220, ac=223;

    //todos os textos em branco, sem fundo
    textcolor(WHITE); textbackground(NULL);
    if(y>-0){
        gotoxy(x+7,y);              cout << barra;
    }
    if(y>-1){
        gotoxy(x+7,y+1);            cout << barra;
    }
    if (y>-2){
        gotoxy(x+6,y+2);            cout << barra << barra << barra;
    }
    if (y>-3){
        gotoxy(x+5,y+3);            cout << ab << barra << barra << barra << ab;
    }
    if (y>-4){
        gotoxy(x+5,y+4);            cout << barra;
        gotoxy(x+9,y+4);            cout << barra;
    }
    if (y>-5){
        gotoxy(x+2,y+5);            cout << ab << barra << barra << barra;
        gotoxy(x+7,y+5);            cout << barra;
        gotoxy(x+9,y+5);            cout << barra << barra << barra << ab;
    }
    if (y>-6){
        gotoxy(x,y+6);              cout << barra << barra << barra << ac;
        gotoxy(x+6,y+6);            cout << barra << barra << barra;
        gotoxy(x+11,y+6);           cout << ac << barra << barra << barra;
    }
    if (y>-7){
        gotoxy(x,y+7);              cout << barra << ac;
        gotoxy(x+7,y+7);            cout << barra;
        gotoxy(x+13,y+7);           cout << ac << barra;
    }
    //todos os vermelhos sem fundo
    textcolor(RED); textbackground(NULL);

    if (y>-2){
        gotoxy(x+3,y+2);            cout << ab;
        gotoxy(x+11,y+2);           cout << ab;
    }
    if (y>-4){
        gotoxy(x,y+4);              cout << ab;
        gotoxy(x+7,y+4);            cout << barra;
        gotoxy(x+14,y+4);           cout << ab;
    }
    if (y>-6){
        gotoxy(x+5,y+6);            cout << barra;
        gotoxy(x+9,y+6);            cout << barra;
    }
    if (y>-7){
        gotoxy(x+4,y+7);            cout << ac << ac;
        gotoxy(x+9,y+7);            cout << ac << ac;
    }

    //todos os vermelhos com fundo branco
    textcolor(RED); textbackground(WHITE);
    if (y>-3){
        gotoxy(x+3,y+3);            cout << ac;
        gotoxy(x+11,y+3);           cout << ac;
    }
    if (y>-4){
        gotoxy(x+6,y+4);            cout << ab;
        gotoxy(x+8,y+4);            cout << ab;
    }
    if (y>-5){
        gotoxy(x,y+5);              cout << ac;
        gotoxy(x+6,y+5);            cout << ac;
        gotoxy(x+8,y+5);            cout << ac;
        gotoxy(x+14,y+5);           cout << ac;
    }
    if (y>-6){
        gotoxy(x+4,y+6);            cout << ab;
        gotoxy(x+10,y+6);           cout << ab;
    }

    //azul com fundo branco
    textcolor(LIGHTBLUE); textbackground(WHITE);
    if (y>-4){
        gotoxy(x+3,y+4);            cout << ab;
        gotoxy(x+4,y+4);            cout << ac;
        gotoxy(x+11,y+4);           cout << ab;
        gotoxy(x+10,y+4);           cout << ac << endl;
    }

    textcolor(WHITE); textbackground(NULL);

    gotoxy(x,y+8); cout << "\n\n";
    setlocale(LC_ALL,"portuguese");
}

