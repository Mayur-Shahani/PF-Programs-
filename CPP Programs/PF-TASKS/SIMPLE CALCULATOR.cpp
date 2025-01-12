#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "Calculator Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "Result: " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "Result: " << (num1 * num2) << endl;
                break;
            case 4:
                    cout << "Result: " << (num1 / num2) << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice. Try Again";
        }
    } while (choice != 5);

    return 0;
}


