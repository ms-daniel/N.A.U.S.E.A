#include "headers\naves.h"

using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(2);
    int n_planeta=0, esc, sair=1;
    int dist_atual=149600000;//distancia inicial planeta terra
    int n_planeta_atual=3;//numero do planeta atual terra
    int dist_mercurio= 57910000;
    int dist_venus= 108200000;
    int dist_terra= 149600000;
    int dist_marte= 227940000;
    int dist_ceres= 414000000;
    int dist_jupiter= 778330000;
    int dist_saturno= 1429400000;
    int dist_urano= 2870990000;
    int dist_netuno= 4504300000;
    int dist_plutao= 5922000000;
    int dist_eris= 10149000000;

    jogador OJogador;

    struct status LuCa676;
    LuCa676.motor=3;        //Valor a ser alterado pela função upgrade.
    LuCa676.capMin=2;
    LuCa676.tanqGaso=3;
    LuCa676.VImotor=3;      //Valor inicial
    LuCa676.VIcapMin=2;
    LuCa676.VItanqGaso=3;
    LuCa676.MAXmotor=8;     //Valor máximo possível de upgrades
    LuCa676.MAXcapMin=7;
    LuCa676.MAXtanqGaso=6;
    LuCa676.preco=25000;

    struct status PeWi774;
    PeWi774.motor=6;
    PeWi774.capMin=4;
    PeWi774.tanqGaso=5;
    PeWi774.VImotor=6;
    PeWi774.VIcapMin=4;
    PeWi774.VItanqGaso=5;
    PeWi774.MAXmotor=11;
    PeWi774.MAXcapMin=9;
    PeWi774.MAXtanqGaso=8;
    PeWi774.preco=250000;

    struct status CarD407;
    CarD407.motor=15;
    CarD407.capMin=15;
    CarD407.tanqGaso=7;
    CarD407.VImotor=15;
    CarD407.VIcapMin=15;
    CarD407.VItanqGaso=7;
    CarD407.MAXmotor=20;
    CarD407.MAXcapMin=20;
    CarD407.MAXtanqGaso=10;
    CarD407.preco=1000000;


    setlocale(LC_ALL,"portuguese");
    INTRO();
    if(MENU_INICIAL(OJogador) == 3)
        return 0;

    do{
        printar_lista_de_planetas(8,35,0,OJogador);

        Position(OJogador.foguetes, 20,5);

        printaDinheiro(OJogador.dinheiro, 37,7);

        printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 37,6);

        pintaStatus(OJogador.motor, OJogador.capMin, OJogador.tanqGaso, 37, 8);

        gotoxy(3,33);           cout << "1 - Viajar!";
        gotoxy(3,34);           cout << "2 - Reabastecer";
        gotoxy(3,35);           cout << "3 - Upgrades para o foguete";
        gotoxy(3,36);           cout << "4 - Comprar novo foguete";
        gotoxy(35,33);          cout << "5 - Salvar jogo!";
        gotoxy(35,34);          cout << "6 - Carregar jogo";
        gotoxy(35, 35);         cout << "7 - Menu inicial";
        gotoxy(35, 36);         cout << "8 - Finalizar";
        gotoxy(30, 37);         cin  >> esc;

        if (esc == 1){
            for(int i=0; i == 0 ;)
            {
                system("cls");
                int escolha;
                ocultar(1);
                printar_lista_de_planetas(3,33,1,OJogador);

                gotoxy(20,39);          cout <<"Você está no planeta ";
                textcolor(GREEN);
                gotoxy(41,39);          cout << nome_dos_planetas(n_planeta_atual);
                textcolor(WHITE);

                if (OJogador.foguetes==1)
                    Position(OJogador.foguetes, 35, 5);

                else if(OJogador.foguetes==2)
                    Position(OJogador.foguetes, 35, 5);

                else
                    Position(OJogador.foguetes, 30, 4);

                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 40,24);
                printaArmazem(OJogador.minerios, OJogador.capMin, 40, 25);
                printaDinheiro(OJogador.dinheiro, 40, 26);

                ocultar(0);
                if (n_planeta_atual==3){
                    do{
                        if (sair == 2){
                            gotoxy(20,39);          cout <<"Você está no planeta ";
                            textcolor(GREEN);
                            gotoxy(41,39);          cout << nome_dos_planetas(n_planeta_atual);
                            textcolor(WHITE);
                        }
                        gotoxy(17,40);      cout << "Deseja: 1 - Vender // 2 - Viajar";
                        gotoxy(34, 41);     cin >> n_planeta;
                        PINTAVIAGEM();
                        if (n_planeta==1){
                            if (OJogador.minerios==0){
                                ocultar(1);
                                gotoxy(20,40);      cout << "Você não tem nada para vender.";
                                Sleep(2500);
                                sair = 2;
                                ocultar(0);
                            }
                            else{
                                OJogador.dinheiro+=venda(OJogador.minerios, OJogador.dinheiro);
                                printaDinheiro(OJogador.dinheiro, 40, 26);
                                printaArmazem(OJogador.minerios, OJogador.capMin, 40, 25);
                                sair = 2;
                            }
                        }
                        else if (n_planeta==2){
                            gotoxy(17,40);          cout <<"Deseja minerar em qual planeta?";
                            gotoxy(1,45);           cout << "";
                            gotoxy(33,41);          cin>>n_planeta;
                            sair = 0;
                        }
                        else{
                            PINTAVIAGEM();
                            ocultar(1);
                            gotoxy(25,39);      cout << "Opção inválida!";
                            Sleep(1000);
                            sair = 2;
                            ocultar(0);
                        }

                    }while(sair != 0);
                }
                else{
                    gotoxy(20,40);          cout <<"Deseja minerar em qual planeta?";
                    gotoxy(1,45);           cout << "";
                    gotoxy(33,41);          cin>>n_planeta;// ler o numero do planeta destino
                }
                if (n_planeta<0 && n_planeta>13)
                    system("cls");
                 //LIMPAR TELA AQUI E POR BG8
                if(n_planeta==n_planeta_atual){
                        PINTAVIAGEM();
                        ocultar(1);
                        gotoxy(20,39);cout<<"Voce já esta nesse planeta."<<endl;
                        n_planeta=14; //apenas para voltar ao menu
                        Sleep(2500);
                        ocultar(0);
                        //LIMPAR TELA AQUI E POR BG
                }
                switch(n_planeta)
                {
                case 1:
                    do{
                        printar_rota(dist_atual,dist_mercurio,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                        gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(1); textcolor(WHITE);
                        gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                        gotoxy(53, 41);             cin  >> escolha;
                        if (escolha == 1){
                            if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_mercurio)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                            }
                            else{
                                clrscr();
                                Planeta(n_planeta_atual,36);
                                Animation1(OJogador.foguetes, 24);

                                OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_mercurio);
                                dist_atual=dist_mercurio;
                                n_planeta_atual=1;

                                Animation2(OJogador.foguetes, 24,0);
                                Planeta(n_planeta_atual, 1);
                                Animation2(OJogador.foguetes,1,20);
                                Sleep(1000);

                                clrscr();               //daqui pra baixo será minerado no planeta
                                printar_lista_de_planetas(3,33,1,OJogador);

                                if (OJogador.foguetes==1)
                                    Position(OJogador.foguetes, 35, 5);

                                else if(OJogador.foguetes==2)
                                    Position(OJogador.foguetes, 35, 5);

                                else
                                    Position(OJogador.foguetes, 30, 4);

                                OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                            }
                        }
                        else if (escolha >1 || escolha<0){
                            PINTAVIAGEM();
                            ocultar(1);
                            gotoxy(25, 40); cout << "Escolha inválida!";
                            Sleep(1500);
                            ocultar(0);
                        }
                        PINTAVIAGEM();
                    }while(escolha != 0 && escolha != 1);
                    break;
                case 2:
                    do{
                        printar_rota(dist_atual,dist_venus,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                        gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(2); textcolor(WHITE);
                        gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                        gotoxy(53, 41);             cin  >> escolha;
                        if (escolha == 1){
                            if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_venus)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                            }
                            else{
                                clrscr();
                                Planeta(n_planeta_atual,36);
                                Animation1(OJogador.foguetes, 24);

                                OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_venus);
                                dist_atual=dist_venus;
                                n_planeta_atual=2;

                                Animation2(OJogador.foguetes, 24,0);
                                Planeta(n_planeta_atual, 1);
                                Animation2(OJogador.foguetes,1,20);
                                Sleep(1000);

                                clrscr();               //daqui pra baixo será minerado no planeta
                                printar_lista_de_planetas(3,33,1,OJogador);

                                if (OJogador.foguetes==1)
                                    Position(OJogador.foguetes, 35, 5);

                                else if(OJogador.foguetes==2)
                                    Position(OJogador.foguetes, 35, 5);

                                else
                                    Position(OJogador.foguetes, 30, 4);

                                OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                            }
                        }
                        else if (escolha >1 || escolha<0){
                            PINTAVIAGEM();
                            ocultar(1);
                            gotoxy(25, 40); cout << "Escolha inválida!";
                            Sleep(1500);
                            ocultar(0);
                        }
                        PINTAVIAGEM();
                    }while(escolha != 0 && escolha != 1);
                    break;
                case 3:
                    do{
                        printar_rota(dist_atual,dist_terra,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                        gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(3); textcolor(WHITE);
                        gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                        gotoxy(53, 41);             cin  >> escolha;
                        if (escolha == 1){
                            if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_terra)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                            }
                            else{
                                clrscr();
                                Planeta(n_planeta_atual,36);
                                Animation1(OJogador.foguetes, 24);

                                OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_terra);
                                dist_atual=dist_terra;
                                n_planeta_atual=3;

                                Animation2(OJogador.foguetes, 24,0);
                                Planeta(n_planeta_atual, 1);
                                Animation2(OJogador.foguetes,1,20);
                                Sleep(1000);
                            }
                        }
                        else if (escolha >1 || escolha<0){
                            PINTAVIAGEM();
                            ocultar(1);
                            gotoxy(25, 40); cout << "Escolha inválida!";
                            Sleep(1500);
                            ocultar(0);
                        }
                        PINTAVIAGEM();
                    }while(escolha != 0 && escolha != 1);
                    break;
                case 4:
                    do{
                        printar_rota(dist_atual,dist_marte,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                        gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(4); textcolor(WHITE);
                        gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                        gotoxy(53, 41);             cin  >> escolha;
                        if (escolha == 1){
                            if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_marte)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                            }
                            else{
                                clrscr();
                                Planeta(n_planeta_atual,36);
                                Animation1(OJogador.foguetes, 24);

                                OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_marte);
                                dist_atual=dist_marte;
                                n_planeta_atual=4;

                                Animation2(OJogador.foguetes, 24,0);
                                Planeta(n_planeta_atual, 1);
                                Animation2(OJogador.foguetes,1,20);
                                Sleep(1000);

                                clrscr();               //daqui pra baixo será minerado no planeta
                                printar_lista_de_planetas(3,33,1,OJogador);

                                if (OJogador.foguetes==1)
                                    Position(OJogador.foguetes, 35, 5);

                                else if(OJogador.foguetes==2)
                                    Position(OJogador.foguetes, 35, 5);

                                else
                                    Position(OJogador.foguetes, 30, 4);

                                OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                            }
                        }
                        else if (escolha >1 || escolha<0){
                            PINTAVIAGEM();
                            ocultar(1);
                            gotoxy(25, 40); cout << "Escolha inválida!";
                            Sleep(1500);
                            ocultar(0);
                        }
                        PINTAVIAGEM();
                    }while(escolha != 0 && escolha != 1);

                    break;
                case 5:
                    do{
                        printar_rota(dist_atual,dist_ceres,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                        gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(5); textcolor(WHITE);
                        gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                        gotoxy(53, 41);             cin  >> escolha;
                        if (escolha == 1){
                            if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_ceres)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                            }
                            else{
                                clrscr();
                                Planeta(n_planeta_atual,36);
                                Animation1(OJogador.foguetes, 24);

                                OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_ceres);
                                dist_atual=dist_ceres;
                                n_planeta_atual=5;

                                Animation2(OJogador.foguetes, 24,0);
                                Planeta(n_planeta_atual, 1);
                                Animation2(OJogador.foguetes,1,20);
                                Sleep(1000);

                                clrscr();               //daqui pra baixo será minerado no planeta
                                printar_lista_de_planetas(3,33,1,OJogador);

                                if (OJogador.foguetes==1)
                                    Position(OJogador.foguetes, 35, 5);

                                else if(OJogador.foguetes==2)
                                    Position(OJogador.foguetes, 35, 5);

                                else
                                    Position(OJogador.foguetes, 30, 4);

                                OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                            }
                        }
                        else if (escolha >1 || escolha<0){
                            PINTAVIAGEM();
                            ocultar(1);
                            gotoxy(25, 40); cout << "Escolha inválida!";
                            Sleep(1500);
                            ocultar(0);
                        }
                        PINTAVIAGEM();
                    }while(escolha != 0 && escolha != 1);
                    break;
                case 6:
                    if (OJogador.foguetes==1){
                        PINTAVIAGEM();
                        gotoxy(25,39);        cout << "Seu Foguete é incapaz";
                        gotoxy(25,40);        cout << " de ir até ";  textcolor(RED); cout << nome_dos_planetas(6);
                        Sleep(2500);
                    }
                    else{
                        do{
                            printar_rota(dist_atual,dist_jupiter,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                            gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(6); textcolor(WHITE);
                            gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                            gotoxy(53, 41);             cin  >> escolha;
                            if (escolha == 1){
                                if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_jupiter)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                                }
                                else{
                                    clrscr();
                                    Planeta(n_planeta_atual,36);
                                    Animation1(OJogador.foguetes, 24);

                                    OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_jupiter);
                                    dist_atual=dist_jupiter;
                                    n_planeta_atual=6;

                                    Animation2(OJogador.foguetes, 24,0);
                                    Planeta(n_planeta_atual, 1);
                                    Animation2(OJogador.foguetes,1,20);
                                    Sleep(1000);

                                    clrscr();               //daqui pra baixo será minerado no planeta
                                    printar_lista_de_planetas(3,33,1,OJogador);

                                    if (OJogador.foguetes==1)
                                        Position(OJogador.foguetes, 35, 5);

                                    else if(OJogador.foguetes==2)
                                        Position(OJogador.foguetes, 35, 5);

                                    else
                                        Position(OJogador.foguetes, 30, 4);

                                    OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                                }
                            }
                            else if (escolha >1 || escolha<0){
                                PINTAVIAGEM();
                                ocultar(1);
                                gotoxy(25, 40); cout << "Escolha inválida!";
                                Sleep(1500);
                                ocultar(0);
                            }
                            PINTAVIAGEM();
                        }while(escolha != 0 && escolha != 1);
                    }
                    break;
                case 7:
                    if (OJogador.foguetes==1){
                        PINTAVIAGEM();
                        gotoxy(25,39);        cout << "Seu Foguete é incapaz";
                        gotoxy(25,40);        cout << " de ir até ";  textcolor(RED); cout << nome_dos_planetas(7);
                        Sleep(2500);
                    }
                    else{
                        do{
                            printar_rota(dist_atual,dist_saturno,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                            gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(7); textcolor(WHITE);
                            gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                            gotoxy(53, 41);             cin  >> escolha;
                            if (escolha == 1){
                                if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_saturno)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                                }
                                else{
                                    clrscr();
                                    Planeta(n_planeta_atual,36);
                                    Animation1(OJogador.foguetes, 24);

                                    OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_saturno);
                                    dist_atual=dist_saturno;
                                    n_planeta_atual=7;

                                    Animation2(OJogador.foguetes, 24,0);
                                    Planeta(n_planeta_atual, 1);
                                    Animation2(OJogador.foguetes,1,20);
                                    Sleep(1000);

                                    clrscr();               //daqui pra baixo será minerado no planeta
                                    printar_lista_de_planetas(3,33,1,OJogador);

                                    if (OJogador.foguetes==1)
                                        Position(OJogador.foguetes, 35, 5);

                                    else if(OJogador.foguetes==2)
                                        Position(OJogador.foguetes, 35, 5);

                                    else
                                        Position(OJogador.foguetes, 30, 4);

                                    OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                                    }
                            }
                            else if (escolha >1 || escolha<0){
                                PINTAVIAGEM();
                                ocultar(1);
                                gotoxy(25, 40); cout << "Escolha inválida!";
                                Sleep(1500);
                                ocultar(0);
                            }
                            PINTAVIAGEM();
                        }while(escolha != 0 && escolha != 1);
                    }
                    break;
                case 8:
                    if (OJogador.foguetes==1){
                        PINTAVIAGEM();
                        gotoxy(25,39);        cout << "Seu Foguete é incapaz";
                        gotoxy(25,40);        cout << " de ir até ";  textcolor(RED); cout << nome_dos_planetas(8);
                        Sleep(2500);
                    }
                    else {
                        do{
                            printar_rota(dist_atual,dist_urano,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                            gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(8); textcolor(WHITE);
                            gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                            gotoxy(53, 41);             cin  >> escolha;
                            if (escolha == 1){
                                if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_urano)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                                }
                                else{
                                    clrscr();
                                    Planeta(n_planeta_atual,36);
                                    Animation1(OJogador.foguetes, 24);

                                    OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_urano);
                                    dist_atual=dist_urano;
                                    n_planeta_atual=8;

                                    Animation2(OJogador.foguetes, 24,0);
                                    Planeta(n_planeta_atual, 1);
                                    Animation2(OJogador.foguetes,1,20);
                                    Sleep(1000);

                                    clrscr();               //daqui pra baixo será minerado no planeta
                                    printar_lista_de_planetas(3,33,1,OJogador);

                                    if (OJogador.foguetes==1)
                                        Position(OJogador.foguetes, 35, 5);

                                    else if(OJogador.foguetes==2)
                                        Position(OJogador.foguetes, 35, 5);

                                    else
                                        Position(OJogador.foguetes, 30, 4);

                                    OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                                }
                            }
                            else if (escolha >1 || escolha<0){
                                PINTAVIAGEM();
                                ocultar(1);
                                gotoxy(25, 40); cout << "Escolha inválida!";
                                Sleep(1500);
                                ocultar(0);
                            }
                            PINTAVIAGEM();
                        }while(escolha != 0 && escolha != 1);
                    }
                    break;
                case 9:
                    if (OJogador.foguetes==1){
                        PINTAVIAGEM();
                        gotoxy(25,39);        cout << "Seu Foguete é incapaz";
                        gotoxy(25,40);        cout << " de ir até ";  textcolor(RED); cout << nome_dos_planetas(9);
                        Sleep(2500);
                    }
                    else{
                        do{
                            printar_rota(dist_atual,dist_netuno,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                            gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(9); textcolor(WHITE);
                            gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                            gotoxy(53, 41);             cin  >> escolha;
                            if (escolha == 1){
                                if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_netuno)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                                }
                                else{
                                    clrscr();
                                    Planeta(n_planeta_atual,36);
                                    Animation1(OJogador.foguetes, 24);

                                    OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_netuno);
                                    dist_atual=dist_netuno;
                                    n_planeta_atual=9;

                                    Animation2(OJogador.foguetes, 24,0);
                                    Planeta(n_planeta_atual, 1);
                                    Animation2(OJogador.foguetes,1,20);
                                    Sleep(1000);

                                    clrscr();               //daqui pra baixo será minerado no planeta
                                    printar_lista_de_planetas(3,33,1,OJogador);

                                    if (OJogador.foguetes==1)
                                        Position(OJogador.foguetes, 35, 5);

                                    else if(OJogador.foguetes==2)
                                        Position(OJogador.foguetes, 35, 5);

                                    else
                                        Position(OJogador.foguetes, 30, 4);

                                    OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                                }
                            }
                            else if (escolha >1 || escolha<0){
                                PINTAVIAGEM();
                                ocultar(1);
                                gotoxy(25, 40); cout << "Escolha inválida!";
                                Sleep(1500);
                                ocultar(0);
                            }
                            PINTAVIAGEM();
                        }while(escolha != 0 && escolha != 1);
                    }
                    break;
                case 10:
                    if (OJogador.foguetes==1 || OJogador.foguetes==2){
                        PINTAVIAGEM();
                        gotoxy(25,39);        cout << "Seu Foguete é incapaz";
                        gotoxy(25,40);        cout << " de ir até ";  textcolor(RED); cout << nome_dos_planetas(10);
                        Sleep(2500);
                    }
                    else{
                        do{
                            printar_rota(dist_atual,dist_plutao,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                            gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(10); textcolor(WHITE);
                            gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                            gotoxy(53, 41);             cin  >> escolha;
                            if (escolha == 1){
                                if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_plutao)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                                }
                                else{
                                    clrscr();
                                    Planeta(n_planeta_atual,36);
                                    Animation1(OJogador.foguetes, 24);

                                    OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_plutao);
                                    dist_atual=dist_plutao;
                                    n_planeta_atual=10;

                                    Animation2(OJogador.foguetes, 24,0);
                                    Planeta(n_planeta_atual, 1);
                                    Animation2(OJogador.foguetes,1,20);
                                    Sleep(1000);

                                    clrscr();               //daqui pra baixo será minerado no planeta
                                    printar_lista_de_planetas(3,33,1,OJogador);

                                    if (OJogador.foguetes==1)
                                        Position(OJogador.foguetes, 35, 5);

                                    else if(OJogador.foguetes==2)
                                        Position(OJogador.foguetes, 35, 5);

                                    else
                                        Position(OJogador.foguetes, 30, 4);

                                    OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);

                                }
                            }
                            else if (escolha >1 || escolha<0){
                                PINTAVIAGEM();
                                ocultar(1);
                                gotoxy(25, 40); cout << "Escolha inválida!";
                                Sleep(1500);
                                ocultar(0);
                            }
                            PINTAVIAGEM();
                        }while(escolha != 0 && escolha != 1);
                    }
                    break;
                case 11:
                    if (OJogador.foguetes==1 || OJogador.foguetes==2){
                        PINTAVIAGEM();
                        gotoxy(25,39);        cout << "Seu Foguete é incapaz";
                        gotoxy(25,40);        cout << " de ir até ";  textcolor(RED); cout << nome_dos_planetas(11);
                        Sleep(2500);
                    }
                    else{
                        do{
                            printar_rota(dist_atual,dist_eris,n_planeta_atual, n_planeta, OJogador.motor, OJogador.gasolina);
                            gotoxy(40, 39);             cout << "  Deseja viajar para "; textcolor(RED); cout << nome_dos_planetas(11); textcolor(WHITE);
                            gotoxy(40, 40);             cout << "     1 - Sim // 0 - Não";
                            gotoxy(53, 41);             cin  >> escolha;
                            if (escolha == 1){
                                if (calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_jupiter)==0){
                                    PINTAVIAGEM();
                                    ocultar(1);
                                    gotoxy(20,39);      cout << "Você não tem gasolina suficiente!";
                                    gotoxy(20,40);      cout << "          Reabasteça.";
                                    Sleep(2500);
                                    ocultar(0);
                                }
                                else{
                                    clrscr();
                                    Planeta(n_planeta_atual,36);
                                    Animation1(OJogador.foguetes, 24);

                                    OJogador.gasolina=calculaGas(OJogador.motor, OJogador.gasolina, dist_atual, dist_eris);
                                    dist_atual=dist_eris;
                                    n_planeta_atual=11;

                                    Animation2(OJogador.foguetes, 24,0);
                                    Planeta(n_planeta_atual, 1);
                                    Animation2(OJogador.foguetes,1,20);
                                    Sleep(1000);

                                    clrscr();               //daqui pra baixo será minerado no planeta
                                    printar_lista_de_planetas(3,33,1,OJogador);

                                    if (OJogador.foguetes==1)
                                        Position(OJogador.foguetes, 35, 5);

                                    else if(OJogador.foguetes==2)
                                        Position(OJogador.foguetes, 35, 5);

                                    else
                                        Position(OJogador.foguetes, 30, 4);

                                    OJogador.minerios+=mineracao(OJogador.capMin,OJogador.minerios, n_planeta_atual, OJogador.gasolina, OJogador.foguetes, OJogador.tanqGaso);
                                    EbiluT(1,1);
                                    getch();

                                }
                            }
                            else if (escolha >1 || escolha<0){
                                PINTAVIAGEM();
                                ocultar(1);
                                gotoxy(25, 40); cout << "Escolha inválida!";
                                Sleep(1500);
                                ocultar(0);
                            }
                            PINTAVIAGEM();
                        }while(escolha != 0 && escolha != 1);
                    }
                    break;
                case 12:
                    clrscr();
                    i++;
                    break;
                case 14:
                    break;
                default:
                    PINTAVIAGEM();
                    ocultar(1);
                    gotoxy(20,39);      cout<<"Planeta não está no radar..."<<endl;
                    Sleep(2000);
                    ocultar(0);
                    break;
                }
            }



        }

        else if (esc == 2){ //reabastece o foguete
            PINTATUDO();
            gotoxy(33, 10);       cout << "Bem-vindo ao posto";
            gotoxy(32, 11);       cout << "SOLTA O CABO DA NAU!!";
            Sleep(500);
            PINTATUDO();

            Position(OJogador.foguetes, 34, 5);
            if(OJogador.foguetes==1){
                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 32,14);
                printaDinheiro(OJogador.dinheiro, 32, 15);
                TanqueGasolina(49,9);
            }

            else if(OJogador.foguetes==2){
                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 32,17);
                printaDinheiro(OJogador.dinheiro, 32, 18);
                TanqueGasolina(49,12);
            }

            else{
                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 37,23);
                printaDinheiro(OJogador.dinheiro, 37, 24);
                TanqueGasolina(60,16);
            }

            if ((n_planeta_atual!=3 && OJogador.dinheiro<1.5) || (OJogador.dinheiro<0.8)){
                gotoxy(1,6);    cout << "Você está pobre, volte";
                gotoxy(2,7);    cout << "quando tiver puscoin!";
                Sleep(3500);
                clrscr();
            }
            else{
                OJogador.dinheiro=reabastece(OJogador.gasolina, OJogador.tanqGaso, n_planeta_atual, OJogador.foguetes, OJogador.dinheiro);
            }

        }

        else if (esc == 3){ //upgrades
            int escolha;

            do{
                clrscr();
                Position(OJogador.foguetes, 33, 5);
                if (OJogador.foguetes==1)
                    pintaStatus(OJogador.motor, OJogador.capMin, OJogador.tanqGaso, 49,10);
                else if (OJogador.foguetes==2)
                    pintaStatus(OJogador.motor, OJogador.capMin, OJogador.tanqGaso, 44,7);
                else
                    pintaStatus(OJogador.motor, OJogador.capMin, OJogador.tanqGaso, 51,7);

                gotoxy(12,6);        cout << "UPGRADES";
                gotoxy(5,7);        cout << "Seu ";
                printaDinheiro(OJogador.dinheiro, 9,7);
                gotoxy(1,8);        cout << "Deseja fazer upgrade no foguete?\n";
                gotoxy(6,9);        cout << "1 - Sim / 0 - Não\n\n";
                gotoxy(14,10);
                cin >> escolha;
                if (escolha>1 || escolha<0){
                    PINTAUPGRADES();
                    gotoxy(5,8);       cout << "Opção Inválida!";
                    Sleep(1500);
                    PINTAUPGRADES();
                }
                else if (escolha == 1){
                    do{
                        PINTAUPGRADES();
                        gotoxy(1,6);        cout << "Onde deseja fazer upgrade?";
                        gotoxy(1,7);        cout << "1 -        Motor";
                        gotoxy(1,8);        cout << "2 -  Capacidade de Armazem";
                        gotoxy(1,9);        cout << "3 -  Tanque de combustível";
                        gotoxy(1,10);       cout << "0 -         Sair";
                        gotoxy(14,11);      cin  >> escolha;
                        PINTAUPGRADES();

                        if (escolha == 1){
                            PINTAUPGRADES();

                            if (OJogador.foguetes==1){
                                if(OJogador.motor < LuCa676.MAXmotor) //Compara se atingiu a capacidade máxima de upgrades
                                    upgrade(OJogador.motor, OJogador.motor, OJogador.capMin, OJogador.tanqGaso, LuCa676.VImotor, OJogador.dinheiro, 1);

                                else{ //Caso tenha atingido, cai nessa condição.
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }

                            else if (OJogador.foguetes==2){

                                if(OJogador.motor < PeWi774.MAXmotor) //Compara se atingiu a capacidade máxima de upgrades
                                        upgrade(OJogador.motor,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, PeWi774.VImotor, OJogador.dinheiro, 2);

                                else{ //Caso tenha atingido, cai nessa condição.
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }

                            else{
                                if (OJogador.motor < CarD407.MAXmotor)
                                    upgrade(OJogador.motor,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, CarD407.VImotor, OJogador.dinheiro, 3);

                                else{
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }
                        }

                        else if (escolha == 2){
                            PINTAUPGRADES();

                            if (OJogador.foguetes==1){
                                if(OJogador.capMin < LuCa676.MAXcapMin) //Compara se atingiu a capacidade máxima de upgrades
                                    upgrade(OJogador.capMin,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, LuCa676.VIcapMin, OJogador.dinheiro, 1);

                                else{ //Caso tenha atingido, cai nessa condição.
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }
                            else if (OJogador.foguetes==2){

                                if(OJogador.capMin < PeWi774.MAXcapMin) //Compara se atingiu a capacidade máxima de upgrades
                                        upgrade(OJogador.capMin,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, PeWi774.VIcapMin, OJogador.dinheiro, 2);

                                else{ //Caso tenha atingido, cai nessa condição.
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }
                            else{
                                if (OJogador.capMin < CarD407.MAXcapMin)
                                    upgrade(OJogador.capMin,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, CarD407.VIcapMin, OJogador.dinheiro, 3);

                                else{
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }
                        }

                        else if (escolha == 3){
                            PINTAUPGRADES();

                            if (OJogador.foguetes==1){
                                if(OJogador.tanqGaso < LuCa676.MAXtanqGaso) //Compara se atingiu a capacidade máxima de upgrades
                                    upgrade(OJogador.tanqGaso,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, LuCa676.VItanqGaso, OJogador.dinheiro, 1);

                                else{ //Caso tenha atingido, cai nessa condição.
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }
                            else if (OJogador.foguetes==2){

                                if(OJogador.tanqGaso < PeWi774.MAXtanqGaso) //Compara se atingiu a capacidade máxima de upgrades
                                        upgrade(OJogador.tanqGaso,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, PeWi774.VItanqGaso, OJogador.dinheiro, 2);

                                else{ //Caso tenha atingido, cai nessa condição.
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }
                            }
                            else{

                                if (OJogador.tanqGaso < CarD407.MAXtanqGaso)
                                    upgrade(OJogador.tanqGaso,OJogador.motor, OJogador.capMin, OJogador.tanqGaso, CarD407.VItanqGaso, OJogador.dinheiro, 3);

                                else{
                                    gotoxy(1,7);        cout << "Capacidade de upgrade";
                                    gotoxy(1,8);        cout << "  máxima atingida.";
                                    Sleep(2000);
                                    PINTAUPGRADES();
                                }

                            }

                        }

                    else if (escolha > 0 || escolha > 3){
                        PINTAUPGRADES();
                        gotoxy(5, 8);       cout << "Opção inválida!";
                        Sleep(1500);
                        PINTAUPGRADES();
                    }

                    PINTAUPGRADES();
                    }while(escolha!=0);
                }

            PINTATUDO();
            }while(escolha != 0);
        }

        else if (esc == 4){
            char decisao;
            int fogueteCompra=OJogador.foguetes+1;
            int price;
            clrscr();
            gotoxy(33, 1);
            cout << "Bem-vindo a loja de foguetes!!";
            gotoxy(32, 2);
            cout << "   Temos 3 modelos populares!!";
            Position(1,1,12);
            Position(2,35,9);
            Position(3,70,3);
            gotoxy(17,17);
            cout<<"nº3 LuCa-676";
            gotoxy(51,17);
            cout<<"nº2 PeWi-774";
            gotoxy(97,17);
            cout<<"nº1 CarD-407";
            pintaStatus(3, 2, 5, 1, 21);

            gotoxy(1,24);
            if(OJogador.foguetes>=1)
            {

                cout<<"Preço: SOLD OUT";
            }
            else
            {
                cout<<"Preço: PS$ 25.000";
            }
            gotoxy(1,23);
            pintaStatus(6, 4, 5, 35,21);

            gotoxy(35,24);
            if(OJogador.foguetes>=2)
            {

                cout<<"Preço: SOLD OUT";
            }
            else
            {
                cout<<"Preço: PS$ 250.000,00";
            }
            pintaStatus(10, 10, 7, 70,21);

            gotoxy(70,24);
            if(OJogador.foguetes==3)
            {
                cout<<"Preço: SOLD OUT";
            }
            else
            {
                cout<<"Preço: PS$ 1.000.000,00";
            }
            if(OJogador.foguetes<3)
            {
                gotoxy(37, 26);         cout << "Seu ";
                printaDinheiro(OJogador.dinheiro,41,26);
                gotoxy(20, 27);
                cout << "Nosso chefe permitiu você poder comprar o nosso foguete nº"<<fogueteCompra<<"!!";
                gotoxy(37, 28);
                cout << "Deseja compra-lo?? [s/n] ";
                cin >> decisao;

                if(decisao=='s'||decisao=='S')
                {
                   if(fogueteCompra>1 && PeWi774.preco>OJogador.dinheiro){
                        gotoxy(30, 30);         cout << "Você está pobre! Volte quando";
                        gotoxy(30, 31);         cout << "    Obtiver mais puscoin!";
                   }
                   else{
                        //adicionar a redução de pusscoins aqui e tambem alterar os dados do foguete atual
                        OJogador.foguetes+=1;

                        if (fogueteCompra==2){
                            price=PeWi774.preco;
                            OJogador.motor=PeWi774.motor;
                            OJogador.capMin=PeWi774.capMin;
                            OJogador.tanqGaso=PeWi774.tanqGaso;
                        }
                        else{
                            price=CarD407.preco;
                            OJogador.motor=CarD407.motor;
                            OJogador.capMin=CarD407.capMin;
                            OJogador.tanqGaso=CarD407.tanqGaso;
                        }

                        OJogador.dinheiro-=price;

                        gotoxy(26, 30);
                        cout<<"Agora você possui o modelo nº"<<OJogador.foguetes<<". Faça bom uso.";
                    }
                }

                else
                {
                    gotoxy(26, 30);
                    cout<<"ENTÃO SÓ APAREÇA AQUI QUANDO QUISER COMPRAR...";
                }
            }
            else
            {
                gotoxy(27, 27);
                cout << "Você já tem todos nossos foguetes :D ";
            }
            Sleep(2500);
            clrscr();



        }

        else if (esc == 5){ //salva o jogo
            PINTATUDO();
            ocultar(1);
            Position(OJogador.foguetes, 34, 5);
            if(OJogador.foguetes==1){
                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 30,14);
                printaDinheiro(OJogador.dinheiro, 30, 15);
                pintaStatus(OJogador.motor, OJogador.capMin, OJogador.tanqGaso, 30, 16);
            }

            else if(OJogador.foguetes==2){
                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 30,17);
                printaDinheiro(OJogador.dinheiro, 32, 18);
            }

            else{
                printaGasolina(OJogador.gasolina, OJogador.tanqGaso, 35,23);
                printaDinheiro(OJogador.dinheiro, 37, 24);
            }
            gotoxy(7,9);        cout << "Salvando";

            for (int y=6; y<16;y++){        //essa parte vai pintar os pontos ao redor do nome "salvando"
                for (int x=8; x<9;x++){
                    gotoxy(y,x);    cout << ".";
                    Sleep(100);
                }
            }
            gotoxy(6,9);            cout << ".";            Sleep(100);
            gotoxy(15,9);           cout << ".";            Sleep(100);
            for (int y=6; y<16;y++){
                for (int x=10; x<11;x++){
                    gotoxy(y,x);    cout << ".";
                    Sleep(100);
                }
            } ////

            for (int y=6; y<16;y++){ //essa parte pinta espaço em cima de todo o nome salvando
                for (int x=8; x<12;x++){
                    gotoxy(y,x);    cout << " ";
                    Sleep(20);
                }
            }
            SAVE_GAME(OJogador);
            gotoxy(8,9);        cout << "SALVO!";
            Sleep(500);
            ocultar(0);
            PINTATUDO();
        }

        else if(esc == 6){ //Carrega o jogo
                Carrega_or_Deleta(3,OJogador);
                system("cls");
        }
        else if (esc == 7){ // Volta ao menu inicial
                if(MENU_INICIAL(OJogador) == 3)
                    return 0;
        }

        else if (esc>8 || esc<0){
            gotoxy(40,38);      cout << "Opção inválida!";
            Sleep(2000);
            clrscr();
        }
    }while(esc!=8);

    return 0;
}
