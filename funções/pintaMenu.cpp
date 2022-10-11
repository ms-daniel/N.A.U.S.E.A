#include "..\headers\naves.h"

void PINTAMENU(){
    ocultar(1);
    textbackground(BLACK);
    for(int z = 14;z<=LINHAz;z++){
        for(int i = 1;i<=COLUNAi;i++){
            gotoxy(i,z);cout << " ";
        }
        Sleep(15);
    }
    ocultar(0);
}
