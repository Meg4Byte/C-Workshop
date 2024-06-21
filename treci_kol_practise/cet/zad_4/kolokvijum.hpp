#ifndef KOLOKVIJUM_HPP
#define KOLOKVIJUM_HPP

#include "test.hpp"


class Kolokvijum : public Test
{
    public:
        Kolokvijum() : Test("" , 0) {} 

        Kolokvijum(const char* ime_testa , int poeni ) : 

        Test(ime_testa , poeni) {}

        int get_poeni() const override
        {
            return rand(osvojeni_poeni)%25 + 1 ;
        } 

        bool polozio() override
        {
            return (get_poeni() > 12) ? 1 : 0;
        }

};

#endif // KOLOKVIJUM_HPP