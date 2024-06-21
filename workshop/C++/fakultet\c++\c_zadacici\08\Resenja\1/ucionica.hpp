#ifndef UCIONICA_H_INCLUDED
#define UCIONICA_H_INCLUDED

#include "student.hpp"
#include "profesor.hpp"
#include "list.hpp"

class Ucionica{
private:
    List<Osoba> osobe;
    DinString naziv;
    int kapacitet;

public:
    Ucionica(const DinString& n, int k) : naziv(n), kapacitet(k) {}

    bool dodaj(const Osoba& os){
        if(osobe.size() < kapacitet){
            return osobe.add(osobe.size() + 1, os);
        }

        return false;
    }

    void ispis() const {
        if(osobe.size() == 0) {
            cout << endl << "Ucionica je prazna." << endl;
        } else {
            Osoba o;
            cout << endl << "U ucionici su:" << endl;

            for (int i = 1; i <= osobe.size(); i++){
                osobe.read(i, o);
                o.predstaviSe();
            }
        }
    }

    /**
        Metoda "ukloniPoImenu" na osnovu prosledjenih parametara ime i prezime uklanja osobu iz ucionice.
        Ukoliko je osoba pronadjena i uspesno ukljonjena, kao povratnu vrednost vraca "true", u suprotnom vraca "false".
        Napomena: Ukoliko u listi postoji vise osoba sa zadatim imenom i prezimenom, bice ukljonjena samo prva pronadjena osoba iz liste.
    **/
    bool ukloniPoImenu(const DinString& ime, const DinString& prezime) {
        bool ret = false;       /// na pocetku pretpostavimo da osoba nece biti pronadjena
        Osoba o;                /// instanciramo pomocnu promenljivu Osoba o
        for (int i = 1; i <= osobe.size(); i++) {       /// iteritamo kroz listu osoba
            osobe.read(i, o);                           /// i ucitamo osobu na indeksu "i" iz nasle liste u pomocnu promenljivu Osoba o
            if (o.getIme() == ime && o.getPrezime() == prezime) {   /// ako su ime i prezime ucitane osobe bas ime i prezime koje smo prosledili metodi
                ret = osobe.remove(i);          /// pozivom metode "remove" sa zadatim indeksom, uklanjamo osobu iz liste i vracamo informaciju o tome da li je operacija uspesna ili ne
                break;
            }
        }

        return ret;
    }

};

#endif // UCIONICA_H_INCLUDED
