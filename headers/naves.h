#ifndef nave_h
#define nave_h

//definição das bibliotecas
#include <iostream>
#include <conio2.h>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <string>
#include <locale>
#include <time.h>

#define LINHAz 40
#define COLUNAi 80

const int veloPLitro=100000; //constante para velocidade padrão dos foguetes

//======================

using namespace std;

//========================================

struct jogador{
        int foguetes = 3;
        char nome[20];
        float dinheiro = 1000000;
        int motor=20;
        int capMin=20;
        int tanqGaso=40;
        float gasolina=4000;
        int minerios=0;
};

struct status{
    int motor;
    int capMin;
    int tanqGaso;
    int VImotor;
    int VIcapMin;
    int VItanqGaso;
    int MAXmotor;
    int MAXcapMin;
    int MAXtanqGaso;
    float preco;
};




//=================================================//


//definição das funções
void Animation1(int foguete, int tam);                               // função que faz a animação "padrão". Recebe um caractere representando a inicial

void Animation2(int foguete, int tam, int tam2);                                        // do foguete e um inteiro representando o tamanho de linhas que o foguete oculta
                                                                                // se tiver duvidas do tamanho, consulte o codigo q contem as "planta" do foguete

void ocultar(int esc);                                                           //ocultar cursor do mouse

void Position(int foguete, int x, int y);                                      //posicionar o foguete em algum lugar;

float calculaGas(int MotFog,float gaso_atual, int plan_o, int plan_d);      //Calcula o quanto vai gastar de combustivel

float calculaGasNecessario(int MotFog, float gaso_atual, int plan_o, int plan_d);

float reabastece(float& gasAtual, int CapGas, int lugar, int foguete, float puscoin);         //gasolina atual, capacidade do tanque, moedas que tem, um caractere dizendo
                                                                                //se está no planeta terra, no espaço ou outro planeta(T, E, P)
void PINTAMENU();
void PINTATUDO();
void PINTAREABASTECIMENTO();
void PINTAUPGRADES();
void PINTAVIAGEM();
void PINTAFOGUETE();
void PINTAFOGUETE2();
void GAMEOVER();

void Planeta(int plan, int y);

int VERIFICA_ARQUIVO(jogador savegame);
void SAVE_GAME(jogador savegame);
void APAGAR_GAME(jogador savegame);
void Carrega_or_Deleta(int escolha, jogador& OJogador);

void printar_rota(long int dist1,long int dist2,int n_planeta_atual, int n_planeta, int motor, int gas_atual);

string nome_dos_planetas(int e_planeta);

void printar_lista_de_planetas(int coluna,int linha, int print, jogador OJogador);

void FogueteMENU(int linha);

void INTRO();
int MENU_INICIAL(jogador& OJogador);

int MENU_RESPOSTA();

int calcula_distancia(int dist1,int dist2);

int upgrade(int& melhoria, int& um, int& dois, int& tres, int VIstatus, float& moeda, int foguete);

void printaGasolina (float floatGaso, int capacGaso, int x, int y);

void pintaStatus(int motor, int capMin, int tanqGaso, int x, int y);

void printaDinheiro(float puscoin, int x, int y);

int mineracao(int capacidade,int armazem, int planeta, float& gasolina, int foguete, int tanGaso);

void printaArmazem(int armazem, int capacidade, int x, int y);

float venda(int& armazem, float puscoin);

void EbiluT(int x, int y);

float gasRecursivo(float& gasAtual, int CapGas, float puscoin, float preco, float litros, int foguete);


//foguetes
void LuCa676(int x, int y);
void PeWi774(int x, int y);
void CarD407(int x, int y);
void TanqueGasolina(int x, int y);

#endif // nave_h
