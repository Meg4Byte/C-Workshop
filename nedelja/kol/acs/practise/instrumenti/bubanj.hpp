#ifndef BUBANJ_HPP_INCLUDED
#define BUBANJ_HPP_INCLUDED

#include "instrument.hpp"
#include "dinstring.hpp"

class Bubanj : public Instrument
{
    private:
        static int brojUdaraca; //postavi na 0 

    public:
        Bubanj() : Instrument() {}
        Bubanj(const DinString &ds) : Instrument(ds) {}
        
        void sviraj() const 
        {
            brojUdaraca ++;
            if (brojUdaraca%3 == 0 )
            {
                std::cout << "Tss" << std::endl;
            }
            else
            {
                std::cout << "Bum " << std::endl;
            }
        }

        void ispisi() const 
        {
            std::cout<<"Bubanj - Zemlja porekla : "<< zemljaPorekla<< " .Broj udaraca :" << brojUdaraca <<std::endl;

        }

};

#endif //BUBANJ_HPP