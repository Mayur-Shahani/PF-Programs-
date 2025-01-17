#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    
    cout << "Enter first integer numbers: ";
    cin >> num1 ;
    
    cout << "Enter second integer numbers: ";
    cin >> num2 ;
    
    cout << "Enter third integer numbers: ";
    cin >> num3 ;

    
    if (num1 == num2) {
        if (num2 == num3) {
            cout << "All values are equal" << endl;
        } else {
            cout << "They all are not equal" << endl;
        }
    } else {
        cout << "They all are not equal" << endl;
    }

    return 0;
}
