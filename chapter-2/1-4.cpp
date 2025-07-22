//Initializing a constructor -used to visualize an object of the class when the object is being created
//special method defined with the same name as the class to differentiate it from other functions
//Only difference between a constructor and a normal function is that a constructor returns no value , therefore cannot specifya return type (not even void)
//Function overloading-Technique of creating classes with more than one constructor

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
    //constructor
    explicit GradeBook(string name)
        :   courseName(name)
    {
        //empty body
    }
    void setCourseName(string name) 
    {
        courseName = name;
    }
    string getCourseName() const
    {
        return courseName;
    }
    void displayMessage() const
    {
        cout << "Ive started reading" << getCourseName() << endl;
    }
    private:
    string courseName;
};

int main() {
    string nameOfCourse;
    GradeBook myGradeBook1("Introduction to C++");
    GradeBook myGradeBook2("How to Program C++");

    cout << "Shoutout to " << myGradeBook1.setCourseName() << endl; 
}