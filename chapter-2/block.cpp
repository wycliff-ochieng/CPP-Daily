#include <iostream>


int main(){
    {
        std::cout<<"Enter a value: ";
        int value{};
        std::cin >> value;

        if (value>=0)
        {
            std::cout<< value <<" Number greater than zero" << std::endl;
            std::cout<<"Please enter a negative value" <<std::endl;
        }
        else
        {
            std::cout << value << " is negative !! Hurray" <<std::endl;
        };
    }
}