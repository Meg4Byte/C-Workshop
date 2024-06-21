#ifndef DIJAMANT_HPP
#define DIJAMANT_HPP

#include <iostream>

class Dijamant
{
    private:
        double vrednost;
        double karat;

    public:
        Dijamant() : vrednost(1) , karat(1) {}
        Dijamant(double var1 , double var2) 
        : vrednost(var1) , karat(var2) {}
        Dijamant(const Dijamant &other) :
        vrednost(other.vrednost) , karat(other.karat) {}

        friend std::ostream& operator << (std::ostream& os , const Dijamant &other)
        {
            os << "Dijamant : vrednost -> " << other.vrednost << " broj karata ->" << other.karat << std::endl; 
            return os;
        }

        double get_vrednost() const
        {
            return vrednost;
        }

        double get_karat() const
        {
            return karat;
        }

        void set_vrednost(double val)
        {
            vrednost = val;
        }

        void set_karat(double val)
        {
            karat = val;
        }

};

#endif //DIJAMANT_HPP
