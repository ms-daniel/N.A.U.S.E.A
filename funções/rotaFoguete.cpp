#include "..\headers\naves.h"

void printar_rota(long int dist1,long int dist2,int n_planeta_atual, int n_planeta, int motor, int gas_atual)//vai printar os dados da sua rota de um planeta ate outro, nome do planeta atual, o planeta destino, a distancia entre eles, o tempo que vai levar entre eles, a velocidade, a gasolina gasta e as moedas ganhas, gasolina e moedas estão em aguardo.
{
    long int aux=0;
    long int distancia=0;
    if (dist2>dist1)
    {
        aux = dist1;
        dist1=dist2;
        dist2=aux;
    }
    distancia=dist1-dist2;

    gotoxy(20,39);          cout << "                                 ";
    gotoxy(20,40);          cout << "                                 ";
    gotoxy(31,41);          cout << "     ";

    textcolor(GREEN);
    gotoxy(1,39);      cout << nome_dos_planetas(n_planeta_atual);
    textcolor(WHITE);
    cout << " para ";
    textcolor(RED);
    cout << nome_dos_planetas(n_planeta);

    textcolor(WHITE);
    gotoxy(1,40);      cout << "Distancia: ";
    textcolor(BLUE);    cout << distancia;
    textcolor(WHITE);   cout <<" KM.";

    gotoxy(1,41);      cout << "Gasolina Necessária: ";
    textcolor(YELLOW);  cout <<calculaGasNecessario(motor, gas_atual, dist1, dist2);
    textcolor(WHITE);   cout <<" Litros";
    //gotoxy(41,47);      cout << "Recebera em pusscoins: "<<(100)+(10*capacidade_de_mineracao)+((n_planeta*n_planeta*n_planeta)*3)<<"PSPS";//100=base  + capacidade de mineracao do foguete atual + bonus por planeta

}
