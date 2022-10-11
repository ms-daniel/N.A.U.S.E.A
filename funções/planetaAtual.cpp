#include "..\headers\naves.h"


string nome_dos_planetas(int e_planeta)//define o nome dos planetas de acorda com a numeração
{

    switch(e_planeta)
    {
    case 1:
        return "Mercurio";
        break;
    case 2:
        return "Venus";
        break;
    case 3:
        return "Terra";
        break;
    case 4:
        return "Marte";
        break;
    case 5:
        return "Ceres";
        break;
    case 6:
        return "Jupiter";
        break;
    case 7:
        return "Saturno";
        break;
    case 8:
        return "Urano";
        break;
    case 9:
        return "Netuno";
        break;
    case 10:
        return "Plutao";
        break;
    case 11:
        return "Eris";
        break;

    }
}
