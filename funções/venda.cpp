#include "../headers/naves.h"

float venda(int& armazem, float puscoin){
    float valor=0;
    int cliente=0;
    int esc;

    srand(time(NULL));
    cliente=(rand()%100)+200;
    valor=armazem*(cliente/50);

        gotoxy(20,39);          cout <<"Deseja vender seu armaz�m por";
        gotoxy(18,40);          cout << "PS$ " << valor << " ? 1 - Sim // 2 - N�o";
        gotoxy(35, 41);         cin >> esc;
        if(esc==1){
            PINTAVIAGEM();
            ocultar(1);
            armazem=0;
            gotoxy(30,40);      cout << "Vendido!";
            Sleep(2500);
            ocultar(0);
            PINTAVIAGEM();
            return valor;
        }
        else if (esc==2){
            PINTAVIAGEM();
            ocultar(1);
            gotoxy(20,39);      cout << "Quando quiser vender ser�";
            gotoxy(20,40);      cout << "       bem-vindo";
            Sleep(2000);
            ocultar(0);
            return 0;
        }
        else{
            PINTAVIAGEM();
            ocultar(1);
            gotoxy(25,39);      cout << "Op��o inv�lida!";
            Sleep(500);
            ocultar(0);
            return 0;
        }
}
