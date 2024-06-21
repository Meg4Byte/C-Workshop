#include <iostream>

#include "menjac.hpp"
#include "skoljka.hpp"
#include "automobil.hpp"

int main()
{
    Menjac m1;
    Menjac m2(5 , MANUELNI);
    Menjac m3 = m2;
    Menjac m4 = m1;
    Menjac m5(6 , AUTOMATSKI);

    Skoljka s1;
    Skoljka s2(PLAVA);
    Skoljka s3(s2);


    return 0;
}