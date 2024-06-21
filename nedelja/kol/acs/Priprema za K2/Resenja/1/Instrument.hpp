#ifndef INSTRUMENT_HPP_INCLUDED
#define INSTRUMENT_HPP_INCLUDED

#include "dinstring.hpp"
using namespace std;

class Instument {
    protected:
        DinString zemljaPorekla;

    public:
        Instument() : zemljaPorekla("Srbija") {}
        Instument(const DinString& zp) : zemljaPorekla(zp) {}

        virtual void sviraj() = 0;
        virtual void ispisi() const = 0;
};

#endif // INSTRUMENT_HPP_INCLUDED

