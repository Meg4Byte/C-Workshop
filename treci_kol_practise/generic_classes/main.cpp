#include <iostream>

#include "trezor.hpp"
#include "dijamant.hpp"

using namespace std;

int main()
{
    Dijamant d1 , d2(100 , 1) , d3(d2);

    std::cout << d1 << std::endl;
 


    return 0;
}