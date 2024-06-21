#include <iostream>
#include "animal.h"
#include "cat.h"

int main()
{
    
    Animal animal("" , "Male" , "Zuca" ,  10);
    animal.setSpecies("Elephant");
    /*
    std::cout<< "" << animal.getSpecies()<< std::endl;
    std::cout<< "" << animal.name << std::endl;
    std::cout<< "" << animal.sex << std::endl;
    std::cout<< "" << animal.age << std::endl;
    */

    Cat cat( animal , "Tobi" , "TobiCat" , "Orange" , false , false , true);
    cat.setName("Tobi");
    cat.setBreed("TobiCat");
    Cat tac (animal);

    Cat z (animal , "oi");

    //cat.display();
    //tac.display();

    cat.meow();
    cat.display();

    tac.meow();

    //z.display();
    std::cout<< z.isAlive<< std::endl;
    std::cout<< z.getBreed()<< std::endl;
    //std::cout<< z.name<< std::endl;




    return 0;
}