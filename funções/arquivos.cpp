#include "..\headers\naves.h"


int VERIFICA_ARQUIVO(jogador savegame){
    ifstream verificaARQ;
    verificaARQ.open(savegame.nome,ios::in);
    if(verificaARQ.is_open()){
        verificaARQ.close();
        return 1;
    }
    return 0;
}

void SAVE_GAME(jogador savegame){

        ofstream ofsavegame;
        ofsavegame.open(savegame.nome,ios::trunc);

        ofsavegame.write((const char*)(&savegame),sizeof(jogador));

        ofsavegame.close();
        }
void APAGAR_GAME(jogador savegame){

    ifstream apagasave;
    apagasave.open(savegame.nome,ios::in);
    if(apagasave.is_open()){
        apagasave.close();
        if(remove(savegame.nome) != 1){
            gotoxy(29,24);cout << "O Jogo " << savegame.nome << " foi excluido.";
            getch();
            remove(savegame.nome);
        }
        PINTAMENU();
    }
    else{
            gotoxy(32,24);cout << "Jogo não existe";
            Sleep(2000);
            PINTAMENU();
    }

}

void Carrega_or_Deleta(int escolha, jogador& OJogador){
    if(escolha == 1){
                while(true){
                    gotoxy(32,20);cout << "Digite seu nome";
                    gotoxy(32,22);cin >> OJogador.nome;
                        if(VERIFICA_ARQUIVO(OJogador)){
                            ifstream carrega_save;
                            carrega_save.open(OJogador.nome,ios::in);
                            carrega_save.read((char*)(&OJogador),sizeof(jogador));
                            carrega_save.close();
                            break;
                        }
                        else{
                            gotoxy(32,24);cout << "Jogo não existe";
                            Sleep(2000);
                            PINTAMENU();
                        }
                }
            system("cls");}
            if(escolha == 2){
                gotoxy(29,20);cout << "Qual Astronauta irá excluir?";
                gotoxy(32,22);cin >> OJogador.nome;
                APAGAR_GAME(OJogador);
            }
        if(escolha == 3){
            while(true){
            gotoxy(40,38);cout << "Carregar jogo: ";
            gotoxy(55,38);cin >> OJogador.nome;
                if(VERIFICA_ARQUIVO(OJogador)){
                            ifstream carrega_save;
                            carrega_save.open(OJogador.nome,ios::in);
                            carrega_save.read((char*)(&OJogador),sizeof(jogador));
                            carrega_save.close();
                            break;
                        }
                        else{
                            gotoxy(40,38);cout << "Jogo não existe";
                            Sleep(2000);
                            PINTAMENU();
                        }
            }
        }
}
