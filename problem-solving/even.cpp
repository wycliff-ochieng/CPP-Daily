#include <iostream>

using namespace std;

int evenNumbers[10] = {20,2,10,12,6,8,1,16,18,4} ;

int current;
int nextValue;
int sum = 0 ;

int main() {

    for (int i = 0 ; i < sizeof(evenNumbers); ++i){
        if (evenNumbers[i] % 2 == 0){
            sum += evenNumbers[i];
            cout << sum << endl;
        }
    }

    cout << "Enter a list of even numbers. Place an odd number at the end \n";
    cin >> nextValue;
    while (nextValue % 2 == 0)
    {
        sum = sum + nextValue;
        cin >> nextValue;
        cout << sum << endl;
    }

    return (0);


}