#ifndef BEND_HPP_INCLUDED
#define BEND_HPP_INCLUDED

#include "Gitara.hpp"
#include "Bubanj.hpp"

class Bend {
    private:
        DinString naziv;
        Gitara prvaGitara;
        Gitara drugaGitara;
        Bubanj bubanj;

    public:
        Bend() : naziv("Noname"), prvaGitara(), drugaGitara(), bubanj() {}
        Bend(const DinString& n, const DinString& zp1, bool e1, const DinString& zp2, bool e2, const DinString& zp3) :
            naziv(n), prvaGitara(zp1, e1), drugaGitara(zp2, e2), bubanj(zp3) {}

        void sviraj() {
            prvaGitara.sviraj();
            drugaGitara.sviraj();
            bubanj.sviraj();
        }

        void predstaviSe() const {
            cout << "Bend: " << naziv << endl;
            prvaGitara.ispisi();
            drugaGitara.ispisi();
            bubanj.ispisi();
        }
};

#endif // BEND_HPP_INCLUDED

