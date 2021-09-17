#include <iostream>
#include <string>

class Animal
{
public:
    virtual void voice() = 0;
    virtual ~Animal()
    {
        std::cout << "Animal exit" << std::endl;
    }
};

class Cat : virtual public Animal
{
public:
    virtual void voice()
    {
        std::cout << "Meow ";
    }
    virtual ~Cat()
    {
        std::cout << "Cat exit" << std::endl;
    }
};

class Dog : public Animal
{
public:
    virtual void voice()
    {
        std::cout << "Bark ";
    }

    virtual ~Dog()
    {
        std::cout << "Dog exit" << std::endl;
    }
};

void meeting(Animal* a, Animal* b)
{
    a->voice();
    b->voice();
    std::cout << std::endl;
}

int main()
{
    Animal* a = new Dog();
    Animal* b = new Cat();
    meeting(a, b);

    delete a;
    delete b;
    return 0;
}