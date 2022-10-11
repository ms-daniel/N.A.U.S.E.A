#include "../headers/naves.h"

void printaArmazem(int armazem, int capacidade, int x, int y){

    int i;
   // int gaso=floatGaso;
    char NoStats=176, YeStats=178, ArmzStats[21];

    for (i=0; i<capacidade;i++){
        if (i<armazem/100)
            ArmzStats[i]=YeStats;
        else
            ArmzStats[i]=NoStats;
    }

    ArmzStats[i]='\0';
    gotoxy(x,y);      cout << "Armazém["<< armazem <<"/"<<capacidade*100<<"]: " << endl;
    textcolor(BLUE);
    setlocale(LC_ALL, "C");
    gotoxy(x+17, y);      cout << ArmzStats;
    textcolor(WHITE);
    setlocale(LC_ALL, "portuguese");
}
