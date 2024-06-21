#ifndef TEST_HPP
#define TEST_HPP

#include "dinstring.hpp"
#include <iostream>

class Test 
{
    protected:
        DinString naziv;
        int osvojeni_poeni;

    public:

        virtual int get_poeni() const = 0;
        virtual bool polozio() = 0;

        Test() : naziv("") , osvojeni_poeni(0) {}

        Test(const DinString &other , int poeni) : 
        naziv(other) , osvojeni_poeni(poeni) {}

        void ispisi() 
        {
            std::cout << "Naziv testa ->" << naziv << std::endl;
            std::cout << "Osvojeni poeni ->" << osvojeni_poeni << std::endl;
        }

};



#endif // TEST_HPP