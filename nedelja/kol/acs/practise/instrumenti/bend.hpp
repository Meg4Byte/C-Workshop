
#ifndef BEND_HPP_INCLUDED
#define BEND_HPP_INCLUDED
#include "dinstring.hpp"
#include "gitara.hpp"
#include "bubanj.hpp"

class Bend 
{
    private:
        DinString naziv;
        Gitara prvaGitara;
        Gitara drugaGitara;
        Bubanj bubanj;

    public:
        Bend() : naziv("Noname") , prvaGitara() , drugaGitara() , bubanj() {}
        Bend(const DinString &ds , const DinString& prva, bool git1  , const DinString& druga ,  bool git2 , const DinString &b)
        :naziv(ds) , prvaGitara(prva , git1) , drugaGitara(druga , git2) , bubanj(b) {}

        void sviraj() const
        {
            prvaGitara.sviraj();
            drugaGitara.sviraj();
            bubanj.sviraj();
        }
        void predstaviSe() const
        {
            std::cout << "Bend : " << naziv << std::endl;
            prvaGitara.ispisi();
            drugaGitara.ispisi();
            bubanj.ispisi();
        }

        friend std::ostream& operator <<(std::ostream& os, const Bend& bend)
        {
                os << "Ime benda je : " << bend.naziv;
                return os;
        }


};

#endif //BEND_HPP_INCLUDED