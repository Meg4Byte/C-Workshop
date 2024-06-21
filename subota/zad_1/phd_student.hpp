#ifndef PHD_STUDENT_HPP_INCLUDED
#define PHD_STUDENT_HPP_INCLUDED
#include "student.hpp"
#include <iostream>
#include "dstring.hpp"

class PhDStudent : public Student
{
    private:
        double prosecnaOcena;

    public:
        PhDStudent(const char* string_1 = "" , const char* string_2 = "" , int indeks = 0 , double ocena = 0)
        : Student(string_1 , string_2 , indeks) , prosecnaOcena(ocena) {}

        PhDStudent(const DinString &ds_1 , const DinString &ds_2 , int indeks , double ocena)
        : Student(ds_1 , ds_2 , indeks) , prosecnaOcena(ocena) {} 

        PhDStudent(const Osoba &other , int indeks , double ocena)
        : Student(other , indeks)  , prosecnaOcena(ocena) {}

        PhDStudent(const Student &other , double ocena) 
        : Student(other) , prosecnaOcena(ocena) {}

        PhDStudent(const PhDStudent &other)
        : Student((Student)other) , prosecnaOcena(other.prosecnaOcena) {}

        void predstaviSe() const
        {
            Student::predstaviSe();
            std::cout << "Prosecna ocena : " << prosecnaOcena << std::endl;
        }

};

#endif //PHD_STUDENT_HPP_INCLUDED