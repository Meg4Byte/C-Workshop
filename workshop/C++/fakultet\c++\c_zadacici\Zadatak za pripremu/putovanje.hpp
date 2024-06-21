#ifndef PUTOVANJE_HPP_INCLUDED
#define PUTOVANJE_HPP_INCLUDED

#include "list.hpp"
#include "avionskakarta.hpp"

class Putovanje {
private:
    DinString naziv;
    int maksimalnaCena;
    List<AvionskaKarta> listaKarata;
public:
    Putovanje() : naziv("Zimovanje"), maksimalnaCena(2000) {}

    Putovanje(const DinString& n, int mc) : naziv(n), maksimalnaCena(mc) {}

    DinString getNaziv() const { return naziv; }

    int getMaksimalnaCena() const { return maksimalnaCena; }

    // ovo je pomocna metoda koja kao povratnu vrednost vraca trenutnu cenu putovanja
    // dakle, vraca zbir cena svih avionskih karata koje se nalaze u listi
    float trenutnaCenaPutovanja() const {
        float suma = 0;
        AvionskaKarta ak;
        for (int i = 1; i <= listaKarata.size(); i++) {
            listaKarata.read(i, ak);
            suma += ak.getCena();
        }
        return suma;
    }

    bool kartaVecPostoji(int id) const {
        bool postoji = false;
        AvionskaKarta ak;
        for (int i = 1; i <= listaKarata.size(); i++) {
            listaKarata.read(i, ak);
            if(ak.getId() == id){
                postoji = true;
            }
        }
        return postoji;
    }

    bool dodajKartu(const AvionskaKarta& ak) {
        // Ako je lista kararata prazna, dodaj avionsku kartu
        if (listaKarata.empty()) {
            // proverimo da li je mozda cena karte veca od maksimalne cene
            if(ak.getCena() <= maksimalnaCena){
                return listaKarata.add(1, ak); // ovde se dodaje na pocetak liste jer je lista prazna
            }
        } else {
            AvionskaKarta poslednjaKarta;
            listaKarata.read(listaKarata.size(), poslednjaKarta);   // ovako smo procitali poslednju kartu
            if(kartaVecPostoji(ak.getId()) == false && trenutnaCenaPutovanja() + ak.getCena() <= maksimalnaCena && poslednjaKarta.getMestoDolaska() == ak.getMestoPolaska()){
                return listaKarata.add(listaKarata.size() + 1, ak);
            }
        }
        return false;
    }

    bool izbaciKartu(int id) {
        AvionskaKarta ak;
        for (int i = 1; i <= listaKarata.size(); i++) {
            listaKarata.read(i, ak);
            if (ak.getId() == id)
                return listaKarata.remove(i);
        }

        return false;
    }

    void ispisi() const {
        cout << "Naziv: " << naziv << endl;
        cout << "Maksimalna cena: " << maksimalnaCena << endl;
        cout << "Broj karata u putovanju: " << listaKarata.size() << endl;
        cout << "Informacije o kartama:" << endl;
        cout << "-----------------------------------" << endl;

        if (listaKarata.size() != 0) {
            AvionskaKarta ak;
            for (int i = 1; i <= listaKarata.size(); i++) {
                listaKarata.read(i, ak);
                ak.ispisi();
            }
        } else {
            cout << "Trenutno nema karata!" << endl;
        }

        cout << "-----------------------------------" << endl;
    }
};

#endif // PUTOVANJE_HPP_INCLUDED
