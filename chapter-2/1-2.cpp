//displays the course name as part of the welcome message

#include <iostream>

using namespace std;

class GradeBook{

    public:

    void displayMessage(string courseName) const
    {
        cout << "Welcome to the club, we are " << courseName <<" greatest" << endl;
    }
};

int main() {

    string nameOfCourse;

    GradeBook myGradeBook;

    cout<< "Please enter a course:" << endl;

    getline(cin, nameOfCourse);

    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);

    return(0);

}