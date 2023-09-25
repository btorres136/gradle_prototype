#include "test.h"
#include <hello.h>
#include <iostream>

int main()
{
    Test *test = new Test();
    test->setNumber(5);
    std::cout << test->number() << std::endl; 

    Hello *hello = new Hello();
    std::cout << hello->sayHello() << std::endl;


    return 0;
}