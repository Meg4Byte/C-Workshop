#ifndef MENJAC_HPP
#define MENJAC_HPP

#include <iostream>

enum TIP_MENJACA {MANUELNI , AUTOMATSKI};

class Menjac
{
    private : 

        int brzine;
        TIP_MENJACA tip;

    public : 

        Menjac() : brzine(0) , tip(AUTOMATSKI) {}

        Menjac(int b , TIP_MENJACA t)

        : brzine(b) , tip(t) {}

        Menjac(const Menjac &other) 
        
        : brzine(other.brzine) , tip(other.tip) {}

        bool set_brzina(int val)
        {
            brzine = val;
        }

        void set_tip(TIP_MENJACA val)
        {
            tip = val;
        }

        int get_brzina() const
        {
            return brzine;
        }

        TIP_MENJACA get_tip() const
        {
            return tip;
        }

};


#endif // MENJAC_HPP
