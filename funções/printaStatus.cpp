#include "../headers/naves.h"

void pintaStatus(int motor, int capMin, int tanqGaso, int x, int y){
    setlocale(LC_ALL, "C");
    char NoStats=176, YeStats=178, motorStats[11], minStats[11], tanStats[11];
    int i, is_pa;

    for (i=0;i<10;i++){
        motorStats[i]=NoStats;
        minStats[i]=NoStats;
        tanStats[i]=NoStats;
    }
    motorStats[i]='\0';
    minStats[i]='\0';
    tanStats[i]='\0';


    for(int j=0, i=0; i<20; i++){
        is_pa=i%2;
        if (i<motor && is_pa==1){
            motorStats[j]=YeStats;
            j++;
        }

    }

    for(int j=0, i=0; i<20; i++){
        is_pa=i%2;
        if (i<capMin && is_pa==1){
            minStats[j]=YeStats;
            j++;
        }

    }


    for(i=0; i<10; i++){
        if (i<tanqGaso){
            tanStats[i]=YeStats;
        }

    }


    gotoxy(x,y);            cout << "Motor[" << motor <<"/"<< 20 <<"]: ";
    textcolor(RED);
    gotoxy(x+15,y);         cout << motorStats;
    textcolor(WHITE);

    setlocale(LC_ALL, "portuguese");
    gotoxy(x,y+1);          cout << "Armazem[" << capMin <<"/"<< 20 <<"]: ";
    setlocale(LC_ALL, "C");
    textcolor(BLUE);
    gotoxy(x+15,y+1);       cout << minStats;
    textcolor(WHITE);

    setlocale(LC_ALL, "portuguese");
    gotoxy(x,y+2);          cout << "Tanque[" << tanqGaso <<"/"<< 10 <<"]: ";
    if (tanqGaso==40){
        gotoxy(x+10,y+2);       cout << "40";
    }
    setlocale(LC_ALL, "C");
    textcolor(GREEN);
    gotoxy(x+15,y+2);       cout << tanStats;
    textcolor(WHITE);


    setlocale(LC_ALL, "portuguese");
}
