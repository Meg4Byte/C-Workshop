#ifndef BUBANJ_HPP_INCLUDED
#define BUBANJ_HPP_INCLUDED

#include "Instrument.hpp"

class Bubanj : public Instument {
    private:
        static int brojUdaraca;

    public:
        Bubanj() : Instument() {}
        Bubanj(const DinString& zp) : Instument(zp) {}

        void sviraj() {
            brojUdaraca++;

            if(brojUdaraca % 3 == 0)
                cout << "Tss" << endl;
            else
                cout << "Bum" << endl;
        }

        void ispisi() const {
            cout << "Bubanj - Zemlja porekla: " << zemljaPorekla << ". Broj udaraca: " << brojUdaraca << endl;
        }
};

#endif // BUBANJ_HPP_INCLUDED

