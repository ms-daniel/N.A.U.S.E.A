#include "..\headers\naves.h"

void CarD407(int x, int y){
    setlocale(LC_ALL, "C");
    char barra=219, ab=220, ac=223;

    //cinza e sem fundo
    textcolor(DARKGRAY);
    if (y>0){
        gotoxy(x+12, y);            cout << barra << barra;
    }
    if (y>-1){
        gotoxy(x+10, y+1);          cout << ab << "    " << ab;
    }
    if (y>-2){
        gotoxy(x+9, y+2);           cout << barra << "      " << barra;
    }
    if (y>-3){
        gotoxy(x+9, y+3);           cout << barra << "      " << barra;
    }
    if (y>-4){
        gotoxy(x+9, y+4);           cout << barra << "      " << barra;
    }
    if (y>-5){
        gotoxy(x+9, y+5);           cout << barra << "      " << barra;
    }
    if (y>-6){
        gotoxy(x+8, y+6);           cout << barra << barra << "      " << barra << barra;
    }
    if (y>-7){
        gotoxy(x+8, y+7);           cout << ac << barra << "      " << barra << ac;
    }
    if (y>-8){
        gotoxy(x+3, y+8);           cout << ab << " " << ab << "  " << ab << "        " << ab << "  " <<ab << " " << ab;
    }
    if (y>-9){
        gotoxy(x+3, y+9);           cout << barra << " " << barra << ab << "            " << ab << barra << " " << barra;
    }
    if (y>-10){
        gotoxy(x+2, y+10);          cout << ab << barra << " " << barra << "              " << barra << " " << barra << ab;
    }
    if (y>-11){
        gotoxy(x,y+11);             cout << ab << "  " << barra << " " << barra << "              " << barra << " " << barra << "  " << ab;
    }
    if (y>-12){
        gotoxy(x, y+12);            cout << barra << "  " << barra << " " << barra << "              " << barra << " " << barra << "  " << barra;
    }
    if (y>-13){
        gotoxy(x, y+13);            cout << barra << "  " << barra << " " << barra << "              " << barra << " " << barra << "  " << barra;
    }
    if (y>-14){
        gotoxy(x,y+14);             cout << ac << "  " << barra << " " << barra << "     " << barra << "  " << barra << "     " << barra << " " << barra << "  " << ac;
    }
    if (y>-15){
        gotoxy(x+2, y+15);          cout << ac << barra << " " << barra << " " << ac << ac << "  " << barra << "  " << barra << "  " << ac << ac << " " << barra << " " << barra << ac;
    }

    //cinza com fundo cinza claro
    textcolor(DARKGRAY); textbackground(LIGHTGRAY);
    if (y>-1){
        gotoxy(x+11, y+1);          cout << ac << " ";
    }
    if (y>-8){
        gotoxy(x+9, y+8);           cout << ac << " ";
    }
    if (y>-9){
        gotoxy(x+4, y+9);           cout << " ";
        gotoxy(x+7, y+9);           cout << ac;
        gotoxy(x+18, y+9);          cout << ac;
        //gotoxy(x+21, y+9);          cout << " ";
    }
    if (y>-10){
        gotoxy(x+6, y+10);          cout << "   ";
        gotoxy(x+17, y+10);         cout << "   ";
        gotoxy(x+4, y+10);          cout << " ";
        //gotoxy(x+21, y+10);         cout << " ";
    }
    if (y>-11){
        gotoxy(x+1, y+11);          cout << ac << " ";
        gotoxy(x+4, y+11);          cout << " ";
        gotoxy(x+6, y+11);          cout << "   ";
        gotoxy(x+17, y+11);         cout << "   ";
        gotoxy(x+23, y+11);          cout << " ";
        //gotoxy(x+21, y+11);          cout << " ";
    }
     if (y>-12){
        gotoxy(x+1, y+12);          cout << "  ";
        gotoxy(x+4, y+12);          cout << " ";
        gotoxy(x+6, y+12);          cout << "  ";
        gotoxy(x+18, y+12);         cout << "  ";
        gotoxy(x+23, y+12);          cout << " ";
     }
    if (y>-13){
        gotoxy(x+4, y+13);          cout << " ";
        gotoxy(x+9, y+13);          cout << "  ";
        gotoxy(x+15, y+13);         cout << "  ";
     }
     if (y>-14){
        gotoxy(x+1, y+14);          cout << ab << " ";
        gotoxy(x+4, y+14);          cout << " ";
        gotoxy(x+6, y+14);          cout << "     ";
        gotoxy(x+12, y+14);         cout << " ";
        gotoxy(x+15, y+14);         cout << "     ";
        gotoxy(x+23, y+14);         cout << " ";
    }
    if (y>-15){
        gotoxy(x+4, y+15);          cout << " ";
        gotoxy(x+6, y+15);          cout << ab;
        gotoxy(x+9, y+15);          cout << ab << " ";
        gotoxy(x+12, y+15);         cout << " ";
        gotoxy(x+15, y+15);         cout << " " << ab;
        gotoxy(x+19, y+15);         cout << ab;
    }

    //vermelho e fundo cinza claro
    textcolor(RED); textbackground(LIGHTGRAY);

    if(y>-2){
        gotoxy(x+10, y+2);          cout << " " << ab << " ";
    }
    if(y>-3){
        gotoxy(x+10, y+3);          cout << " " << ab << " ";
    }
    if(y>-4){
        gotoxy(x+10, y+4);          cout << " " << ab << " ";
    }
    if(y>-5){
        gotoxy(x+10, y+5);          cout << " " << ab << " ";
    }
    if(y>-6){
        gotoxy(x+10, y+6);          cout << " " << ab << " ";
    }
    if(y>-7){
        gotoxy(x+10, y+7);          cout << "   ";
    }
    if(y>-12){
        gotoxy(x+8, y+12);          cout << ab;
        gotoxy(x+17, y+12);         cout << ab;
    }
    if(y>-13){
        gotoxy(x+1, y+13);          cout << ac << ac;
        gotoxy(x+6, y+13);          cout << ac << ac << ab;
        gotoxy(x+17, y+13);         cout << ab << ac << ac;
        gotoxy(x+23, y+13);         cout << ac << ac;
    }

    //azul com fundo cinza claro
    textcolor(BLUE);
    if(y>-8){
        gotoxy(x+11, y+8);          cout << ab;
        gotoxy(x+14, y+8);          cout << ab;
    }
    if(y>-9){
        gotoxy(x+8, y+9);           cout << " " <<ab;
        gotoxy(x+16, y+9);          cout << ab << " ";

    }
    if(y>-10){
        gotoxy(x+9, y+10);           cout << barra ;
        gotoxy(x+16, y+10);          cout << barra ;
    }
    if(y>-11){
        gotoxy(x+9, y+11);           cout << barra ;
        gotoxy(x+16, y+11);          cout << barra ;
    }
    if(y>-12){
        gotoxy(x+9, y+12);           cout << ac;
        gotoxy(x+16, y+12);          cout << ac;
    }
    if(y>-13){
        gotoxy(x+12, y+13);          cout << ac;
    }

    //cinza escuro com fundo branco
    textcolor(DARKGRAY); textbackground(WHITE);
    if (y>-1){
        gotoxy(x+13, y+1);          cout << " " << ac;
    }
    if (y>-2){
        gotoxy(x+13, y+2);          cout << " ";
        gotoxy(x+15, y+2);          cout << " ";
    }
    if (y>-3){
        gotoxy(x+13, y+3);          cout << " ";
        gotoxy(x+15, y+3);          cout << " ";
    }

    if (y>-4){
        gotoxy(x+13, y+4);          cout << " ";
        gotoxy(x+15, y+4);          cout << " ";
    }
    if (y>-5){
        gotoxy(x+13, y+5);          cout << " ";
        gotoxy(x+15, y+5);          cout << " ";
    }
    if (y>-6){
        gotoxy(x+13, y+6);          cout << " ";
        gotoxy(x+15, y+6);          cout << " ";
    }
    if (y>-7){
        gotoxy(x+13, y+7);          cout << " ";
        gotoxy(x+15, y+7);          cout << " ";
    }
    if (y>-8){
        gotoxy(x+15, y+8);          cout << " " << ac;
    }
    if (y>-9){
        gotoxy(x+21, y+9);          cout << " ";
    }
    if (y>-10){
        gotoxy(x+21, y+10);         cout << " ";
    }
    if (y>-11){
        gotoxy(x+21, y+11);         cout << " ";
        gotoxy(x+24, y+11);         cout << ac;
    }
    if (y>-12){
        gotoxy(x+21, y+12);         cout << " ";
        gotoxy(x+24, y+12);         cout << " ";
    }
    if (y>-13){
        gotoxy(x+21, y+13);         cout << " ";
    }
    if (y>-14){
        gotoxy(x+13, y+14);         cout << " ";
        gotoxy(x+21, y+14);         cout << " ";
        gotoxy(x+24, y+14);         cout << ab;
    }
    if (y>-15){
        gotoxy(x+21, y+15);         cout << " ";
        gotoxy(x+13, y+15);         cout << " ";
    }
    //azcul com fundo branco
    textcolor(BLUE);
    if (y>-13){
        gotoxy(x+13, y+13);         cout << ac;
    }

    //veremlho claro com fundo branco
    textcolor(LIGHTRED); textbackground(WHITE);
    if(y>-2){
        gotoxy(x+14,y+2);           cout << ab;
    }
    if(y>-3){
        gotoxy(x+14, y+3);          cout << barra;
    }
    if(y>-4){
        gotoxy(x+14, y+4);          cout << barra;
    }
    if(y>-5){
        gotoxy(x+14, y+5);          cout << barra;
    }
    if(y>-6){
        gotoxy(x+14, y+6);          cout << ac;
    }
    if(y>-7){
        gotoxy(x+14, y+7);          cout << ac;
    }

    //veremlho claro com fundo cinza escuro
    textcolor(RED); textbackground(DARKGRAY);
    if(y>-5){
        gotoxy(x+8, y+5);           cout << ac;
        gotoxy(x+17, y+5);          cout << ac;
    }
    if(y>-8){
        gotoxy(x+4, y+8);           cout << ac;
        gotoxy(x+21, y+8);          cout << ac;
    }
    if (y>-16){
        gotoxy(x+3, y+16);          cout << ab << ab << ab;
        gotoxy(x+8, y+16);          cout << ab << ab << ab << ab << ab << ab << ab << ab << ab << ab;
        gotoxy(x+20, y+16);          cout << ab << ab << ab;
    }

    //azul com cinza escuro
    textcolor(BLUE);
    if(y>-13){
        gotoxy(x+11, y+13);         cout << ac;
        gotoxy(x+14, y+13);         cout << ac;
    }

    //azul c/ fundo ciano
    textbackground(CYAN);
    if(y>-8){
        gotoxy(x+12, y+8);          cout << ac << ac;
    }
    if (y>-9){
        textbackground(LIGHTBLUE);
        gotoxy(x+10, y+9);          cout << ac;
        textbackground(CYAN);
        gotoxy(x+15, y+9);          cout << ac;
    }

    // azul claro com fundo ciano
    textcolor(LIGHTBLUE);
    if(y>-9){
        gotoxy(x+11, y+9);          cout << ac << ac << ac << ac;
    }
    if(y>-10){
        gotoxy(x+10, y+10);         cout << barra << ac << ac << ac << ac << ac;
    }
    if(y>-11){
        gotoxy(x+10, y+11);         cout << barra << ac << ac << ac << ac << ac;
    }
    if (y>-12){
        gotoxy(x+11, y+12);         cout << barra << ac << ac << ac;
    }

    //azul claro com fundo azul
    textbackground(BLUE);
    if (y>-12){
        gotoxy(x+10, y+12);         cout << ac;
        gotoxy(x+15, y+12);         cout << ac;
    }

    //veremlho sem fundo
    textcolor(RED); textbackground(NULL);
    if (y>-17){
        gotoxy(x+4, y+17);          cout << ac;
        gotoxy(x+21, y+17);         cout << ac;
    }

    textcolor(WHITE); textbackground(NULL);
    gotoxy(1,1);
    setlocale(LC_ALL, "portuguese");

}
