#include <iostream>
#include "gradeBook.h"



int main() {
    //std::string nameOfCourse;
    GradeBook newGradeBook1("How to program C++");
    GradeBook newGradeBook2("I wanna love low level");

    std::cout << "I'm gonna read " << newGradeBook1.getCourseName() << std::endl;
    std::cout << "I will also read " << newGradeBook2.getCourseName() << std::endl;
}