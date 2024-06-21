#ifndef UCIONICA_HPP
#define UCIONICA_HPP

#include "dinstring.hpp"
#include "osoba.hpp"
#include "student.hpp"
#include "profesor.hpp"
#include "list.hpp"

class Ucionica
{
    private:
        int kapacitet;
        DinString naziv;
        List<Osoba> osobe;

    public: 

        Ucionica(int kap , const DinString &naziv) :
        kapacitet(kap) , naziv(naziv) {}

        bool dodaj(const Osoba& other)
        {
            if (osobe.size() < kapacitet)
            {
                return osobe.add(osobe.size()+1 , other);
            }

            return false;
        }

        void ispisi() const
        {
            if (osobe.size() == 0 )
            {
                std::cout << "Ucionica je prazna" << std::endl;
            }

            else 
            {
                std::cout << "Prisutni u ucionici " << std::endl;

                Osoba osb;

                for (int i = 1 ; i <= osobe.size() ; ++i)
                {
                    osobe.read(i, osb);
                    osb.display();
                }
            }
        }


};

#endif // UCIONICA_HPP