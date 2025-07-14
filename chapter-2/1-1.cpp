//Defining a GradeBook class with a member function display message
//create a GradeBook object and call its diplaymessage function

#include <iostream>

using namespace std;

class GradeBook{

    public:

    void displayMessage() const
    {
        cout << "Welcome to the GradeBook " << endl;
    }
};

int main(){

    GradeBook myGradeBook;
    
    myGradeBook.displayMessage();

    return(0);
}