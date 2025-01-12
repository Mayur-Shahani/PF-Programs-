#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int choice, number;

    // Display menu 
    cout << "Choose a number  from the menu:" << endl;
    cout << "1. Calculate the square root of the number" << endl;
    cout << "2. Calculate the cube of the number" << endl;
    cout << "3. Print the number 50 times" << endl;
    cout << "4. Print the table of the number" << endl;
    cin >> choice;

    
    if (choice >= 1 && choice <= 4) {
        cout << "Enter the number: ";
        cin >> number;
    }

   
    switch (choice) {
        case 1:
            cout << "Square root of " << number << " is " << sqrt(number) << endl;
            break;
        case 2:
            cout << "Cube of " << number << " is " << number * number * number << endl;
            break;
        case 3:
            for (int i = 0; i < 50; ++i) {
                cout << number << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << "Table of " << number << ":" << endl;
            for (int i = 1; i <= 10; ++i) {
                cout << number << " x " << i << " = " << number * i << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
