#ifndef EVIDENCIJA_HPP
#define EVIDENCIJA_HPP

#include "dinstring.hpp"
#include "lek.hpp"
#include "list.hpp"


class Evidencija
{
    protected:
        DinString nazivApoteke;
        DinString datum;
        List<Lek> lekovi;

    public: 
        Evidencija() : nazivApoteke("") , datum("") {}

        bool dodaj_lek(long var_1 , const char var_2[] , int var_3 , int var_4)
        {
            Lek lek(var_1 , var_2 , var_3 , var_4);
            return lekovi.add(lekovi.size()+1, lek);
        }

        bool dodaj_lek(const Lek &other)
        {
            return lekovi.add(1, other);
        }

        bool brisi_lek(int index )
        {
            return lekovi.remove(index);
        }


        


};

#endif // EVIDENCIJA_HPP