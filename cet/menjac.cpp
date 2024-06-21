#include <iostream>
#include "menjac.hpp"


Menjac::Menjac()
{
    br_brzina = 1;
    tip_menjaca = AUTOMATIK; 
}

Menjac::Menjac(int brzina, TipMenjaca tip)
{
    br_brzina = brzina;
    tip_menjaca = tip;
}

Menjac::Menjac(const Menjac &other)
{
    br_brzina = other.br_brzina;
    tip_menjaca = other.tip_menjaca;
}

bool Menjac::setBrzina(int br)
{
    if (br >= 1 && br <= 6)
    {
        br_brzina = br;
        return true;
    }

    else
    {
        return false;
    }
}

void Menjac::setTip(TipMenjaca tip)
{
    tip_menjaca = tip;
}

int Menjac::getBrzina() const
{
    return br_brzina;
}

TipMenjaca Menjac::getTip() const
{
    return tip_menjaca;
}