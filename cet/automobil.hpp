#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include <iostream>
#include "menjac.hpp"
#include "skoljka.hpp"

class Automobil
{
    private:
        Menjac menjac;
        Skoljka skoljka;

    public :
        Automobil();
        Automobil(TipMenjaca tip , BojaSkoljke boja , int br);
        //Automobil(const Automobil &);

        bool setBrzina(int br);
        void setBoja(BojaSkoljke boja);
        void setTipMenjaca(TipMenjaca tip);

        int getBrzina() const;
        TipMenjaca getTipMenjaca() const;
        BojaSkoljke getBoja() const;

};

#endif 