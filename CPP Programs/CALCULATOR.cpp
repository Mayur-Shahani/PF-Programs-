#include <iostream>
#include <cmath>
using namespace std;

void addition() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1 ;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

void subtraction() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1 ;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

void multiplication() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1 ;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

void division() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1 ;
    cout << "Enter Second Number: ";
    cin >> num2;
    if (num2 != 0) {
        cout << "Result: " << num1 / num2 << endl;
    } else {
        cout << "You Cant Divide By Zero \n";
    }
}

void power() {
    double base, exponent;
    cout << "Enter base Number: ";
    cin >> base ;
    cout << "Enter Exponent Number: ";
    cin >> exponent;
    cout << "Result: " << pow(base, exponent) << endl;
}

void menu() {
    int choice;
    do {
        cout << "\n----- Calculator -----\n";
        cout << "1. Addition \n";
        cout << "2. Subtraction \n";
        cout << "3. Multiplication \n";
        cout << "4. Division \n";
        cout << "5. Power \n";
        cout << "6. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                power();
                break;
            case 6:
                cout << "Program Ended\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);
}

int main() {
    menu();
    return 0;
}

