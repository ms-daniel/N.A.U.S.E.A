#include "../headers/naves.h"

int mineracao(int capacidade,int armazem, int planeta, float& gasolina, int foguete, int tanGaso){
    int minerio=0;
    int bonus=0;
    float totalganho=0;
    int capacidadeREAL=capacidade*100, ganhos=0;
    float totalGaso=(tanGaso*100)-gasolina;

    srand(time(NULL));
    PINTAVIAGEM();

    if(planeta== 1){
        minerio=rand()%300;
        bonus=rand()%100;
    }
    else if(planeta== 2){
        minerio=rand()%400;
        bonus=rand()%100;
    }
    else if(planeta== 4){
        minerio=rand()%500;
        bonus=rand()%100;
    }
    else if(planeta== 5){
        minerio=rand()%600;
        bonus=rand()%200;
    }
    else if(planeta== 6){
        minerio=rand()%700;
        bonus=rand()%200;
    }
    else if(planeta== 7){
        minerio=rand()%800;
        bonus=rand()%200;
    }
    else if(planeta== 8){
        minerio=rand()%900;
        bonus=rand()%300;
    }
    else if(planeta== 9){
        minerio=rand()%1000;
        bonus=rand()%300;
    }
    else if(planeta== 10){
        minerio=rand()%2000;
        bonus=rand()%500;
    }
    else if(planeta== 11){
        minerio=rand()%5000;
        bonus=rand()%5000;
    }

    totalganho=minerio+bonus;

    if (capacidadeREAL < totalganho+armazem){
        ganhos=capacidadeREAL-armazem;
        totalganho-=ganhos;
        gotoxy(20,39);      cout << "Você conseguiu encher seu armazem!";
        gotoxy(20,40);      cout << "Para não haver perda de material...";
        Sleep(3500);
        if (foguete==1){
            totalganho*=0.1;
            if (totalganho<totalGaso){
                gasolina+=totalganho;
            }
            else{
                gasolina=tanGaso*100;
                //mensagem
            }

        }
        else if (foguete == 2){
            totalganho*=0.2;
            if (totalganho<totalGaso){
                gasolina+=totalganho;
                //mensagem
            }
            else{
                gasolina=tanGaso*100;
                //mensagem
            }

        }
        else{
            totalganho*=0.3;
            if (totalganho<totalGaso){
                gasolina+=totalganho;
                //mensagem
            }
            else{
                gasolina=tanGaso*100;
                //mensagem
            }
        }
        PINTAVIAGEM();
        gotoxy(20,39);          cout <<"O restante do minério foi transformado";
        gotoxy(20,40);          cout <<"        em combustível!";
        Sleep(3500);
    }
    else if(capacidadeREAL == armazem){
        gotoxy(20,39);          cout <<"Seu armazém está cheio! Venda-o";
        gotoxy(20,40);          cout <<"   na Terra e volte depois.";
        Sleep(3500);
    }
    else{
        ganhos=totalganho;
        gotoxy(20,39);      cout << "Você conseguiu minerar cerca de";
        gotoxy(25,40);      cout << totalganho << " minérios";
        Sleep(3500);
    }



    return ganhos;
}
