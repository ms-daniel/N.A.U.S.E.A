#include "..\headers\naves.h"

void Animation1(int foguete, int tam){
    ocultar(1);
        for (int i=20;i<25;i++){
            PINTAFOGUETE();
            switch (foguete){
                case 1:
                    LuCa676(i,i);
                    break;
                case 2:
                    PeWi774(i,i);
                    break;
                case 3:
                    CarD407(i,i);
                    break;
                default:
                    cout << "ERROR 696!" << endl;
                    break;
            }
            Beep(200,60);

            // ===================================================== //
            if(i==24 || i == 0 )
                for(int j=24;j>-tam;j--){
                    clrscr();
                    switch (foguete){
                        case 1:
                            LuCa676(i,j);
                            break;
                        case 2:
                            PeWi774(i,j);
                            break;
                        case 3:
                            CarD407(i,j);
                            break;
                        default:
                            cout << "ERROR 697!" << endl;
                            break;
                    }
                    Beep(200,10);
                }
        }
    ocultar(0);
}

void Animation2(int foguete, int tam, int tam2){
    ocultar(1);
    for(int j=24;j>(-tam+tam2);j--){
        if (tam2==0)
            clrscr();
        else
            PINTAFOGUETE2();

                    switch (foguete){
                        case 1:
                            LuCa676(24,j);
                            break;
                        case 2:
                            PeWi774(24,j);
                            break;
                        case 3:
                            CarD407(24,j);
                            break;
                        default:
                            cout << "ERROR 697!" << endl;
                            break;
                    }
                    Beep(200,10);
                }
                ocultar(0);
}

