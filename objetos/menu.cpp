#include "..\headers\naves.h"

void FogueteMENU(int linha){
    ocultar(1);
    for(int i = 28;i<54;i++){
        gotoxy(i,linha);cout << "->-";
        gotoxy(i-2,linha);cout << " ";
        Sleep(15);
    }
    gotoxy(52,linha);cout << "    ";
    ocultar(0);
}


void INTRO(){
    ocultar(1);
    cout << "Por favor, maximize o executavel para uma melhor experiência" << endl;
    cout << "E então, aperte qualquer tecla" << endl << endl;
    cout << "                       UTILIZE APENAS O TECLADO PARA JOGAR!";
    getch();
    system("cls");
    for(int i = 0; i<6 ; i++){
        gotoxy(33,27);cout << "Carregando   ";
        Sleep(120);
        gotoxy(33,27);cout << "Carregando.  ";
        Sleep(120);
        gotoxy(33,27);cout << "Carregando.. ";
        Sleep(120);
        gotoxy(33,27);cout << "Carregando...";
        Sleep(120);
    }
}

int MENU_INICIAL(jogador& OJogador){
    ocultar(1);
    system("cls");
    textcolor(WHITE);
    gotoxy(5,3);cout << " ****     **       **       **     **    ********   ********       ** ";
    gotoxy(5,4);cout << "/**/**   /**      ****     /**    /**   **//////   /**/////       **** ";
    gotoxy(5,5);cout << "/**//**  /**     **//**    /**    /**  /**         /**           **//** ";
    gotoxy(5,6);cout << "/** //** /**    **  //**   /**    /**  /*********  /*******     **  //** ";
    gotoxy(5,10);cout << "/**  //**/**   **********  /**    /**  ////////**  /**////     ********** ";
    gotoxy(5,11);cout << "/**   //****  /**//////**  /**    /**         /**  /**        /**//////** ";
    gotoxy(5,12);cout << "/**    //***  /**     /**  //*******    ********   /********  /**     /** ";
    gotoxy(5,13);cout << "//      ///   //      //    ///////    ////////    ////////   //      // ";

    for(int i = 1;i<COLUNAi;i++){
        gotoxy(i,8);cout << "->-";
        gotoxy(i-4,8);cout << " ";
        Sleep(20);
    }
    gotoxy(5,3);cout << " ****     **       **       **     **    ********   ********       ** ";
    gotoxy(5,4);cout << "/**/**   /**      ****     /**    /**   **//////   /**/////       **** ";
    gotoxy(5,5);cout << "/**//**  /**     **//**    /**    /**  /**         /**           **//** ";
    gotoxy(5,6);cout << "/** //** /**    **  //**   /**    /**  /*********  /*******     **  //** ";
    gotoxy(5,7);cout << "/**  //**/**   **********  /**    /**  ////////**  /**////     ********** ";
    gotoxy(5,8);cout << "/**   //****  /**//////**  /**    /**         /**  /**        /**//////**     ";
    gotoxy(5,9);cout << "/**    //***  /**     /**  //*******    ********   /********  /**     /** ";
    gotoxy(5,10);cout << "//      ///   //      //    ///////    ////////    ////////   //      // ";
    gotoxy(5,11);cout << "                                                                         ";
    gotoxy(5,12);cout << "                                                                         ";
    gotoxy(5,13);cout << "                                                                         ";


    for(int i = COLUNAi;i>1;i--){
        gotoxy(i,13);cout << "-<-";
        gotoxy(i+6,13);cout << " ";
        Sleep(20);
    }
        gotoxy(1,13);cout << "                ";

    string NAUSESA="  NAUSEA - Nacional - Astronauta - Universal - Space- Eletronic - Arts";
    for(int i = 0;i < 70;i++){
        gotoxy(5+i,12);cout << NAUSESA[i];
    Sleep(30);
    }
    gotoxy(22,25);cout << " Aperte qualquer tecla para iniciar! ";
    getch();
    gotoxy(22,25);cout << "                                     ";
    ocultar(0);
    int resposta = MENU_RESPOSTA();
            if(resposta == 1){
                PINTAMENU();
                textcolor(WHITE);
                gotoxy(32,20);cout << "Digite seu nome";
                gotoxy(27,22);cin >> OJogador.nome;
                while(VERIFICA_ARQUIVO(OJogador)){
                    textcolor(LIGHTRED);
                    gotoxy(32,24);cout << "Username Já EXISTE!";
                    Sleep(2000);
                    textcolor(WHITE);
                    PINTAMENU();
                    gotoxy(32,20);cout << "Digite seu nome";
                    gotoxy(27,22);cin >> OJogador.nome;
                }
                SAVE_GAME(OJogador); // Cria o arquivo com o nome do jogador
                PINTAMENU();
                string TEXT_INTROa = "'Busquem Conhecimento' é o único som captado do vazio";
                string TEXT_INTROb = "       Você precisa encontrar de onde ele vem        ";
                gotoxy(24,18); cout << OJogador.nome << " pode ouvir um eco no espaço... ";
                for(int i = 0; i<53;i++){
                        gotoxy(i+15,20);cout << TEXT_INTROa[i];
                        Sleep(100);
                    }
                for(int i = 0; i<53;i++){
                        gotoxy(i+16,22);cout << TEXT_INTROb[i];
                        Sleep(100);
                    }
                gotoxy(36,26);cout << "OBJETIVO";
                gotoxy(24,28);cout << "- Coletar Recursos nos Planetas";
                gotoxy(24,29);cout << "- Vendê-los no planeta TERRA";
                gotoxy(24,30);cout << "- Adquira novos foguetes e melhorias";
                gotoxy(24,31);cout << "- Descubra os misterios do Universo";
                gotoxy(24,32);cout << "- Seja o melhor astronauta do Sistema";
                gotoxy(24,34);cout << "Aperte qualquer tecla para continuar.";
                getch();
            }
            if(resposta == 2){
                    PINTAMENU();
                    gotoxy(32,20);cout << "1 - Carregar jogo";
                    gotoxy(32,22);cout << "2 - Excluir jogo";
                    gotoxy(32,24);cout << "3 - Voltar";
                    int escolha; gotoxy(32,26);cin >> escolha;
                    PINTAMENU();
                    if(escolha == 1)
                        Carrega_or_Deleta(escolha,OJogador);
                    else if(escolha == 2){
                        Carrega_or_Deleta(escolha,OJogador);
                        if(MENU_INICIAL(OJogador) == 3)
                            return 0;
                    }
                    else if(escolha == 3){
                        if(MENU_INICIAL(OJogador) == 3)
                            return 0;
                    }

                }
            if(resposta == 3){
                return 3;
            }
        system("cls");
}

int MENU_RESPOSTA(){


    PINTAMENU();

    gotoxy(32,20);cout << "1 - NOVO JOGO";
    gotoxy(32,25);cout << "2 - CARREGAR JOGO";
    gotoxy(32,30);cout << "3 - SAIR DO JOGO";

    char comandoMENU;
    while(1){
        gotoxy(39,33);cin >> comandoMENU;
        if(comandoMENU == '1'){
            FogueteMENU(20);
            return 1;
        }
        else if(comandoMENU == '2'){
            FogueteMENU(25);
            return 2;
        }
        else if(comandoMENU == '3'){
            FogueteMENU(30);
            return 3;
        }
        else{
            gotoxy(32,33);cout << "Comando inválido";
            Sleep(200);
            gotoxy(32,33);cout << "                        ";
            cin.clear();
        }
    }

}


