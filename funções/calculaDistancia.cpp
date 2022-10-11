#include "..\headers\naves.h"


int calcula_distancia(int dist1,int dist2)// calcula o tempo em horas que leva de um planeta ate outro
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
        return distancia;
}
