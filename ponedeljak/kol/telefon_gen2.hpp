

#include "telefon.hpp"
#include "kamera.hpp"
#include "dinstring.hpp"

class Telefon_gen2 : public Telefon
{
    private:
        Kamera k;

    public:
        Telefon_gen2() :
        Telefon() , k() {}

        Telefon_gen2(DinString br , int mpx , int fs) :
        Telefon(br) , k(mpx , fs) {}



};