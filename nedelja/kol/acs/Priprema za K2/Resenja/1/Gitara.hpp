#ifndef GITARA_HPP_INCLUDED
#define GITARA_HPP_INCLUDED

#include "Instrument.hpp"

class Gitara : public Instument {
    private:
        bool elektricna;

    public:
        Gitara() : Instument(), elektricna(false) {}
        Gitara(const DinString& zp, bool e) : Instument(zp), elektricna(e) {}

        void sviraj() {
            elektricna ? cout << "Zing" << endl : cout << "Ting" << endl;
        }

        void ispisi() const {
            if (elektricna)
                cout << "Elektricna gitara - Zemlja porekla: " << zemljaPorekla << endl;
            else
                cout << "Akusticna gitara - Zemlja porekla: " << zemljaPorekla << endl;
        }
};

#endif // GITARA_HPP_INCLUDED

