#include "../headers/naves.h"

void PINTATUDO(){
    for (int y=0;y<COLUNAi;y++){
        for (int x=0;x<LINHAz+2;x++){
            gotoxy(y,x);
            cout << " ";
        }
    }
}

void PINTAREABASTECIMENTO(){
    for (int y=0;y<31;y++){
                    for (int x=5;x<9;x++){
                        gotoxy(y,x);
                        cout << " ";
                    }
                }
}

void PINTAUPGRADES(){
    for (int y=1;y<33;y++){
        for (int x=6;x<12;x++){
            gotoxy(y,x);
            cout << " ";
        }
    }


}

void PINTAVIAGEM(){
    ocultar(1);
    for (int y=1;y<70;y++){
        for (int x=39;x<43;x++){
            gotoxy(y,x);
            cout << " ";
        }
    }
    ocultar(0);
}

void PINTAFOGUETE(){
    for (int y=1;y<60;y++){
        for (int x=1;x<35;x++){
            gotoxy(y,x);
            cout << " ";
        }
    }
}
void PINTAFOGUETE2(){
    ocultar(1);
    for(int y=28;y<45;y++){
        for (int x=10; x<50;x++){
            gotoxy(x,y);
            cout << " ";
        }
    }
    ocultar(0);
}

