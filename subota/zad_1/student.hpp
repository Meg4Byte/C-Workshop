#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include <iostream>
#include "osoba.hpp"


class Student : public Osoba
{
    private:
        int brojIndeksa;

    public:
        
        Student(const char* string_1 = "" , const char* string_2 = "" , int br = 0) 
        : Osoba(string_1 , string_2) , brojIndeksa(br) {}

        Student(const DinString &ds_1 , const DinString &ds_2 , int br) 
        : Osoba(ds_1 , ds_2) , brojIndeksa(br) {}

        Student(const Osoba& other , int br) 
        : Osoba(other) , brojIndeksa(br) {}

        Student(const Student& other)
        : Osoba(other) , brojIndeksa(other.brojIndeksa)

        void predstaviSe() const
        {
            Osoba::predstavi();
            std::cout << "Br indeksa : " << brojIndeksa << std::endl;
        }

};

#endif 