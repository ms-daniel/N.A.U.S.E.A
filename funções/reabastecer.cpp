#include "..\headers\naves.h"

float reabastece(float& gasAtual, int CapGas, int lugar, int foguete, float puscoin){ //gasolina atual, capacidade do tanque, moedas que tem, um caractere dizendo se está no planeta terra ou outro planeta(3 terra e qualquer outro para outros)
    float limiteGas = CapGas * 100;
    float compra;
    float esc, preco=1, escpositiva, valor;

    if (lugar != 3 )
        preco=1.5;
    else
        preco=0.8;

    //==================================//
        do{
            gotoxy(1,6);        cout << "Quantos litros deseja";
            gotoxy(1,7);        cout << "  comprar/vender?";
            gotoxy(10,8);       cin >> esc;
            escpositiva=esc*-1;
            valor=preco*esc;

            if (esc<0 && escpositiva<gasAtual){
                PINTAREABASTECIMENTO();
                gotoxy(6,7);        cout << "Gasolina vendida!";

                for(int i=1; i<escpositiva+1;i++){
                    gasAtual--;
                    puscoin+=preco;
                    if (i==escpositiva)
                        Beep(800,1);
                    ocultar(1);
                    if(foguete==1){
                        Sleep(5);
                        printaGasolina(gasAtual, CapGas, 32,14);
                        printaDinheiro(puscoin, 32,15);
                    }

                    else if(foguete==2){
                        Sleep(5);
                        printaGasolina(gasAtual, CapGas, 32,17);
                        printaDinheiro(puscoin, 32,18);
                    }

                    else{
                        Sleep(5);
                        printaGasolina(gasAtual, CapGas, 37,23);
                        printaDinheiro(puscoin, 37,24);
                    }
                }

                gotoxy(15,8);
                Sleep(3500);
                esc = 0;
                clrscr();
                break;
            }

            else if ((esc+gasAtual)>limiteGas){
                PINTAREABASTECIMENTO();

                gotoxy(1,6);        cout << "  Você quer comprar";
                gotoxy(1,7);        cout << "  mais combustivel do";
                gotoxy(1,8);        cout << "que seu foguete suporta";
                Sleep(3500);

                PINTAREABASTECIMENTO();

            }

            else if (puscoin<valor){
                PINTAREABASTECIMENTO();
                gotoxy(1,6);        cout << "  Você não tem";
                gotoxy(1,7);        cout << "puscoin suficiente.";
                Sleep(2500);
                PINTAREABASTECIMENTO();
            }
            else if (escpositiva>gasAtual){
                PINTAREABASTECIMENTO();

                gotoxy(1,6);        cout << " Você quer vender";
                gotoxy(1,7);        cout << "mais combustivel do";
                gotoxy(1,8);        cout << "que seu foguete tem";
                Sleep(3500);

                PINTAREABASTECIMENTO();
            }
            else if (compra>puscoin){
                PINTAREABASTECIMENTO();
                gotoxy(3,7);        cout << "Puscoin Insuficiente!";
                Sleep(1500);
                PINTAREABASTECIMENTO();
            }

            else{
                puscoin=gasRecursivo(gasAtual, CapGas, puscoin, preco, esc, foguete);

                PINTAREABASTECIMENTO();
                gotoxy(6,7);        cout << "Reabastecido!" << endl;

                ocultar(0);
                gotoxy(12,8);
                Sleep(3500);
                esc = 0;
                clrscr();
                break;
            }

        }while(esc!=0);
        return puscoin;

}

