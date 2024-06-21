#ifndef LEK_HPP
#define LEK_HPP

#include "artikal.hpp"
#include "dinstring.hpp"

class Lek : public Artikal
{
    protected:
        long jkl;
        DinString naziv;
        double jedinicnaCena;
        int kolicina;

    public :

        Lek() : jkl(0) , naziv("") , jedinicnaCena(0) , kolicina(0) {}

        Lek(long var_1 , const char var_2[] , double var_3 , int var_4) : 
        jkl(var_1) , naziv(var_2) , jedinicnaCena(var_3) , kolicina(var_4) {}

        Lek(long var_1 , const DinString &other , double var_3 , int var_4) 
        : jkl(var_1) , naziv(other) , jedinicnaCena(var_3) , kolicina(var_4) {}

        Lek(const Lek &other) : 

        jkl(other.jkl) , naziv(other.naziv) , jedinicnaCena(other.jedinicnaCena) , kolicina(other.kolicina)
        
        {}

        double get_vrednost() const override 
        {
            return kolicina*jedinicnaCena;
        }  

        friend std::ostream& operator << (std::ostream& out , const Lek &other) 
        {
            out << "Lek : " << other.naziv << std::endl;
            out << "Cena : " << other.jedinicnaCena << std::endl;
            out << "Kolicina : " << other.kolicina << std::endl;
           
            return out;
        }


};


#endif //LEK_HPP