#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum BojaSkoljke {PLAVA , CRVENA , ZELENA};

class Skoljka
{
    private:
        BojaSkoljke boja_skoljke;

    public:
        Skoljka();      //bez parametara
        Skoljka(BojaSkoljke boja);  //sa parametrima
        Skoljka(const Skoljka &other);   //kopija

        void setBoja(BojaSkoljke boja);
        BojaSkoljke getBoja() const;

};

#endif 