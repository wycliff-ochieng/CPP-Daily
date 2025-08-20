#include <iostream>

namespace Foo
{
    int doSum(int x, int y)
    {
        return x + y;
    };
}

namespace Bar
{
    int doSum(int x, int y)
    {
        return x * y;
    };
}

//scoppe resolution with no operator

void print()
{
    std::cout<< "Hello " <<std::endl;
};

namespace Greeting
{
    void print()
    {
        std::cout << " Therre" << std::endl;
    };
}

int main() {
    std::cout << Foo::doSum(4,3) <<std::endl;
    std::cout << Bar::doSum(9,10) << std::endl;
    Greeting::print();
    ::print();

    return (0);
}