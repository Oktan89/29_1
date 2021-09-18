#pragma once
#include <iostream>
#include "animal.h"
#include "dog.h"

class Cat : public Animal
{
public:
    void voice()
    {
        std::cout << "Meow ";
    }

    virtual void meeting(Animal* animal) override
    {
       animal->meeting(this);  
    }

    virtual void meeting(Cat* cat) override
    {
        std::cout<<"Purr Purr";   
    }

    virtual void meeting(Dog* dog) override
    {
        std::cout<<"Meow Bark"; 
    }

    virtual ~Cat()
    {
        //std::cout << "Cat exit" << std::endl;
    }
};