#include <iostream>
using namespace std;
int main() {
    string name;
    int age;
    string gender;

    
	cout<< "Enter your Name: ";
	cin.ignore();
    getline(cin,name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender : ";
    cin >> gender;
    cout << endl;
 
    cout << "***** YOUR DATA *****" << endl;
    cout << " Your Name: " << name << endl;
    cout << "Your Age: " << age << endl;
    cout << "Your Gender: " << gender << endl;
    
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." <<endl;
    }

    return 0;
}