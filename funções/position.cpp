#include "..\headers\naves.h"

void Position(int foguete, int x, int y){
    switch (foguete){
            case 1:
                LuCa676(x,y);
                break;
            case 2:
                PeWi774(x,y);
                break;
            case 3:
                CarD407(x,y);
                break;
            default:
                cout << "ERROR 696!" << endl;
                break;
        }

}
