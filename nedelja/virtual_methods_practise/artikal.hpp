
#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED

#include <iostream>
#include "dingstring.hpp"

class Artikal
{
    private:
        DingString naziv;
        double cena;
        static int instance;

    public:
        Artikal(const char[] chr  , const double c)
        :naziv(chr) , cena(c)  {}
        Artikal(const DinString &other , const double c)
        :naziv(other) , cena(c) {}
        Artikal(const Artikal &other)
        :Artikal(other.naziv , other.cena) {}
        ~Artikal();

        DinString getNaziv() const
        {
            return naziv;
        }

        double getCena() const
        {
            return cena;
        }

        friend std::ostream& operator << (std::ostream &os , const Artikal &artikal)
        {
            os << "naziv : " << artikal.naziv << " , cena : " << artikal.cena << "instance : " << artikal.instance;
            return os;
        } 

};

#endif //ARTIKAL_HPP_INCLUDED