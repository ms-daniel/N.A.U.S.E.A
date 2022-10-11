#include "../headers/naves.h"

void printaGasolina (float floatGaso, int capacGaso, int x, int y){
    setlocale(LC_ALL, "C");
    int i;
    int gaso=floatGaso;
    char NoStats=176, YeStats=178, GasoStats[16];

    for (i=0; i<capacGaso;i++){
        if (i<gaso/100 && i<=15){
            GasoStats[i]=YeStats;
        }
        else if (i == 16){
            GasoStats[i]='\0';
            break;
        }
        else
            GasoStats[i]=NoStats;
    }

    GasoStats[i]='\0';
    gotoxy(x,y);      cout << "Gas.["<< floatGaso <<"/"<<capacGaso*100<<"]: " << endl;
    textcolor(YELLOW);
    gotoxy(x+20, y);      cout << GasoStats;
    textcolor(WHITE);
    setlocale(LC_ALL, "portuguese");

}
