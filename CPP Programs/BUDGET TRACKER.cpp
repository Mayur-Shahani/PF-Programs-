#include <iostream>
#include <string>
using namespace std;

void budgetTracker() {
    double balance = 0.0;
    int choice;

    bool tracking = true;
    while (tracking) {
        cout << " ----Budget Tracker---- \n ";
        cout << "1. Add Income\n";
        cout << "2. Add Expense\n";
        cout << "3. View Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) {
            cout << "Program Ended";
            tracking = false;
            continue;
        }

        switch (choice) {
            case 1: {
                float income;
                cout << "Enter Your Income:  ";
                cin >> income;
                balance = balance + income;
                cout << "Balance Added \n";
                break;
            }
            case 2: {
                double expense;
                cout << "Enter expense amount: ";
                cin >> expense;
                if (expense <= balance) {
                    balance = balance - expense;
                    cout << "Balance Deducted \n";
                } else {
                    cout << "Error: Insufficient balance.\n";
                }
                break;
            }
            case 3:
                cout << "Current Balance: " << balance << endl;
                break;
            default:
                cout << "Invalid choice.";
        }
    }
}

int main() {
    budgetTracker();
    return 0;
}

