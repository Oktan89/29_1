#pragma once
#include <iostream>
#include "animal.h"
#include "dog.h"

class Cat : public IAnimal
{
public:
    void voice()
    {
        std::cout << "Meow ";
    }

    virtual void meeting(IAnimal *animal) override
    {
        animal->meeting(this);
    }

    virtual void meeting(Cat *cat) override
    {
        std::cout << "Purr Purr";
    }

    virtual void meeting(Dog *dog) override
    {
        std::cout << "Meow Bark";
    }

    virtual ~Cat()
    {
    }
};