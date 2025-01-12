#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000;
    double amount;

    do {
        cout << "ATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current balance: " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance)
                    cout << "Insufficient balance.";
                else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully.";
                }
                break;
            case 3:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "$" << amount << " deposited successfully.";
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice.  Try again";
        }
    } while (choice != 4);

    return 0;
}

