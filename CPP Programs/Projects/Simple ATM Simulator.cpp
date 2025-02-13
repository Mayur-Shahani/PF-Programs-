#include<iostream>
using namespace std;
int main() {
	int choice;
	int balance = 1000;
	int amount = 0;

	do {
		cout << "MENU" << endl;
		cout << "Welcome ATM Machine" << endl;
		cout << "1. Check balance" << endl;
		cout << "2.Withdraw" << endl;
		cout << "3.Deposit" << endl;
		cout << "4.Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Your Balance is " << balance << endl;
			break;

		case 2:
			cout << "Enter Amount to withdraw" << endl;

			cin >> amount;
			if (amount < balance) {
				balance = balance - amount;
			}
			else {
				cout << "Amount is greater than you balance" << endl;
			}
			cout << "Your Next Balance is " << balance;
			break;


		case 3:
			cout << "Enter your Amount to Deposit" << endl;
			cin >> amount;
			balance = balance + amount;
			break;

		case 4:
			cout << "Thanks for using ATM" << endl;
			break;


		default:
			cout << "PLease input Number between 1 to 4 " << endl;
			break;
		}
	} while (choice != 4);
	return 0;
}