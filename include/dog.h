#pragma once
#include <iostream>
#include "animal.h"
#include "cat.h"

class Dog : public Animal
{
public:
    void voice()
    {
        std::cout << "Bark ";
    }

    virtual void meeting(Animal *animal) override
    {
        animal->meeting(this);
    }

    virtual void meeting(Cat *cat) override
    {
        std::cout << "Bark Meow";
    }

    virtual void meeting(Dog *dog) override
    {
        std::cout << "Woof-Woof";
    }

    virtual ~Dog()
    {
    }
};
