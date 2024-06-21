#include <iostream>

Skoljka::Skoljka()
{
    boja_skoljke = PLAVA;  
}

Skoljka::Skoljka(BojaSkoljke boja)
{
    boja_skoljke = boja;
}

Skoljka::Skoljka(const Skoljka &other)
{
    boja_skoljke = other.boja_skoljke;
}

void Skoljka::setBoja(BojaSkoljke boja)
{
    boja_skoljke = boja;
}

BojaSkoljke Skoljka::getBoja() const
{
    return boja_skoljke;
}


