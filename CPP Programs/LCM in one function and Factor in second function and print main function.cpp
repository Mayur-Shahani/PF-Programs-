#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int num = (a > b) ? a : b;

    for (int i = num; ; ++i) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}

void factors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int numb1, numb2, choice;
    cout << "Enter the first number: ";
    cin >> numb1;
    cout << "Enter the second number: ";
    cin >> numb2;

    do {
        cout << "Menu:\n";
        cout << "1. Find LCM\n";
        cout << "2. Find Factors\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "LCM of " << numb1 << " and " << numb2 << " is: " << lcm(numb1, numb2) << endl;
                break;

            case 2:
                
                factors(numb1);
                factors(numb2);
                break;

            case 3:
                cout << "Program Ends";
                break;

            default:
                cout << "Invalid choice. \n";
        }
    } while (choice != 3);

    return 0;
}

