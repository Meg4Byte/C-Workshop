#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>
#include "dstring.hpp"

class Osoba
{
    private:
        DinString ime;
        DinString prezime;

    public:
        
        Osoba(const char* string_1 ="", const char* string_2 = "") : ime(string_1) , prezime(string_2) {}

        Osoba(const DinString &ds_1 , const DingString &ds_2) : ime(ds_1) , prezime(ds_2) {}
        
        Osoba(const Osoba &other) : ime(other.ime) , prezime(other.prezime) {}

        void predstaviSe()
        {
            std::cout << "IME : " << ime << std::endl;
            std::cout << "PREZIME : " << prezime << std::endl;
        }

};

#endif