#pragma once

class Cat;
class Dog;

class IAnimal
{
public:
    virtual void meeting(IAnimal*) = 0;
    virtual void meeting(Cat*) = 0;
    virtual void meeting(Dog*) = 0;
    virtual ~IAnimal(){}
};