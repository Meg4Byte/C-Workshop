#include <iostream>
#include "header_1.h"


void printInfo(const Machine& var)
{

    std::cout << "CURRENT STATE - ";
    if (var.getCurrentState() == A)
    {
        std::cout << "A";
    }

    else if (var.getCurrentState() == B)
    {
        std::cout << "B";
    }

    else if (var.getCurrentState() == C)
    {
        std::cout << "C";
    }

    else if (var.getCurrentState() == D)
    {
        std::cout << "D";
    }

    else
    {
        std:cout << "????";
    }

    std::cout << "VALUE = " , var.getValue() << std::endl;

}

int meni()
{
    int ret;

    std::cout << "Unesite broj za zeljenu operaciju:" << std::endl;
    std::cout << "1 - X" << std::endl;
    std::cout << "2 - Y" << std::endl;
    std::cout << "3 - Z" << std::endl;
    std::cout << "4 - W" << std::endl;
    std::cout << "5 - Plus" << std::endl;
    std::cout << "6 - Minus" << std::endl;
    std::cout << "7 - Kraj rada programa" << std::endl;
    std::cout << "Operacija-> ";

    std::cin >> ret;

    return ret;
}

int main()
{

    Machine m;
    int option;
    do
    {
        printInfo(m);

        std::cout << std::endl;
        option = meni();
        if (option == 1)
        {
            if (m.metodaX())
            {
                std::cout << "SUCCESS" << std::endl;
            }

            else
            {
                std::cout << "FAILED" << std::endl;
            }

        }

        else if (option == 2)
        {

            if (m.metodaY())
            {
                std::cout << "SUCCESS" << std::endl;
            }
            else
            {
                std::cout << "FAILED" << std::endl;
            }
        }

        else if (option == 3)
        {

            if (m.metodaW())
            {
                std::cout << "SUCCESS" << std::endl;
            }
            else
            {
                std::cout << "FAILED" << std::endl;
            }
        }

        else if (option == 4)
        {

            if (m.metodaZ())
            {
                std::cout << "SUCCESS" << std::endl;
            }
            else
            {
                std::cout << "FAILED" << std::endl;
            }
        }

        else if (option == 5)
        {
            if (m.plus())
            {
                std::cout << "INCREMENT" << std::endl;
            }
            else
            {
                std::cout << "FAILED" << std::endl;
            }
        }

        else if (option == 6)
        {
            if (m.minus())
            {
                std::cout << "DECREMENT" << std::endl;
            }
            else
            {
                std::cout << "FAILED" << std::endl;
            }
        }

        else if (option == 7)
        {
            std::cout << "END OF PROGRAMM" << std::endl;
        }



    } while (option != 7);

    return 0;

}

