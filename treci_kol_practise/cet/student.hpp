#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "dinstring.hpp"
#include "osoba.hpp"

class Student : public Osoba
{
    protected:
        int br_indeka;

    public:
        Student() : Osoba() , br_indeka(0) {}

        Student(const DinString &ime ,const  DinString& prezime , int indeks) : 

        Osoba(ime , prezime) , br_indeka(indeks) {}

        Student(const Student &other) : 
        
        Osoba((Osoba)other) , br_indeka(other.br_indeka) {} 

        void display() override
        {
            std::cout << "Student : " << std::endl;
            std::cout << "Ime : " << ime << std::endl; 
            std::cout << "Prezime : " << prezime << std::endl;
            std::cout << "Br indeksa :" << br_indeka << std::endl; 

        }

};

#endif // STUDENT_HPP