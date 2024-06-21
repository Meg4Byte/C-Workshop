#ifndef TELEFON_GEN2_HPP_INCLUDED
#define TELEFON_GEN2_HPP_INCLUDED

#include <iostream>
#include "dinstring.hpp"
#include "telefon.hpp"
#include "kamera.hpp"


class TelefonGen2 : public Telefon
{
    private:
        Kamera k;

    public:
        TelefonGen2() 
        : Telefon() , k(){}
        TelefonGen2(const DinString & broj , int mpx , int fs) 
        : Telefon(broj) , k(mpx , fs) {}  

        bool slikajSliku() 
        {
            bool tmp = k.slikaj();
            return tmp;
        }
        
};

#endif 