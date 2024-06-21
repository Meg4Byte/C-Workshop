#ifndef TELEFON_HPP_INCLUDED
#define TELEFON_HPP_INCLUDED

#include "kamera.hpp"
#include "dinstring.hpp"

class Telefon
{
    protected:
        DinString broj;

    public:
        Telefon() : broj("") {}
        Telefon(const DinString& br ) : broj(br) {}

        bool pozovi(const DinString& br ) const
        {
            if (broj == br )
            {
                return false;
            }
            return true;
        }

};

#endif //TELEFON_HPP