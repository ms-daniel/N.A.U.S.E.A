#include "../headers/naves.h"

void EbiluT(int x, int y){
    system("cls");
    setlocale(LC_ALL, "C");
    ocultar(1);
    char barra=219, ab=220, ac=223;
    //texto amarelo
    textcolor(YELLOW);
    gotoxy(x,y);            cout << barra << barra << ab << ab;
    gotoxy(x,y+1);          cout << barra << barra << barra << barra << barra << ab;
    gotoxy(x,y+2);          cout << barra << barra << barra << barra << barra;
    gotoxy(x+7,y+2);        cout << ab;
    gotoxy(x+10,y+4);       cout << ab;
    gotoxy(x+12,y+5);       cout << ab;
    gotoxy(x+12,y+9);       cout << barra << barra;
    gotoxy(x+11,y+10);      cout << barra << barra << barra;
    gotoxy(x+13, y+11);     cout << ac;
    gotoxy(x+4, y+17);      cout << ac;
    gotoxy(x,y+18);         cout << barra << barra << barra;
    gotoxy(x+4,y+21);       cout << ab << ab << ab;
    gotoxy(x+10,y+22);      cout << ab << ab;
    gotoxy(x+2,y+11);       cout << ac;
    gotoxy(x+5,y+11);       cout << ab << ab << ab << ab << ab;

    //amarelo com fundo marrom
    textbackground(BROWN);
    gotoxy(x+5,y+2);        cout << ac << ac;
    gotoxy(x,y+3);          cout << ac << ac << "       ";
    gotoxy(x,y+4);          cout << "          ";
    gotoxy(x,y+5);          cout << "       " << ab << ab << barra << barra << barra;
    gotoxy(x,y+6);          cout << "     " << ab << barra << ac << ac;
    gotoxy(x+11,y+6);       cout << ac << barra << barra;
    gotoxy(x,y+7);          cout << "   " << ab << barra << ac;
    gotoxy(x+12,y+7);       cout << "  ";
    gotoxy(x,y+8);          cout << " "<< ac << barra << ac;
    gotoxy(x+12,y+8);       cout << ab << ab;
    gotoxy(x,y+9);          cout << "   ";
    gotoxy(x,y+10);         cout << barra << ab << " ";
    gotoxy(x,y+11);         cout << ac;
    gotoxy(x+3,y+11);       cout << barra << ab;
    gotoxy(x+10,y+11);      cout << barra << barra << barra;
    gotoxy(x,y+12);         cout << ab << " ";
    gotoxy(x+3,y+12);       cout << " " << barra << barra << barra << barra << ac << ac <<"  ";
    gotoxy(x,y+13);         cout << barra << barra << barra << " " << barra << barra << ac << "   ";
    gotoxy(x,y+14);         cout << barra << barra << barra << barra << barra << ac << "  ";
    gotoxy(x,y+15);         cout << barra << barra << barra << barra << barra << "  ";
    gotoxy(x+3,y+16);       cout << barra << barra << barra;
    gotoxy(x,y+17);         cout << ab << barra << barra << barra;
    gotoxy(x,y+19);         cout <<ac << "  ";
    gotoxy(x, y+20);        cout << " " << ab << ab;
    gotoxy(x,y+21);         cout << "    ";
    gotoxy(x,y+22);         cout << barra << barra<< barra<< barra<< barra<< barra<< barra<< barra<< barra<< barra;

    //marrom
    textcolor(BROWN); textbackground(NULL);
    gotoxy(x+12,y+12);      cout << ac;
    gotoxy(x+10,y+13);      cout << ac;
    gotoxy(x+8,y+14);       cout << ac;
    gotoxy(x+6,y+15);       cout << ac;
    gotoxy(x+2,y+12);       cout << ab;
    gotoxy(x+9,y+6);        cout << ac << ac;
    gotoxy(x+6,y+7);        cout << ac;
    gotoxy(x+4,y+8);        cout << ac;
    gotoxy(x+3,y+9);        cout << ac;
    gotoxy(x+3,y+10);       cout << ab;

        //letra veremelha
    textcolor(RED); textbackground(YELLOW);
    gotoxy(x,y+16);         cout << ac << ac << ac;


    //verde sem fundo
    textcolor(LIGHTGREEN); textbackground(NULL);
    gotoxy(x+7,y+7);        cout << ab << ab << barra << barra;
    gotoxy(x+6,y+8);        cout << barra <<barra << barra << barra << barra ;
    //com fundo verde claro
    textbackground(GREEN);
    gotoxy(x+5,y+9);        cout << " " << ac << barra << barra << barra << ac;
    gotoxy(x+5,y+10);       cout << "     ";

    textbackground(NULL); textcolor(GREEN);
    gotoxy(x+5,y+8);        cout << ab;
    gotoxy(x+4,y+9);        cout << ab;
    gotoxy(x+4,y+10);        cout << ac;

    setlocale(LC_ALL, "portuguese");
    // MENSAGEM ET
    char mensagem[45] = "Olá humano... Você parece ter chegado longe.";
    char mensagemb[45] ="Deve pensar que conquistou o seu sistema...?";
    char mensagemc[45] ="Você não faz ideia do que existe além daqui.";
    char mensagemd[45] ="É uma pena, vocês humanos, estarem fadados..";
    char mensageme[45] ="a viver uma vida em um pequeno jardim azul..";
    char mensagemf[45] ="Sua jornada espacial acaba aqui astronauta..";
    char mensagemg[45] ="o seu cérebro será do ET BILU! HA!HA!HA!HA!.";

        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,10);cout << mensagem[i];
            Sleep(100);
        }
        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,11);cout << mensagemb[i];
            Sleep(100);
        }
        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,12);cout << mensagemc[i];
            Sleep(100);
        }
        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,13);cout << mensagemd[i];
            Sleep(100);
        }
        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,14);cout << mensageme[i];
            Sleep(100);
        }
        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,15);cout << mensagemf[i];
            Sleep(100);
        }
        for(int i = 0;i < 45;i++){
            Beep(2000,5);
            gotoxy(i+19,16);cout << mensagemg[i];
            Sleep(100);
        }
    ocultar(0);
    textcolor(WHITE);


}
