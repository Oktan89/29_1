#include <iostream>
#include <string>
#include "animal.h"
#include <dog.h>
#include <cat.h>

void meeting(Animal *a, Animal *b)
{
    a->meeting(b);
    std::cout<<std::endl;
}

int main()
{
    Animal *a = new Dog();
    Animal *b = new Cat();
    meeting(b, a);

    delete b;
    delete a;
    return 0;
}