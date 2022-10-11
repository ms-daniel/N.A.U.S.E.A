#include "../headers/naves.h"

float gasRecursivo(float& gasAtual, int CapGas, float puscoin, float preco, float litros, int foguete){
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
                    if (litros == 0)
                        return puscoin;
                    gasAtual++;

                return gasRecursivo(gasAtual,CapGas,puscoin-preco,preco,litros-1, foguete);

}
