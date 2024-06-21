#ifndef AVIOKARTA_HPP_INCLUDED
#define AVIOKARTA_HPP_INCLUDED

#include "karta.hpp"

class AvionskaKarta : public Karta {
public:
    // Ne trazi se u zadatku da napisemo konstruktor bez parametara,
    // ali nam treba jer ga koristimo na par mensta u zadatku
    AvionskaKarta() : Karta () {}

    AvionskaKarta(int i, const DinString& mp, const DinString& md, float c) : Karta(i, mp, md, c) {}

    bool jeftinaKarta(float cenaKarte) {
        if (cena < cenaKarte) {
            return true;
        } else {
            return false;
        }
    }

    void ispisi() {
        cout << "Avionska karta" << endl;
        cout << "Id karte: " << id << endl;
        cout << "Mesto polaska: " << mestoPolaska << endl;
        cout << "Mesto dolaska: " << mestoDolaska << endl;
        cout << "Cena: " << cena << endl;
        cout << "Ukupno kreirano karata: " << ukupnoKarata << endl << endl;
    }
};

#endif // AVIOKARTA_HPP_INCLUDED
