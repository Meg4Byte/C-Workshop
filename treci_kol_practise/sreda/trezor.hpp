#ifndef DIJAMANT_HPP
#define DIJAMANT_HPP

#include <iostream>

template<class SADRZAJ , int KAPACITET >
class Trezor 
{
    private :
        SADRZAJ sefovi [KAPACITET];
        bool aux_sefovi [KAPACITET];


    public : 

        Trezor() 
        {
            for (int index = 0 ; index < KAPACITET ; ++index )
            {
                aux_sefovi[index] = false;
            }
        }

        int get_br_punih_sefova() 
        {
            int num = 0;
            for (int index = 0 ; index < KAPACITET ; ++index )
            {
                if (aux_sefovi[index])
                {
                    num++;
                }
            }

            return num;
        }

        int ubaci_sadrzaj(const SADRZAJ &predmet)
        {
            for (int index = 0 ; index < KAPACITET ; ++index)
            {
                if (!aux_sefovi[index])
                {
                    aux_sefovi[index] = true;
                    sefovi[index] = predmet;
                    return index;
                }
            }
            //no empty boxes
            return -1;
        }

        bool izbaci_sadrzaj(int sef)
        {
            //check for range
            if (sef < 0 || sef > KAPACITET)
            {
                return false;
            }

            for (int index = 0 ; index < KAPACITET ; ++index)
            {
                if (aux_sefovi[sef])
                {
                    aux_sefovi[sef] = false;
                    return true;
                }
            }

            return false;
        }



};

#endif //DIJAMANT_HPP
