#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

#include <iostream>

enum TipMenjaca {MANUELNI , AUTOMATIK};

class Menjac
{
    private :
        int br_brzina;
        TipMenjaca tip_menjaca;

    public :
        Menjac();   //bez parametara
        Menjac(int brzina , TipMenjaca tip);     //sa parametrima
        Menjac(const Menjac &other); //kopija

        bool setBrzina(int br);        //bool
        void setTip(TipMenjaca tip);    //void
        int getBrzina() const;  //int
        TipMenjaca getTip() const;  //enum

};

#endif 