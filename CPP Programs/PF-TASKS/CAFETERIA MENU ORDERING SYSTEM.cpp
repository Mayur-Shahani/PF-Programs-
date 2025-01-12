#include <iostream>
using namespace std;

int main() {
    int choice;
    double totalBill = 0;

    do {
        cout << "Menu:\n";
        cout << "1. Tea - $2\n";
        cout << "2. Coffee - $3\n";
        cout << "3. Sandwich - $5\n";
        cout << "4. Burger - $7\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: totalBill += 2; break;
            case 2: totalBill += 3; break;
            case 3: totalBill += 5; break;
            case 4: totalBill += 7; break;
            case 5: break;
            default: cout << "Invalid ";
        }
    } while (choice != 5);

    cout << "Total bill: $" << totalBill << endl;
    return 0;
}

