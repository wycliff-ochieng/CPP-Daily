#include <iostream>

class Shape{
    public:
        virtual void Area() = 0;
        virtual void Perimeter() = 0;

};

class Shape{
    public:
        void Area(int length,int width) 
        {}
    private:
    int length;
    int width;
};