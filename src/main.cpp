#include <iostream>
#include <string>
#include "animal.h"
#include <dog.h>
#include <cat.h>

void meeting(IAnimal *a, IAnimal *b)
{
    a->meeting(b);
    std::cout<<std::endl;
}

int main()
{
    IAnimal *a = new Dog();
    IAnimal *b = new Cat();
    meeting(b, a);
    
    delete b;
    delete a;
    return 0;
}