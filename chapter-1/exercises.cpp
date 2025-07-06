#include <iostream>

using namespace std;

double pi = 3.14;
int radius = 0;
double circle_area = 0;

int number1 = 0;
int number2 = 0;
int sum = 0;
int product = 0;
int division = 0;
int substraction = 0;

int comparative1;
int comparative2;

int main(){

    cout << "Enter two numbers: ";

    cin >> number1 >> number2;

    sum = number1+number2;
    product = number1 * number2;
    division = number1 / number2;
    substraction = number1-number2;

    cout << "The sum is is " << sum << endl;
    cout << "The product is " << product << endl;
    cout << "The division is " << division << endl;
    cout << "The substraction is "<< substraction << endl;

    //comparing two numbers from user

    cout << "Please input two numbers: ";

    cin >> comparative1 >> comparative2;

    if (comparative1 > comparative2)
        cout <<comparative1 <<  " is larger" << endl;
    if (comparative1==comparative2)
        cout << "They are equal" << endl;

    //Area of a cicle
    cout << "Enter the radius of the cicle: ";

    cin >> radius ;

    circle_area = pi*radius*radius;

    cout << "The area is : " << circle_area << endl;

    return(0);

}