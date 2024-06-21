#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include <string>

class Cat : public Animal
{
    private:
        std::string _name;
        std::string _breed;

    public:

        std::string colorOfFur;
        bool isAlive;
        bool hasChildren;
        bool hasFourLegs;

    Cat(
        const Animal& animal,
        
        const std::string& value_1 , 
        const std::string& value_2 , 
        const std::string& value_3 , 
        bool value_4, 
        bool value_5, 
        bool value_6 
    ) : 
        Animal(animal),

        _name(value_1), 
        _breed(value_2), 
        colorOfFur(value_3), 
        isAlive(value_4), 
        hasChildren(value_5), 
        hasFourLegs(value_6)

    {}

    /*
    //implement constructor override 1
    Cat() : 
        _name("") , 
        _breed("") , 
        colorOfFur(""), 
        isAlive(false), 
        hasChildren(false), 
        hasFourLegs(false)

    {}

    //implement constructor override 2
    Cat(const std::string& value_1 , 
        bool value_2 , 
        bool value_3 ,
        bool value_4 = true 
    ) : 
        colorOfFur(value_1), 
        isAlive(value_2), 
        hasChildren(value_3), 
        hasFourLegs(value_4)
    {}
    */

    void display()
    {
        std::string isAlive = this->isAlive? "True" : "False";
        std::string hasChildren = this->hasChildren? "True" : "False";
        std::string hasFourLegs = this->hasFourLegs? "True" : "False";

        std::cout << colorOfFur << std::endl;
        std::cout << isAlive <<  std::endl;
        std::cout << hasChildren <<  std::endl;
        std::cout << hasFourLegs <<  std::endl;

    }


    void meow()
    {
        std::cout << "Meow!" << std::endl;
    }

    void eat()
    {
        std::cout << "Eating!" << std::endl;
    }

    void sleep()
    {
        std::cout << "Sleeping!" << std::endl;
    }

    void play()
    {
        std::cout << "Playing!" << std::endl;
    }

    void setName(const std::string& value_1)
    {
        _name = value_1;
    }

    void setBreed(const std::string& value_2)
    {
        _breed = value_2;
    }

    std::string getName() const
    {
        return _name;
    }

    std::string getBreed() const
    {
        return _breed;
    }


    Cat(const Animal& animal) : Animal(animal)
    {}

    Cat(const Animal& animal , const std::string& val)

    : Animal(animal) , _breed(val)
    {}

};




#endif // CAT_H

