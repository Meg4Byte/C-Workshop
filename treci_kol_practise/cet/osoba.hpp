#ifndef OSOBA_HPP
#define OSOBA_HPP

#include "dinstring.hpp"


class Osoba
{
    protected:
        DinString ime;
        DinString prezime;

    public: 
        Osoba() : ime("") , prezime("") {}

        Osoba(DinString var_1 , DinString var_2) :
        ime(var_1) , prezime(var_2) {}

        Osoba(const Osoba &other ) : 
        ime(other.ime) , prezime(other.prezime) {}

        virtual void display()
        {
            if (ime == "" && prezime == "")
            {
                std::cout << "JOHN DOE" << std::endl;
            }

            else
            {
                std::cout << "Ime " << ime << std::endl;
                std::cout << "Prezime " << prezime << std::endl;
            }
        }

};

#endif //OSOBA_HPP