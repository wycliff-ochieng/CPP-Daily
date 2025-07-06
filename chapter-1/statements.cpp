#include <iostream>

using namespace std;

int number1 = 0;
int number2 = 0;

int main(){
    cout << "Enter two numbers kindly:";

    cin >> number1  >> number2;

    if (number1 == number2)
        cout << "They are equal" << endl;
    if (number1 <= number2)
        cout << number1 << " is less than " << number2 << endl;
    if (number1 >= number2)
        cout << number1 << " is greater than " << number2 << endl;
    if (number1 != number2)
        cout << "The number are not equal at all";

    return(0);

}