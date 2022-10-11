#include "..\headers\naves.h"


float calculaGas(int MotFog, float gaso_atual, int plan_o, int plan_d){

    float DpLT = (veloPLitro + (MotFog*15000)) * gaso_atual;
    float DpL =  veloPLitro + (MotFog*15000);
    float distance = calcula_distancia(plan_o, plan_d);

    float gasGas=0;

    if (DpLT<distance){
        return 0;
    }
    else{
        gasGas=DpLT-distance;
        gasGas/=DpL;
    }

    return gasGas;

}

float calculaGasNecessario(int MotFog, float gaso_atual, int plan_o, int plan_d){

    float DpLT = (veloPLitro + (MotFog*15000)) * gaso_atual;
    float DpL =  veloPLitro + (MotFog*15000);
    float distance = calcula_distancia(plan_o, plan_d);

    float gasGas=0;
    gasGas=distance/DpL;

    return gasGas;

}
