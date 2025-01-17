#include <iostream>
using namespace std;

int main() {
    int marks;
    
   
    cout << "Enter the marks obtained by the student : ";
    cin >> marks;
    
    
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else {
        if (marks >= 70 && marks < 90) {
            cout << "Grade: A" << endl;
        } else {
            if (marks >= 50 && marks < 70) {
                cout << "Grade: B" << endl;
            } else {
                if (marks < 50) {
                    cout << "Grade: F" << endl;
                }
            }
        }
    }

    return 0;
}

