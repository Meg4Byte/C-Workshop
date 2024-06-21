#include <iostream>

#include "bend.hpp"

int Bubanj::brojUdaraca = 0;

int main()
{

    Bend bend;

    Bend b1 , b2("Levo Pa Desno", "Srbija", true, "Italija", false, "Srbija");

    b1.sviraj();
    b1.predstaviSe();

    std::cout << std::endl;

    b2.sviraj();
    b2.predstaviSe();

    std::cout << std::endl;

    return 0;
}