#pragma once

class Cat;
class Dog;

class Animal
{
public:
    virtual void meeting(Animal*) = 0;
    virtual void meeting(Cat*) = 0;
    virtual void meeting(Dog*) = 0;
    virtual ~Animal(){}
};