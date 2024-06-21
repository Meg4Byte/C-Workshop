#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

class Animal
{

    private:
        std::string _species;

    public:

        std::string name;
        std::string sex;
        int age;

    Animal(const std::string& value1, const std::string& value2 , const std::string& value3 , int value4) : 
    _species(value1), name(value2) , sex(value3) , age(value4)
    {}


    void setSpecies(std::string species)
    {
        _species = species;
    }

    std::string getSpecies() const
    {
        return _species;
    }

};

#endif // ANIMAL_H