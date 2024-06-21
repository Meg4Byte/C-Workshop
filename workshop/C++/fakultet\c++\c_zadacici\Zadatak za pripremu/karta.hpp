#ifndef KARTA_HPP_INCLUDED
#define KARTA_HPP_INCLUDED

#include <iostream>
#include "dinstring.hpp"

using namespace std;

class Karta {
protected:
    int id;
    DinString mestoPolaska, mestoDolaska;
    float cena;
    static int ukupnoKarata;
public:
    Karta() : id(100), mestoPolaska("Novi Sad"), mestoDolaska("Beograd"), cena(490) { ukupnoKarata++; }

    Karta(int i, const DinString& mp, const DinString& md, float c) : id(i), mestoPolaska(mp), mestoDolaska(md), cena(c) { ukupnoKarata++; }

    //Karta(const Karta& k) : mestoPolaska(k.mestoPolaska), mestoDolaska(k.mestoDolaska), cena(k.cena), id(k.id) { ukupnoKarata++; }

    ~Karta() { ukupnoKarata--; }

    // Iako se ne trazi u zadatku, napisali smo getere jer ce nam oni
    // najverovatnije trebati kada budemo koristili listu

    DinString getMestoPolaska() const { return mestoPolaska; }

    DinString getMestoDolaska() const { return mestoDolaska; }

    float getCena() const { return cena; }

    int getId() const { return id; }

    int getUkupnoKarata() const { return ukupnoKarata; }

    virtual bool jeftinaKarta(float cenaKarte) { return true; };

};

int Karta::ukupnoKarata = 0;

#endif // KARTA_HPP_INCLUDED
