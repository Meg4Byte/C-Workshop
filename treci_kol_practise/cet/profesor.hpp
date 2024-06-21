#ifndef PROFESOR_HPP
#define PROFESOR_HPP

#include "dinstring.hpp"
#include "osoba.hpp"

class Profesor : public Osoba
{
    protected:
        DinString predmet;

    public:

        Profesor() : Osoba() , predmet("") {}

        Profesor(const DinString &ime , const DinString &prezime , const DinString &predmeti) 
        : Osoba(ime , prezime) , predmet(predmeti) {}

        Profesor(const Profesor &other) : 

        Osoba((Osoba)other) , predmet(other.predmet) {}

        void display() override
        {
            std::cout << "Profesor : " << std::endl;
            std::cout << "Ime : " << ime << std::endl; 
            std::cout << "Prezime : " << prezime << std::endl;
            std::cout << "Predmey :" << predmet << std::endl; 

        }

};

#endif //PROFESOR_HPP