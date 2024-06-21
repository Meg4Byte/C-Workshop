#include <iostream>

using namespace std;
#include "Bend.hpp"

int Bubanj::brojUdaraca = 0;

int main() {
    Bend b1, b2("Levo Pa Desno", "Srbija", true, "Italija", false, "Srbija");

    b1.sviraj();
    b1.predstaviSe();

    cout << endl;

    b2.sviraj();
    b2.predstaviSe();

    return 0;
}

