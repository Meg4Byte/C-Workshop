#ifndef SKOLJKA_HPP
#define SKOLJKA_HPP

#include <iostream>

enum BOJA {CRVENA , PLAVA , CRNA };

class Skoljka
{
    private : 
        BOJA boja_skoljke;

    public : 

        Skoljka () : boja_skoljke(CRVENA) {}

        Skoljka(BOJA b) : boja_skoljke(b) {}

        Skoljka(const Skoljka &other) : boja_skoljke(other.boja_skoljke) {}

        void set_boja(BOJA val)
        {
            boja_skoljke(val);
        }

        BOJA get_boja() const
        {
            return boja_skoljke;
        }

};



#endif // SKOLJKA_HPP