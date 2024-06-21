#include "putovanje.hpp"

int main()
{
    DinString mp("Beograd"), md("Nis");

    cout << "Testiranje klase Karta" << endl << endl;

    Karta k1;
    cout << "###### Karta k1: ######" << endl;
    cout << "Id karte: " << k1.getId() << endl;
    cout << "Mesto polaska: " << k1.getMestoPolaska() << endl;
    cout << "Mesto dolaska: " << k1.getMestoDolaska() << endl;
    cout << "Cena: " << k1.getCena() << endl;
    cout << "Ukupno karata: " << k1.getUkupnoKarata() << endl;
    cout << endl;

    Karta k2(101, mp, md, 1340.5);

    cout << "###### Karta k2: ######" << endl;
    cout << "Id karte: " << k2.getId() << endl;
    cout << "Mesto polaska: " << k2.getMestoPolaska() << endl;
    cout << "Mesto dolaska: " << k2.getMestoDolaska() << endl;
    cout << "Cena: " << k2.getCena() << endl;
    cout << "Ukupno karata: " << k2.getUkupnoKarata() << endl;
    cout << endl << endl;


    cout << "Testiranje klase AvionskaKarta" << endl << endl;

    AvionskaKarta ak1;
    cout << "###### AvionskaKarta ak1: ######" << endl;
    ak1.ispisi();
    cout << endl;

    float cenaKarte = 328.5;
    if (ak1.jeftinaKarta(cenaKarte))
        cout << "Cena avionske karte je skuplja od " << cenaKarte << endl;
    else
        cout << "Cena avionske karte je jeftinija od " << cenaKarte << endl;

    cenaKarte = 550.5;
    if (ak1.jeftinaKarta(cenaKarte))
        cout << "Cena avionske karte je skuplja od " << cenaKarte << endl;
    else
        cout << "Cena avionske karte je jeftinija od " << cenaKarte << endl;

    cout << endl;

    AvionskaKarta ak2(245, "Beograd", "Nis", 350);

    cout << "###### AvionskaKarta ak2: ######" << endl;
    ak2.ispisi();
    cout << endl;

    cout << endl;
    cout << "Testiranje klase Putovanje" << endl << endl;

    DinString naziv("Euro trip");

    Putovanje p1, p2(naziv, 1200);

    p1.ispisi();
    cout << endl;

    cout << "###### Putovanje p2: ######" << endl;

    if (p2.dodajKartu(ak1))
        cout << "Avionska karta je uspesno dodata u listu karata" << endl;
    else
        cout << "Avionska karta nije uspesno dodata u listu karata" << endl;

    cout << endl;
    p2.ispisi();
    cout << endl;

    if (p2.dodajKartu(ak1)) {
        cout << "Avionska karta je uspesno dodata u listu karata" << endl;
    } else {
        cout << "Avionska karta nije uspesno dodata u listu karata" << endl;
    }

    if (p2.dodajKartu(ak2)) {
        cout << "Avionska karta je uspesno dodata u listu karata" << endl;
    } else {
        cout << "Avionska karta nije uspesno dodata u listu karata" << endl;
    }

    cout << endl;
    p2.ispisi();
    cout << endl;

    int id = 1;
    if (p2.izbaciKartu(id))
        cout << "Avionska karta [id = " << id << "] uspesno je izbacena iz liste karata" << endl;
    else
        cout << "Avionska karta [id = " << id << "] nije uspesno izbacena iz liste karata" << endl;


    id = 100;
    if (p2.izbaciKartu(id))
        cout << "Avionska karta [id = " << id << "] uspesno je izbacena iz liste karata" << endl;
    else
        cout << "Avionska karta [id = " << id << "] nije uspesno izbacena iz liste karata" << endl;

    cout << endl;
    p2.ispisi();
    cout << endl;

    return 0;
}
