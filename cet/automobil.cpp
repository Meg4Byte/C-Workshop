#include <iostream>
#include "automobil.hpp"
#include "menjac.hpp"
#include "skoljka.hpp"


Automobil::Automobil()
{
    menjac();
    skoljka();
}

Automobil::Automobil(TipMenjaca tip , BojaSkoljke boja , int br )
{
    menjac(tip , br);
    skoljka(boja);
}

bool Automobil::setBrzina(int br)
{
    return menjac.setBrzina(br);
}

void Automobil::setBoja(BojaSkoljke boja)
{
    skoljka.setBoja(boja);
}

void Automobil::setTipMenjaca(TipMenjaca tip)
{
    menjac.setTipMenjaca(tip);
}

int Automobil::getBrzina() const
{
    return menjac.getBrzina();
}

TipMenjaca Automobil::getTipMenjaca() const
{
    return menjac.getTipMenjaca();
}

BojaSkoljke Automobil::getBoja() const
{
    return skoljka.getBoja();
}
