#include "kamera.hpp"
#include <iostream>
int Kamera::photo_cnt = 12; 

int main()
{
    Kamera k1 , k2(10 , 100) , k3;

    k1.slikaj();
    k2.slikaj();
    k3.slikaj();

    std::cout << k2.get_photo_cnt() << std::endl;
    std::cout << k2 ;





    return 0;
}