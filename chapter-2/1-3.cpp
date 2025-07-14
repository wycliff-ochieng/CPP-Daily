//Data Memebers ,set member functions and get member functions

//local variables - variables declared in a functions body
//must be declared before it can be used in a function and cannot be accessed outside the functions ,when a function terminates the values of the function get lost
//globala variable - those declared outside a functions body
// A class normally consists of one or more member functions that manipulate the attributes that belong to a particular object of the class
//Attributes are represented as variables in a class definition which are called DATA MEMBERS

#include <iostream>

using namespace std;

class GradeBook{
    public:

    void setCourseName(string name)
    {
        courseName = name;
    }

    string  getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        cout << "Welcome to the greatest " << getCourseName << "!"<<endl;
    }

    private:
        string courseName;
    
};

int main() {

    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is" << myGradeBook.getCourseName();

    cout << "Please enter a course: " << endl;

    getline(cin,nameOfCourse);

    myGradeBook.setCourseName(nameOfCourse);

    cout<< endl;

    myGradeBook.displayMessage();

    return(0);
}
