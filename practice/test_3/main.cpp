
#include <iostream>
#include "head1.h"


int meni()
{
    int option;

    std::cout << "RERNA" <<std::endl;
    std::cout << "1 - UKLJUCI" << std::endl;
    std::cout << "2 - ISKLJUCI" <<std::endl;
    std::cout << "3 - POKVARI" <<std::endl;
    std::cout << "4 - POPRAVI" <<std::endl;
    std::cout << "5- POJACAJ" <<std::endl;
    std::cout << "6 - SMANJI" <<std::endl;
    std::cout << "7 - EXIT" <<std::endl;
    std::cout << "" << std::endl;

    std::cin >> option:

}

void ispisiRernu(const Rerna& rerna)
{

        //TO DO 
}



int main()
{

    Rerna rerna;
    int opt;

    do 
    {
        ispisiRernu(rerna);

        std::cout<<""<<std::endl;
        opt = meni();
        std::cout<<""<<std::endl;

        if (opt == 1)
        {
            std::cout << rerna.getCurState() << std::endl;
            
        }

        elif (opt == 2)
        {
            std::cout << rerna.getCurState() << std::endl;

        }


    } while (opt != 7);


    return 0;
}



