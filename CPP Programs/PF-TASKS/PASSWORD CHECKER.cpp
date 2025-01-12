#include <iostream>
 using namespace std;
 int main() {
     string Password="1100",userPassword;
     int attempts=3;
 
     for (int i = 0; i < attempts; i++) {
         cout << "Enter password (Attempt " << i + 1 << " of " << attempts << "):";
        cin >> userPassword;
 
         if (userPassword == Password) {
             cout << "Correct Password" << endl;
             break;  
        } else {
             cout << "Incorrect password." << endl;
         }
     }
 
     if (userPassword != Password) {
         cout << "Access denied." << endl;
     }
 
     return 0;
}
