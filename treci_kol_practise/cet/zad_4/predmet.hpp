#ifndef PREDMET_HPP
#define PREDMET_HPP

#include "list.hpp"
#include "kolokvijum.hpp"

class Predmet
{
    private:
        DinString naziv;
        List<Test*> testovi;

    public : 

        Predmet() : naziv("") {}

        Predmet(const DinString &other ) : naziv(other) {}

        Predmet(const Predmet &predmet) : 
        naziv(predmet.naziv) , testovi(predmet.testovi) {}

        void dodaj_test(Test &t )
        {
            testovi.add(testovi.size()+1 , &t);
        }

        DinString get_naziv() const
        {
            return naziv;
        }

        bool polozio() 
        {
            Test *t;
            for (int i = 1 ; i < testovi.size()+1 ; ++i)
            {
                testovi.read(i , t);
                if (! t-> polozio())
                {
                    return false;
                }
            }

            return (get_ukupni_poeni() > 55)
        }

        int get_ukupni_poeni() const 
        {
            Test *t ;
            int total = 0; 
            for (int i = 1 ; i < testovi.size()+1 ; ++i)
            {
                testovi.read(i , t);
                total += t -> get_poeni();
            }

            return total;
        }

        void ispis() const 
        {
            std::cout << "PREDMET" << naziv << std::endl;

            if (testovi.size() == 0)
            {
                std::cout << "no tests found !" << std::endl;
            } 

            else
            {
                Test* t;
                std::cout << "Testovi : " << std::endl;
                for (int pos = 1 ; pos < testovi.size()+1 ; ++pos)
                {
                    testovi.read(pos , t);
                    t -> ispisi();
                }


            }



        }

};


#endif // PREDMET_HPP