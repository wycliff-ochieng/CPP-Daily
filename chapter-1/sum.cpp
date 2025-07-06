#include <iostream>

//variable correspond to locations in computers memory


using namespace std;

int number1 = 0; //first value initialized to 0
int number2 = 0; //second value initialized to 0
int sum = 0; // initialization of sum

int main(){

    cout << "Enter first number:";

    cin >> number1;

    cout << "Enter second number:";

    cin >> number2;

    sum = number1+number2;

    cout << "Sum is :" << sum << endl;

    return (0);
}