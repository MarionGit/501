#include <iostream>
#include <cstring>
#include "Vehicule.h"
#include "Camion.h"
#include "Moto.h"
#include "Voiture.h"




int main()
{
    Camion C;
    Voiture V;
    Moto M;

    std::cout<<"camion"<<std::endl;
    C.Saisie();
    std::cout<<"voiture"<<std::endl;
    V.Saisie();
    std::cout<<"moto"<<std::endl;
    M.Saisie();

    C.AjoutnPassagers(1);
    V.AjoutnPassagers(3);
    M.AjoutnPassagers(1);

    C.Rouleravitesse(150);
    V.Rouleravitesse(150);
    M.Rouleravitesse(150);

    C.Rouleravitesse(90);
    V.Rouleravitesse(90);
    M.Rouleravitesse(90);

    C.AjoutCargaison();

    return 0;
}
