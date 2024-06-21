#ifndef INSTRUMENT_HPP_INCLUDED
#define INSTRUMENT_HPP_INCLUDED
#include <iostream>
#include "dinstring.hpp"

class Instrument
{
    protected:
        DinString zemljaPorekla;
                
    public:
        Instrument() 
        : zemljaPorekla("Srbija"){}
        Instrument(const DinString &chars )
        : zemljaPorekla(chars) {}

        virtual void sviraj() const = 0;
        virtual void ispisi() const = 0;

};

#endif 