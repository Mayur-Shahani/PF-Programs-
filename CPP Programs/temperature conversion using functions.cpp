#include <iostream>
using namespace std;

double celToFr(double cel) {
    return (cel * 9/5) + 32;
}

double frToCel(double fr) {
    return (fr - 32) * 5/9;
}

int main() {
    int choice;
    double temp;
    cout << "Temperature Conversion:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << temp << " Celsius is " << celToFr(temp) << " Fahrenheit.\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << temp << " Fahrenheit is " << frToCel(temp) << " Celsius.\n";
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}

