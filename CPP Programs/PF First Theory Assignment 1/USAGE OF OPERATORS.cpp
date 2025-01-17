#include <iostream>
using namespace std;

int main() {
    int a, b;

    
    cout << "Enter first integers : ";
    cin >> a ;
    
    cout << "Enter second integer :";
    cin >> b;

   
    if (a > 0 && b > 0) {
        cout << "Both numbers are positive." << endl;
    } else {
        cout << "At least one of the numbers is not positive." << endl;
    }

    
    if (a == 0 || b == 0) {
        cout << "At least one of the numbers is zero." << endl;
    } else {
        cout << "Neither of the numbers is zero." << endl;
    }

  
    if (!(a == b)) {
        cout << "The numbers are not equal." << endl;
    } else {
        cout << "The numbers are equal." << endl;
    }

  
    string result = (a > b) ? "a is greater than b" : "a is less than b";
    cout << result << endl;

    return 0;
}
