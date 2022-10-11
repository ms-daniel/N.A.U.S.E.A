#include "..\headers\naves.h"

void printar_lista_de_planetas(int coluna,int linha, int print, jogador OJogador)//apresenta os planetas e a numeração de cada um por ordem
{
    gotoxy(28,2);cout << "Sistema Solar de ";
    gotoxy(45,2);cout << OJogador.nome;
    //SOL
    textbackground(YELLOW);
    for(int i = 1;i<9;i++){
        gotoxy(2,18);cout << " ";
        gotoxy(i-3,18);cout << " ";
        gotoxy(2,19);cout << " ";
        gotoxy(i-2,19);cout << " ";
        gotoxy(2,20);cout << " ";
        gotoxy(i-1,20);cout << " ";
        gotoxy(i,21);cout << " ";
        gotoxy(1,22);cout << " ";
        gotoxy(i+1,22);cout << " ";
        gotoxy(1,23);cout << " ";
        gotoxy(2,23);cout << " ";
        gotoxy(i+2,23);cout << " ";
        gotoxy(1,24);cout << " ";
        gotoxy(i+1,24);cout << " ";
        gotoxy(1,25);cout << " ";
        gotoxy(i,25);cout << " ";
        gotoxy(1,26);cout << " ";
        gotoxy(i-1,26);cout << " ";
        gotoxy(1,27);cout << " ";
        gotoxy(i-2,27);cout << " ";
        gotoxy(1,28);cout << " ";
        gotoxy(i-3,28);cout << " ";


    }
    //MERCURIO
    for(int i = 14;i<=16;i++){
        textbackground(LIGHTGRAY);
        gotoxy(i,10);cout << "  ";
        gotoxy(i,11);cout << "  ";
    }
    //VENUS
    for(int i = 19;i<=24;i++){
        textbackground(LIGHTRED);
        gotoxy(i,30);cout << " ";
        gotoxy(i,31);cout << " ";
        gotoxy(i,29);cout << " ";
    }
        textbackground(YELLOW);
        gotoxy(20,30);cout << "   ";
        gotoxy(21,30);cout << "   ";
    //TERRA
    for(int i = 25; i<=30;i++){
        textbackground(LIGHTCYAN);
        gotoxy(i,14);cout << " ";
        gotoxy(i,15);cout << " ";
        gotoxy(i,16);cout << " ";
    }
        textbackground(LIGHTGREEN);
        gotoxy(26,15);cout << "   ";
        gotoxy(27,15);cout << "   ";

    //MARTE
    for(int i = 30; i<=35;i++){
        textbackground(RED);
        gotoxy(i,24);cout << " ";
        gotoxy(i,25);cout << " ";
        gotoxy(i,26);cout << " ";
    }
        textbackground(LIGHTRED);
        gotoxy(31,25);cout << "   ";
        gotoxy(32,25);cout << "   ";
    //CERES
        textbackground(BLACK);
        textcolor(LIGHTGRAY);
        gotoxy(34,30);cout << " . ";
    //JUPITER
    for(int i = 37; i<=45;i++){
        textbackground(LIGHTGRAY);
        gotoxy(i,18);cout << " ";
        gotoxy(i,19);cout << " ";
        gotoxy(i,20);cout << " ";
        gotoxy(i,21);cout << " ";
        gotoxy(i,22);cout << " ";
    }
        for(int i = 39; i<=43;i++){
        textbackground(YELLOW);
        gotoxy(i,19);cout << " ";
        gotoxy(i,20);cout << " ";
        gotoxy(i,21);cout << " ";
    }
    //SATURNO
    for(int i = 48; i<=54;i++){
        textbackground(DARKGRAY);
        gotoxy(i,28);cout << " ";
        gotoxy(i,29);cout << " ";
        gotoxy(i,30);cout << " ";
        gotoxy(i,31);cout << " ";
    }
        textbackground(YELLOW);
        gotoxy(46,29);cout << "           ";
        gotoxy(46,30);cout << "           ";
    //URANO
    for(int i = 57; i<=63;i++){
        textbackground(CYAN);
        gotoxy(i,18);cout << " ";
        gotoxy(i,19);cout << " ";
        gotoxy(i,20);cout << " ";
        gotoxy(i,21);cout << " ";
    }
    //NETUNO
    for(int i = 63; i<=66;i++){
        textbackground(BLUE);
        gotoxy(i,10);cout << "   ";
        gotoxy(i,11);cout << "   ";
        gotoxy(i,12);cout << "   ";
        gotoxy(i,13);cout << "   ";
    }
    //PLUTAO
        textbackground(DARKGRAY);
        gotoxy(70,24);cout << " ";
    //ERIS
        textbackground(BLACK);
        textcolor(LIGHTRED);
        gotoxy(77,20);cout << " . ";

    textbackground(BLACK);
    textcolor(LIGHTGRAY);
    if (print == 1){
        gotoxy(coluna,linha);           cout<<"1 - Mercurio"<<endl;
        gotoxy(coluna,linha+2);         cout<<"2 - Venus"<<endl;
        gotoxy(coluna,linha+4);         cout<<"3 - Terra"<<endl;
        gotoxy(coluna+20,linha);        cout<<"4 - Marte"<<endl;
        gotoxy(coluna+20,linha+2);      cout<<"5 - Ceres"<<endl;
        gotoxy(coluna+20,linha+4);      cout<<"6 - Jupiter"<<endl;
        gotoxy(coluna+40,linha);        cout<<"7 - Saturno"<<endl;
        gotoxy(coluna+40,linha+2);      cout<<"8 - Urano"<<endl;
        gotoxy(coluna+40,linha+4);      cout<<"9 - Netuno"<<endl;
        gotoxy(coluna+60,linha);        cout<<"10 - Plutao"<<endl;
        gotoxy(coluna+60,linha+2);      cout<<"11 - Eris"<<endl;
        gotoxy(coluna+60,linha+4);      cout<<"12 - Abrir Menu"<<endl;
    }
}
