#include "../headers/naves.h"

int upgrade(int& melhoria, int& um, int& dois, int& tres, int VIstatus, float& moeda, int foguete)
{
    int escolha;
    float custo;

    if (melhoria - VIstatus == 0)
        custo=500;
    else if (melhoria - VIstatus == 1)
        custo=1500;
    else if (melhoria - VIstatus == 2)
        custo=3000;
    else if (melhoria - VIstatus == 3)
        custo=6500;
    else if (melhoria - VIstatus == 4)
        custo=10000;

        gotoxy(1,6);            cout << "Deseja fazer o upgrade pelo";
        gotoxy(1,7);            cout << "  valor de "<< custo <<" moedas?";
        gotoxy(1,8);            cout << "   1 - Sim | 2 - Não\n";
        gotoxy(13,9);            cin >> escolha;

        if(moeda >= custo) //Compara se o custo do upgrade é maior do que a quantidade de moedas.
        {
            melhoria += 1;
            moeda -= custo;
            if (foguete == 1)
                pintaStatus(um, dois, tres, 49,10);
            else if (foguete == 2)
                pintaStatus(um, dois, tres, 44,7);
            else
                pintaStatus(um, dois ,tres, 51, 7);
        }
        else if(moeda < custo){
            PINTAUPGRADES();
            gotoxy(1,7);        cout << "  Você não possui";
            gotoxy(1,8);        cout << "puscoins suficientes.";
            Sleep(2000);
        }
        PINTAUPGRADES();
}



