#ifndef GITARA_HPP_INCLUDED
#define GITARA_HPP_INCLUDED

#include "instrument.hpp"
#include "dinstring.hpp"

class Gitara : public Instrument
{
    private:
        bool elektricna;

    public:
        Gitara() 
        : Instrument(),  elektricna(true) {}
        Gitara(const DinString &ds , bool el ) 
        : Instrument(ds) , elektricna(el) {}

        void sviraj() const 
        {
            if (elektricna)
            {
                std::cout<<"Zing"<<std::endl;
            }   
            else
            {
                std::cout<<"Ting"<<std::endl;
            }
        }

        void ispisi() const 
        {
            if (elektricna)
            {
                std::cout<<"Elektricna gitara - Zemlja porekla: "<<zemljaPorekla  <<std::endl;
            }
            else
            {
                std::cout<<"Akusticna gitara - Zemlja porekla: " << zemljaPorekla <<std::endl;
            }

        }



};

#endif //GITARA_HPP